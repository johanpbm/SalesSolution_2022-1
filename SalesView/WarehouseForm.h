#pragma once
#include "CarrierSearchForm.h"
namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de WarehouseForm
	/// </summary>
	public ref class WarehouseForm : public System::Windows::Forms::Form
	{
	public:
		WarehouseForm(void)
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
		~WarehouseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Id;
	protected:
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbCarriers;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtPostalCode;
	private: System::Windows::Forms::DataGridView^ dgvWarehouses;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WarehouseId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PostalCode;
	private: System::Windows::Forms::Button^ btnAddCarriers;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;

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
			this->Id = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbCarriers = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtPostalCode = (gcnew System::Windows::Forms::TextBox());
			this->dgvWarehouses = (gcnew System::Windows::Forms::DataGridView());
			this->btnAddCarriers = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->WarehouseId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PostalCode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWarehouses))->BeginInit();
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(28, 13);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(16, 13);
			this->Id->TabIndex = 0;
			this->Id->Text = L"Id";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(110, 13);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 20);
			this->txtId->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Dirección";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Código postal";
			// 
			// cmbCarriers
			// 
			this->cmbCarriers->FormattingEnabled = true;
			this->cmbCarriers->Location = System::Drawing::Point(110, 120);
			this->cmbCarriers->Name = L"cmbCarriers";
			this->cmbCarriers->Size = System::Drawing::Size(192, 21);
			this->cmbCarriers->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Transportistas";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(110, 39);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(258, 20);
			this->txtName->TabIndex = 7;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(110, 66);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(258, 20);
			this->txtAddress->TabIndex = 8;
			// 
			// txtPostalCode
			// 
			this->txtPostalCode->Location = System::Drawing::Point(110, 92);
			this->txtPostalCode->Name = L"txtPostalCode";
			this->txtPostalCode->Size = System::Drawing::Size(100, 20);
			this->txtPostalCode->TabIndex = 9;
			// 
			// dgvWarehouses
			// 
			this->dgvWarehouses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvWarehouses->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->WarehouseId,
					this->Name, this->PostalCode
			});
			this->dgvWarehouses->Location = System::Drawing::Point(12, 201);
			this->dgvWarehouses->Name = L"dgvWarehouses";
			this->dgvWarehouses->Size = System::Drawing::Size(409, 155);
			this->dgvWarehouses->TabIndex = 10;
			// 
			// btnAddCarriers
			// 
			this->btnAddCarriers->Location = System::Drawing::Point(308, 105);
			this->btnAddCarriers->Name = L"btnAddCarriers";
			this->btnAddCarriers->Size = System::Drawing::Size(95, 36);
			this->btnAddCarriers->TabIndex = 11;
			this->btnAddCarriers->Text = L"Agregar transportista";
			this->btnAddCarriers->UseVisualStyleBackColor = true;
			this->btnAddCarriers->Click += gcnew System::EventHandler(this, &WarehouseForm::btnAddCarriers_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(37, 161);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(97, 23);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(166, 161);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(100, 23);
			this->btnUpdate->TabIndex = 13;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(298, 161);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(95, 23);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// WarehouseId
			// 
			this->WarehouseId->HeaderText = L"Id";
			this->WarehouseId->Name = L"WarehouseId";
			this->WarehouseId->Width = 30;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->Name = L"Name";
			this->Name->Width = 250;
			// 
			// PostalCode
			// 
			this->PostalCode->HeaderText = L"Código postal";
			this->PostalCode->Name = L"PostalCode";
			// 
			// WarehouseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 372);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnAddCarriers);
			this->Controls->Add(this->dgvWarehouses);
			this->Controls->Add(this->txtPostalCode);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmbCarriers);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->Id);
			//this->Name = L"WarehouseForm";
			this->Text = L"Almacenes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWarehouses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddCarriers_Click(System::Object^ sender, System::EventArgs^ e) {
		CarrierSearchForm^ csForm = gcnew CarrierSearchForm(this);
		csForm->ShowDialog();
	}
};
}
