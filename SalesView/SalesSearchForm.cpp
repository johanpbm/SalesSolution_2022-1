#include "SalesSearchForm.h"
#include "CreditNoteForm.h"

System::Void SalesView::SalesSearchForm::dgvSales_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	int selectedRow = e->RowIndex;
	if (selectedRow >= 0) {
		if (dgvSales->Rows[selectedRow]->Cells[0] != nullptr &&
			dgvSales->Rows[selectedRow]->Cells[0]->Value != nullptr &&
			dgvSales->Rows[selectedRow]->Cells[0]->Value->ToString() != "") {

			dgvSales->Rows[selectedRow]->Selected = true;
			String^ saleId = dgvSales->Rows[selectedRow]->Cells[0]->Value->ToString();
			Sale^ s = SalesManager::QuerySaleById(Convert::ToInt32(saleId));
			/*Se agrega el objeto s al grid de la ventana que lo invoca*/
			if (refForm->GetType() == CreditNoteForm::typeid) {
				((CreditNoteForm^)refForm)->AddSaleToForm(s);
			}
			this->Close();
		}
	}

}
