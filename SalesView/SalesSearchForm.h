#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesModel;
	using namespace SalesController;

	/// <summary>
	/// Resumen de SalesSearchForm
	/// </summary>
	public ref class SalesSearchForm : public System::Windows::Forms::Form
	{
	public:
		Form^ refForm;
		SalesSearchForm(Form^ refForm)
		{
			this->refForm = refForm;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SalesSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSalesSearch;
	private: System::Windows::Forms::DataGridView^ dgvSales;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SaleId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;
	protected:






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
			this->btnSalesSearch = (gcnew System::Windows::Forms::Button());
			this->dgvSales = (gcnew System::Windows::Forms::DataGridView());
			this->SaleId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSales))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSalesSearch
			// 
			this->btnSalesSearch->Location = System::Drawing::Point(176, 12);
			this->btnSalesSearch->Name = L"btnSalesSearch";
			this->btnSalesSearch->Size = System::Drawing::Size(134, 23);
			this->btnSalesSearch->TabIndex = 0;
			this->btnSalesSearch->Text = L"Buscar ventas";
			this->btnSalesSearch->UseVisualStyleBackColor = true;
			this->btnSalesSearch->Click += gcnew System::EventHandler(this, &SalesSearchForm::btnSalesSearch_Click_1);
			// 
			// dgvSales
			// 
			this->dgvSales->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSales->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->SaleId, this->Date,
					this->CustomerName, this->Total
			});
			this->dgvSales->Location = System::Drawing::Point(13, 50);
			this->dgvSales->Name = L"dgvSales";
			this->dgvSales->Size = System::Drawing::Size(477, 177);
			this->dgvSales->TabIndex = 1;
			this->dgvSales->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SalesSearchForm::dgvSales_CellClick);
			// 
			// SaleId
			// 
			this->SaleId->HeaderText = L"Id";
			this->SaleId->Name = L"SaleId";
			this->SaleId->Width = 50;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Fecha";
			this->Date->Name = L"Date";
			// 
			// CustomerName
			// 
			this->CustomerName->HeaderText = L"Cliente";
			this->CustomerName->Name = L"CustomerName";
			this->CustomerName->Width = 200;
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			this->Total->Width = 80;
			// 
			// SalesSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 239);
			this->Controls->Add(this->dgvSales);
			this->Controls->Add(this->btnSalesSearch);
			this->Name = L"SalesSearchForm";
			this->Text = L"Búsqueda de ventas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSales))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnSalesSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnSalesSearch_Click_1(System::Object^ sender, System::EventArgs^ e) {
	List<Sale^>^ salesList = SalesManager::QueryAllSalesByStatus('C');
	dgvSales->Rows->Clear();
	for (int i = 0; i < salesList->Count; i++) {
		dgvSales->Rows->Add(gcnew array<String^>{
			Convert::ToString(salesList[i]->Id),
			salesList[i]->Date,
			salesList[i]->Customer->FirstName + " " + salesList[i]->Customer->LastName,
			Convert::ToString(salesList[i]->Total)
		}
		);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Sale^>^ salesList = SalesManager::QueryAllSales();
	dgvSales->Rows->Clear();
	for (int i = 0; i < salesList->Count; i++) {
		dgvSales->Rows->Add(gcnew array<String^>{
			"" + salesList[i]->Id,
				salesList[i]->Customer->FirstName + " " + salesList[i]->Customer->LastName,
				"" + salesList[i]->Total
		}
		);
	}

}
private: System::Void dgvSales_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void dgvSales_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
