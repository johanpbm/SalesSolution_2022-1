#pragma once
#include "ComboBoxItem.h"
namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace SalesModel;
	using namespace SalesController;

	/// <summary>
	/// Resumen de DepartmentForm
	/// </summary>
	public ref class DepartmentForm : public System::Windows::Forms::Form
	{
	public:
		DepartmentForm(void)
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
		~DepartmentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::ComboBox^ cmbManager;
	private: System::Windows::Forms::TextBox^ txtComission;
	private: System::Windows::Forms::DataGridView^ dgvDepartments;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->cmbManager = (gcnew System::Windows::Forms::ComboBox());
			this->txtComission = (gcnew System::Windows::Forms::TextBox());
			this->dgvDepartments = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDepartments))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Gerente";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Comisión";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(111, 35);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(100, 20);
			this->txtId->TabIndex = 4;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(111, 62);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(235, 20);
			this->txtName->TabIndex = 5;
			// 
			// cmbManager
			// 
			this->cmbManager->FormattingEnabled = true;
			this->cmbManager->Location = System::Drawing::Point(111, 89);
			this->cmbManager->Name = L"cmbManager";
			this->cmbManager->Size = System::Drawing::Size(235, 21);
			this->cmbManager->TabIndex = 6;
			// 
			// txtComission
			// 
			this->txtComission->Location = System::Drawing::Point(111, 116);
			this->txtComission->Name = L"txtComission";
			this->txtComission->Size = System::Drawing::Size(100, 20);
			this->txtComission->TabIndex = 7;
			// 
			// dgvDepartments
			// 
			this->dgvDepartments->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDepartments->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Id, this->Name });
			this->dgvDepartments->Location = System::Drawing::Point(12, 191);
			this->dgvDepartments->Name = L"dgvDepartments";
			this->dgvDepartments->Size = System::Drawing::Size(355, 150);
			this->dgvDepartments->TabIndex = 8;
			this->dgvDepartments->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DepartmentForm::dgvDepartments_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->Width = 30;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->Name = L"Name";
			this->Name->Width = 300;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(27, 149);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(94, 23);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &DepartmentForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(141, 149);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(103, 23);
			this->btnUpdate->TabIndex = 10;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &DepartmentForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(263, 149);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(95, 23);
			this->btnDelete->TabIndex = 11;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &DepartmentForm::btnDelete_Click);
			// 
			// DepartmentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(393, 371);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvDepartments);
			this->Controls->Add(this->txtComission);
			this->Controls->Add(this->cmbManager);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			//this->Name = L"DepartmentForm";
			this->Text = L"Departmentos";
			this->Load += gcnew System::EventHandler(this, &DepartmentForm::DepartmentForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDepartments))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DepartmentForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadCmbManagers();
		RefreshDGVDepartments();
	}
	void LoadCmbManagers() {
		cmbManager->Items->Clear();
		List <Manager^>^ managerList = SalesManager::QueryAllManagers();
		for (int i = 0; i < managerList->Count; i++)
			cmbManager->Items->Add(gcnew ComboBoxItem(
				managerList[i]->FirstName + " " + managerList[i]->LastName, 
				managerList[i]->Id));
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Department^ s = gcnew Department();
	try {
		/*if (txtId->Text->Trim() == "") {
			MessageBox::Show("El Id no debe estar vacío.");
			return;
		}
		*/
		if (txtName->Text->Trim() == "") {
			MessageBox::Show("El nombre del departamento no debe estar vacío.");
			return;
		}
		if (txtComission->Text->Trim() == "") {
			MessageBox::Show("La comisión no debe estar vacío.");
			return;
		}
		if (cmbManager->SelectedIndex < 0) {
			MessageBox::Show("Debe seleccionar un gerente");
			return;
		}

		s->Id = SalesManager::QueryLastDepartmentId() + 1;
		s->Name = txtName->Text;
		s->comission = Double::Parse(txtComission->Text);
		Manager^ man = SalesManager::QueryManagerById(((ComboBoxItem^)cmbManager->Items[cmbManager->SelectedIndex])->Value);
		s->Administrator = man;
		SalesManager::AddDepartment(s);
		RefreshDGVDepartments();
		//btnAdd->Enabled = true;
		ClearControls();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "No se guardó el administrador por error en los datos.");
		return;
	}

}

	   void RefreshDGVDepartments() {
		   List <Department^>^ departmentList = SalesManager::QueryAllDepartments();
		   dgvDepartments->Rows->Clear();
		   for (int i = 0; i < departmentList->Count; i++) {
			   dgvDepartments->Rows->Add(gcnew array<String^> {
				   "" + departmentList[i]->Id,
					   departmentList[i]->Name
			   });
		   }
	   }
	   void ClearControls() {
		   txtId->Text = "";
		   txtName->Text = "";
		   txtComission->Text = "";
	   }

private: System::Void dgvDepartments_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvDepartments->CurrentCell != nullptr &&
		dgvDepartments->CurrentCell->Value != nullptr &&
		dgvDepartments->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvDepartments->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvDepartments->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int departmentId = Int32::Parse(a);
		Department^ dept = SalesManager::QueryDepartmentById(departmentId);

		if (dept != nullptr) {
			txtId->Text = "" + dept->Id;
			txtName->Text = dept->Name;
			txtComission->Text = "" + dept->comission;
			
			for (int i = 0; i < cmbManager->Items->Count; i++) {
				ComboBoxItem^ cmbi = ((ComboBoxItem^)cmbManager->Items[i]);
				if (cmbi->Value.Equals(dept->Administrator->Id)) {
					cmbManager->SelectedIndex = i;
					break;
				}
			}
			
		}
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int deptId = -1;
	try {
		if (txtId->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ningún departamento seleccionado.");
			return;
		}
		deptId = Convert::ToInt32(txtId->Text);
	}
	catch (...) {
		MessageBox::Show("No se puede eliminar el departamento porque el Id no es válido.");
		return;
	}
	if (MessageBox::Show(
		"¿Está seguro de eliminar el departamento?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		SalesManager::DeleteDepartment(deptId);
		RefreshDGVDepartments();
		ClearControls();
	}

}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Department^ s = gcnew Department();
	try {
		if (txtId->Text->Trim() == "") {
			MessageBox::Show("Debe seleccionar un departamento.");
			return;
		}
		if (txtName->Text->Trim() == "") {
			MessageBox::Show("El nombre del departamento no debe estar vacío.");
			return;
		}

		s->Id = Int32::Parse(txtId->Text);
		s->Name = txtName->Text;
		s->comission = Convert::ToDouble(txtComission->Text);
		s->Administrator = SalesManager::QueryManagerById(((ComboBoxItem^)cmbManager->Items[cmbManager->SelectedIndex])->Value);
		//s->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");

		SalesManager::UpdateDepartment(s);
		RefreshDGVDepartments();
		//btnAdd->Enabled = true;
		ClearControls();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "No se guardó el administrador por error en los datos.");
		return;
	}

}
};
}
