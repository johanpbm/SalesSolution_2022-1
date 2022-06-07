#include "CreditNoteForm.h"

int SalesView::CreditNoteForm::ValidarDatos()
{
	//-1: No se ha elegido una venta
	//-2: La fecha es menor a la fecha actual
	//-3: No hay detalles de venta para la nota de crédito
	if (txtSaleId->Text->Trim() == "") {
		return -1;
	}
	if (dtpDate->Value <= DateTime::Today.AddDays(-1))
		return -2;
	if (dgvCreditNoteDetails->Rows->Count <= 0)
		return -3;
	return 1;
}

System::Void SalesView::CreditNoteForm::btnAddCreditNote_Click(System::Object^ sender, System::EventArgs^ e)
{
	int validatedData = ValidarDatos();
	if (validatedData == -1) {
		MessageBox::Show("Debe seleccionar una venta.");
	}
	else if (validatedData == -2) {
		MessageBox::Show("La fecha no debe ser anterior a la fecha actual.");
	}
	else if (validatedData == -3) {
		MessageBox::Show("Debe haber por lo menos un detalle de venta.");
	}
	else {
		CreditNote^ creditNote = gcnew CreditNote();
		DateTime dt = dtpDate->Value;
		creditNote->EmissionDate = dt.ToString("yyyy-MM-dd");
		creditNote->Sale = refSale;
		if (rbtnTotalDev->Checked) {
			creditNote->Reference = "Devolución total";
			CreditNoteConcept^ cnc = gcnew CreditNoteConcept();
			cnc->Id = 1;
			cnc->Description = "ANULACIÓN";
			creditNote->Concept = cnc;
			creditNote->Total = Double::Parse(txtTotal->Text);
			creditNote->Sale->Status = 'A';
		} else {
			creditNote->Reference = "Devolución parcial";
			CreditNoteConcept^ cnc = gcnew CreditNoteConcept();
			cnc->Id = 2;
			cnc->Description = "DEVOLUCIÓN PARCIAL";
			creditNote->Concept = cnc;
			creditNote->Total = Double::Parse(txtCreditNoteTotal->Text);
			creditNote->Sale->Status = 'N';
			creditNote->Details = gcnew List<CreditNoteDetail^>();
			CreditNoteDetail^ creditNoteDetail;
			for (int i = 0; i < dgvCreditNoteDetails->RowCount - 1; i++) {
				creditNoteDetail = gcnew CreditNoteDetail();
				int creditNoteDetailId = Int32::Parse(dgvCreditNoteDetails->Rows[i]->Cells[0]->Value->ToString());
				creditNoteDetail->Id = creditNoteDetailId;
				creditNoteDetail->Detail = SalesManager::QuerySaleDetailById(creditNote->Sale,creditNoteDetailId);
				creditNoteDetail->Quantity = Convert::ToInt32(dgvCreditNoteDetails->Rows[i]->Cells[3]->Value->ToString());
				creditNoteDetail->Amount = Convert::ToDouble(dgvCreditNoteDetails->Rows[i]->Cells[4]->Value->ToString());
				creditNote->Details->Add(creditNoteDetail);
			}
		}
		SalesManager::UpdateSale(creditNote->Sale);
		SalesManager::RegisterCreditNote(creditNote);
		MessageBox::Show("Se ha registrado la nota de crédito exitosamente para el cliente " + creditNote->Sale->Customer->FirstName + " " + creditNote->Sale->Customer->LastName);
		DisableControls();
	}
}
