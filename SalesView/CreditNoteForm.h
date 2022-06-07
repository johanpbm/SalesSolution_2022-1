#pragma once
#include "SalesSearchForm.h"

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesModel;
	using namespace SalesController;

	/// <summary>
	/// Resumen de CreditNoteForm
	/// </summary>
	public ref class CreditNoteForm : public System::Windows::Forms::Form
	{
	public:
		Sale^ refSale;
		CreditNoteForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CreditNoteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::RadioButton^ rbtnPartialDev;
	private: System::Windows::Forms::RadioButton^ rbtnTotalDev;
	private: System::Windows::Forms::DateTimePicker^ dtpDate;
	private: System::Windows::Forms::TextBox^ txtSaleId;
	private: System::Windows::Forms::TextBox^ txtSaleCustomerName;
	private: System::Windows::Forms::Button^ btnAddSale;
	private: System::Windows::Forms::Button^ btnAddCreditNote;

	private: System::Windows::Forms::Button^ btnDeleteSaleDetail;
	private: System::Windows::Forms::DataGridView^ dgvCreditNoteDetails;






	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevaNotaDeCréditoToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtCreditNoteTotal;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SaleDetailId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Product;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UnitPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Amount;











	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnPartialDev = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnTotalDev = (gcnew System::Windows::Forms::RadioButton());
			this->dtpDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtSaleId = (gcnew System::Windows::Forms::TextBox());
			this->txtSaleCustomerName = (gcnew System::Windows::Forms::TextBox());
			this->btnAddSale = (gcnew System::Windows::Forms::Button());
			this->btnAddCreditNote = (gcnew System::Windows::Forms::Button());
			this->btnDeleteSaleDetail = (gcnew System::Windows::Forms::Button());
			this->dgvCreditNoteDetails = (gcnew System::Windows::Forms::DataGridView());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevaNotaDeCréditoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtCreditNoteTotal = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SaleDetailId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Product = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UnitPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCreditNoteDetails))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnPartialDev);
			this->groupBox1->Controls->Add(this->rbtnTotalDev);
			this->groupBox1->Location = System::Drawing::Point(21, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(521, 57);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Concepto de Nota de Crédito";
			// 
			// rbtnPartialDev
			// 
			this->rbtnPartialDev->AutoSize = true;
			this->rbtnPartialDev->Location = System::Drawing::Point(236, 20);
			this->rbtnPartialDev->Name = L"rbtnPartialDev";
			this->rbtnPartialDev->Size = System::Drawing::Size(114, 17);
			this->rbtnPartialDev->TabIndex = 1;
			this->rbtnPartialDev->Text = L"Devolución Parcial";
			this->rbtnPartialDev->UseVisualStyleBackColor = true;
			this->rbtnPartialDev->CheckedChanged += gcnew System::EventHandler(this, &CreditNoteForm::rbtnPartialDev_CheckedChanged);
			// 
			// rbtnTotalDev
			// 
			this->rbtnTotalDev->AutoSize = true;
			this->rbtnTotalDev->Checked = true;
			this->rbtnTotalDev->Location = System::Drawing::Point(22, 20);
			this->rbtnTotalDev->Name = L"rbtnTotalDev";
			this->rbtnTotalDev->Size = System::Drawing::Size(106, 17);
			this->rbtnTotalDev->TabIndex = 0;
			this->rbtnTotalDev->TabStop = true;
			this->rbtnTotalDev->Text = L"Devolución Total";
			this->rbtnTotalDev->UseVisualStyleBackColor = true;
			this->rbtnTotalDev->CheckedChanged += gcnew System::EventHandler(this, &CreditNoteForm::rbtnTotalDev_CheckedChanged);
			// 
			// dtpDate
			// 
			this->dtpDate->Location = System::Drawing::Point(121, 91);
			this->dtpDate->Name = L"dtpDate";
			this->dtpDate->Size = System::Drawing::Size(200, 20);
			this->dtpDate->TabIndex = 1;
			// 
			// txtSaleId
			// 
			this->txtSaleId->Location = System::Drawing::Point(34, 117);
			this->txtSaleId->Name = L"txtSaleId";
			this->txtSaleId->ReadOnly = true;
			this->txtSaleId->Size = System::Drawing::Size(56, 20);
			this->txtSaleId->TabIndex = 2;
			// 
			// txtSaleCustomerName
			// 
			this->txtSaleCustomerName->Location = System::Drawing::Point(107, 118);
			this->txtSaleCustomerName->Name = L"txtSaleCustomerName";
			this->txtSaleCustomerName->ReadOnly = true;
			this->txtSaleCustomerName->Size = System::Drawing::Size(209, 20);
			this->txtSaleCustomerName->TabIndex = 3;
			// 
			// btnAddSale
			// 
			this->btnAddSale->Location = System::Drawing::Point(433, 115);
			this->btnAddSale->Name = L"btnAddSale";
			this->btnAddSale->Size = System::Drawing::Size(109, 23);
			this->btnAddSale->TabIndex = 4;
			this->btnAddSale->Text = L"Seleccionar Venta";
			this->btnAddSale->UseVisualStyleBackColor = true;
			this->btnAddSale->Click += gcnew System::EventHandler(this, &CreditNoteForm::btnAddSale_Click);
			// 
			// btnAddCreditNote
			// 
			this->btnAddCreditNote->Location = System::Drawing::Point(34, 322);
			this->btnAddCreditNote->Name = L"btnAddCreditNote";
			this->btnAddCreditNote->Size = System::Drawing::Size(138, 23);
			this->btnAddCreditNote->TabIndex = 5;
			this->btnAddCreditNote->Text = L"Generar nota de crédito";
			this->btnAddCreditNote->UseVisualStyleBackColor = true;
			this->btnAddCreditNote->Click += gcnew System::EventHandler(this, &CreditNoteForm::btnAddCreditNote_Click);
			// 
			// btnDeleteSaleDetail
			// 
			this->btnDeleteSaleDetail->Location = System::Drawing::Point(402, 156);
			this->btnDeleteSaleDetail->Name = L"btnDeleteSaleDetail";
			this->btnDeleteSaleDetail->Size = System::Drawing::Size(140, 23);
			this->btnDeleteSaleDetail->TabIndex = 7;
			this->btnDeleteSaleDetail->Text = L"Eliminar detalle venta";
			this->btnDeleteSaleDetail->UseVisualStyleBackColor = true;
			this->btnDeleteSaleDetail->Click += gcnew System::EventHandler(this, &CreditNoteForm::btnDeleteSaleDetail_Click);
			// 
			// dgvCreditNoteDetails
			// 
			this->dgvCreditNoteDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCreditNoteDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->SaleDetailId,
					this->Product, this->UnitPrice, this->Quantity, this->Amount
			});
			this->dgvCreditNoteDetails->Location = System::Drawing::Point(21, 185);
			this->dgvCreditNoteDetails->Name = L"dgvCreditNoteDetails";
			this->dgvCreditNoteDetails->Size = System::Drawing::Size(521, 131);
			this->dgvCreditNoteDetails->TabIndex = 8;
			this->dgvCreditNoteDetails->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CreditNoteForm::dgvCreditNoteDetails_CellValueChanged);
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(322, 118);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(100, 20);
			this->txtTotal->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Fecha de emisión";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Id. Venta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(191, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Cliente";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(346, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Total (S/.)";
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(554, 24);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->nuevaNotaDeCréditoToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevaNotaDeCréditoToolStripMenuItem
			// 
			this->nuevaNotaDeCréditoToolStripMenuItem->Name = L"nuevaNotaDeCréditoToolStripMenuItem";
			this->nuevaNotaDeCréditoToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->nuevaNotaDeCréditoToolStripMenuItem->Text = L"Nueva nota de crédito";
			this->nuevaNotaDeCréditoToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreditNoteForm::nuevaNotaDeCréditoToolStripMenuItem_Click);
			// 
			// txtCreditNoteTotal
			// 
			this->txtCreditNoteTotal->Location = System::Drawing::Point(460, 322);
			this->txtCreditNoteTotal->Name = L"txtCreditNoteTotal";
			this->txtCreditNoteTotal->ReadOnly = true;
			this->txtCreditNoteTotal->Size = System::Drawing::Size(82, 20);
			this->txtCreditNoteTotal->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(274, 326);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Monto total de la nota de crédito (S/.)";
			// 
			// SaleDetailId
			// 
			this->SaleDetailId->HeaderText = L"Id Detalle Venta";
			this->SaleDetailId->Name = L"SaleDetailId";
			this->SaleDetailId->ReadOnly = true;
			this->SaleDetailId->Width = 50;
			// 
			// Product
			// 
			this->Product->HeaderText = L"Producto";
			this->Product->Name = L"Product";
			this->Product->ReadOnly = true;
			this->Product->Width = 235;
			// 
			// UnitPrice
			// 
			this->UnitPrice->HeaderText = L"PU (S/.)";
			this->UnitPrice->Name = L"UnitPrice";
			this->UnitPrice->ReadOnly = true;
			this->UnitPrice->Width = 60;
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Cant.";
			this->Quantity->Name = L"Quantity";
			this->Quantity->Width = 50;
			// 
			// Amount
			// 
			this->Amount->HeaderText = L"Monto (S/.)";
			this->Amount->Name = L"Amount";
			this->Amount->ReadOnly = true;
			this->Amount->Width = 80;
			// 
			// CreditNoteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 353);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtCreditNoteTotal);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->dgvCreditNoteDetails);
			this->Controls->Add(this->btnDeleteSaleDetail);
			this->Controls->Add(this->btnAddCreditNote);
			this->Controls->Add(this->btnAddSale);
			this->Controls->Add(this->txtSaleCustomerName);
			this->Controls->Add(this->txtSaleId);
			this->Controls->Add(this->dtpDate);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CreditNoteForm";
			this->Text = L"Generación de Nota de Crédito";
			this->Load += gcnew System::EventHandler(this, &CreditNoteForm::CreditNoteForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCreditNoteDetails))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddSale_Click(System::Object^ sender, System::EventArgs^ e) {
		SalesSearchForm^ salesSearchForm = gcnew SalesSearchForm(this);
		salesSearchForm->ShowDialog();
	}
	public: void AddSaleToForm(Sale ^s) {
		refSale = s;
		txtSaleId->Text = Convert::ToString(s->Id);
		txtSaleCustomerName->Text = s->Customer->FirstName + " " + s->Customer->LastName;
		txtTotal->Text = Convert::ToString(s->Total);
		dgvCreditNoteDetails->Rows->Clear();
		double total = 0;
		for (int i = 0; i < s->Details->Count; i++) {
			String^ name;
			if (s->Details[i]->Product->Product->GetType() == Book::typeid)
				name = ((Book^)(s->Details[i]->Product->Product))->Title;
			else
				name = ((Electronic^)(s->Details[i]->Product->Product))->Name;

			this->dgvCreditNoteDetails->Rows->Add(gcnew array<String^>{
				Convert::ToString(s->Details[i]->Id),
				name,
				Convert::ToString(s->Details[i]->UnitPrice),
				Convert::ToString(s->Details[i]->Quantity),
				Convert::ToString(s->Details[i]->SubTotal)
			});
			total += s->Details[i]->SubTotal;
		}
		txtCreditNoteTotal->Text = Convert::ToString(total);
	}
		  int ValidarDatos();
private: System::Void btnAddCreditNote_Click(System::Object^ sender, System::EventArgs^ e); 

private: System::Void rbtnTotalDev_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	btnDeleteSaleDetail->Enabled = false;
}
private: System::Void rbtnPartialDev_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	btnDeleteSaleDetail->Enabled = true;
}
private: System::Void CreditNoteForm_Load(System::Object^ sender, System::EventArgs^ e) {
	if (rbtnTotalDev->Checked) {
		btnDeleteSaleDetail->Enabled = false;
	}
}
	   void DisableControls() {
		   btnAddSale->Enabled = false;
		   btnDeleteSaleDetail->Enabled = false;
		   btnAddCreditNote->Enabled = false;
	   }
private: System::Void nuevaNotaDeCréditoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddSale->Enabled = true;
	btnDeleteSaleDetail->Enabled = true;
	btnAddCreditNote->Enabled = true;
	dgvCreditNoteDetails->Rows->Clear();
}
private: System::Void btnDeleteSaleDetail_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedRows = dgvCreditNoteDetails->SelectedRows->Count;
	if (selectedRows == 1) {
		dgvCreditNoteDetails->Rows->RemoveAt(dgvCreditNoteDetails->SelectedRows[0]->Index);
		double total = 0;
		for (int i = 0; i < dgvCreditNoteDetails->RowCount - 1; i++)
			total += Double::Parse(dgvCreditNoteDetails->Rows[i]->Cells[4]->Value->ToString());
		txtCreditNoteTotal->Text = "" + total;
	}
	else {
		MessageBox::Show("Para eliminar un detalle debe seleccionar todo el registro");
	}

}
private: System::Void dgvCreditNoteDetails_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvCreditNoteDetails->Columns[e->ColumnIndex]->Name == "Quantity") {
		if (dgvCreditNoteDetails->CurrentCell != nullptr &&
			dgvCreditNoteDetails->CurrentCell->Value != nullptr &&
			dgvCreditNoteDetails->CurrentCell->Value->ToString() != "") {
			dgvCreditNoteDetails->Rows[e->RowIndex]->Cells[4]->Value =
				Int32::Parse(dgvCreditNoteDetails->CurrentCell->Value->ToString())
				* Double::Parse(dgvCreditNoteDetails->Rows[e->RowIndex]->Cells[2]->Value->ToString());
			double total = 0;
			for (int i = 0; i < dgvCreditNoteDetails->RowCount - 1; i++)
				total += Double::Parse(dgvCreditNoteDetails->Rows[i]->Cells[4]->Value->ToString());
			txtCreditNoteTotal->Text = "" + total;
		}
	}
}
};
}
