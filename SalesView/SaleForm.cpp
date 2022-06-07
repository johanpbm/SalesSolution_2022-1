#include "SalesMainForm.h"
#include "SaleForm.h"


int SalesView::SaleForm::ValidarDatos()
{
	//-1: No se ha elegido un cliente
	//-2: La fecha es menor a la fecha actual
	//-3: No hay un total
	//-4: No se ha elegido un vendedor
	if (cmbCustomers->SelectedIndex < 0)
		return -1;
	if (dtpSaleDate->Value <= DateTime::Today.AddDays(-1))
		return -2;
	if (txtTotal->Text=="" || Double::Parse(txtTotal->Text) <= 0) {
		return -3;
	}
	if (cmbSalesman->SelectedIndex < 0)
		return -4;
	return 1;
}

System::Void SalesView::SaleForm::btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e) {
	int validatedData = ValidarDatos();
	if (validatedData == -1) {
		MessageBox::Show("Debe seleccionar un cliente.");
	}
	else if (validatedData == -2) {
		MessageBox::Show("La fecha no debe ser anterior a la fecha actual.");
	}
	else if (validatedData == -3) {
		MessageBox::Show("El total debe ser mayor a cero.");
	}
	if (validatedData == -4) {
		MessageBox::Show("Debe seleccionar un vendedor.");
	}
	else {
		Sale^ sale = gcnew Sale();
		sale->Id = SalesManager::QueryLastSaleId() + 1;
		int customerId = ((ComboBoxItem^)cmbCustomers->SelectedItem)->Value;
		sale->Customer = SalesManager::QueryCustomerById(customerId);
		DateTime dt = dtpSaleDate->Value;
		sale->Date = dt.ToString("dd/MM/yyyy HH:mm:ss");
		sale->Total = Convert::ToDouble(txtTotal->Text);
		sale->Status = 'C';
		int salesmanId = ((ComboBoxItem^)cmbSalesman->SelectedItem)->Value;
		sale->Salesman = SalesManager::QuerySalesmanById(salesmanId);
		sale->Store = SalesManager::QueryStoreById(((ComboBoxItem^)cmbStore->SelectedItem)->Value);
		sale->Details = gcnew List<SaleDetail^>();
		SaleDetail^ saleDetail;
		for (int i = 0; i < dgvDetails->RowCount - 1; i++) {
			saleDetail = gcnew SaleDetail();
			int productId = Int32::Parse(dgvDetails->Rows[i]->Cells[0]->Value->ToString());
			saleDetail->Id = i + 1;
			saleDetail->Product = SalesManager::QueryProductByIdFromStore(sale->Store, productId);
			saleDetail->UnitPrice = Convert::ToDouble(dgvDetails->Rows[i]->Cells[2]->Value->ToString());
			saleDetail->Quantity = Convert::ToInt32(dgvDetails->Rows[i]->Cells[3]->Value->ToString());
			saleDetail->SubTotal = Convert::ToDouble(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
			sale->Details->Add(saleDetail);
		}
		SalesManager::RegisterSale(sale);
		MessageBox::Show("Se ha registrado la venta exitosamente para el cliente " + cmbCustomers->Text);
		DisableControls();
	}
}