#pragma once
#include "ComboBoxItem.h"

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
	/// Resumen de AdministratorForm
	/// </summary>
	public ref class AdministratorForm : public System::Windows::Forms::Form
	{
	public:
		AdministratorForm(void)
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
		~AdministratorForm()
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


	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::RadioButton^ rbtnMale;
	private: System::Windows::Forms::RadioButton^ rbtnFemale;







	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtEmployeesNumber;
	private: System::Windows::Forms::TextBox^ txtSalary;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dgvAdministrators;





	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ firstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastName;





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
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->rbtnMale = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnFemale = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtEmployeesNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtSalary = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dgvAdministrators = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->firstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAdministrators))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(311, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido (*)";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(116, 3);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(46, 20);
			this->txtId->TabIndex = 5;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(115, 29);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(162, 20);
			this->txtName->TabIndex = 6;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(380, 28);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(180, 20);
			this->txtLastName->TabIndex = 7;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(234, 4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(108, 20);
			this->txtUsername->TabIndex = 8;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(422, 3);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(138, 20);
			this->txtPassword->TabIndex = 9;
			// 
			// rbtnMale
			// 
			this->rbtnMale->AutoSize = true;
			this->rbtnMale->Checked = true;
			this->rbtnMale->Location = System::Drawing::Point(6, 16);
			this->rbtnMale->Name = L"rbtnMale";
			this->rbtnMale->Size = System::Drawing::Size(73, 17);
			this->rbtnMale->TabIndex = 10;
			this->rbtnMale->TabStop = true;
			this->rbtnMale->Text = L"Masculino";
			this->rbtnMale->UseVisualStyleBackColor = true;
			// 
			// rbtnFemale
			// 
			this->rbtnFemale->AutoSize = true;
			this->rbtnFemale->Location = System::Drawing::Point(85, 16);
			this->rbtnFemale->Name = L"rbtnFemale";
			this->rbtnFemale->Size = System::Drawing::Size(71, 17);
			this->rbtnFemale->TabIndex = 11;
			this->rbtnFemale->Text = L"Femenino";
			this->rbtnFemale->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnMale);
			this->groupBox1->Controls->Add(this->rbtnFemale);
			this->groupBox1->Location = System::Drawing::Point(115, 129);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(162, 37);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			// 
			// txtEmployeesNumber
			// 
			this->txtEmployeesNumber->Location = System::Drawing::Point(115, 173);
			this->txtEmployeesNumber->Name = L"txtEmployeesNumber";
			this->txtEmployeesNumber->Size = System::Drawing::Size(133, 20);
			this->txtEmployeesNumber->TabIndex = 13;
			// 
			// txtSalary
			// 
			this->txtSalary->Location = System::Drawing::Point(362, 171);
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(198, 20);
			this->txtSalary->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Género (*)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Núm. empleados (*)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(285, 175);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Salario S/. (*)";
			// 
			// dgvAdministrators
			// 
			this->dgvAdministrators->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAdministrators->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id,
					this->username, this->firstName, this->lastName
			});
			this->dgvAdministrators->Location = System::Drawing::Point(12, 240);
			this->dgvAdministrators->Name = L"dgvAdministrators";
			this->dgvAdministrators->Size = System::Drawing::Size(548, 106);
			this->dgvAdministrators->TabIndex = 18;
			this->dgvAdministrators->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdministratorForm::dgvAdministrators_CellClick);
			// 
			// id
			// 
			this->id->HeaderText = L"Id";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Width = 30;
			// 
			// username
			// 
			this->username->HeaderText = L"Usuario";
			this->username->Name = L"username";
			this->username->ReadOnly = true;
			// 
			// firstName
			// 
			this->firstName->HeaderText = L"Nombre";
			this->firstName->Name = L"firstName";
			this->firstName->ReadOnly = true;
			this->firstName->Width = 180;
			// 
			// lastName
			// 
			this->lastName->HeaderText = L"Apellido";
			this->lastName->Name = L"lastName";
			this->lastName->ReadOnly = true;
			this->lastName->Width = 180;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(111, 206);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(105, 23);
			this->btnAdd->TabIndex = 19;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AdministratorForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(248, 206);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(107, 23);
			this->btnUpdate->TabIndex = 20;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &AdministratorForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(385, 205);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(98, 23);
			this->btnDelete->TabIndex = 21;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &AdministratorForm::btnDelete_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(174, 6);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Usuario (*)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(346, 7);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Contraseña (*)";
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(361, 108);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(200, 20);
			this->dtpBirthday->TabIndex = 47;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(260, 111);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(95, 13);
			this->label24->TabIndex = 46;
			this->label24->Text = L"Fec. nacimiento (*)";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(115, 80);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(445, 20);
			this->txtEmail->TabIndex = 45;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(14, 83);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 13);
			this->label16->TabIndex = 44;
			this->label16->Text = L"Email (*)";
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(115, 108);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(133, 20);
			this->txtPhoneNumber->TabIndex = 43;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 111);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 13);
			this->label14->TabIndex = 42;
			this->label14->Text = L"Teléfono (*)";
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(115, 54);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(446, 20);
			this->txtAddress->TabIndex = 41;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(13, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 13);
			this->label12->TabIndex = 40;
			this->label12->Text = L"Dirección (*)";
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(361, 139);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(199, 20);
			this->txtDNI->TabIndex = 49;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(316, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 48;
			this->label4->Text = L"DNI (*)";
			// 
			// AdministratorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 360);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvAdministrators);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtSalary);
			this->Controls->Add(this->txtEmployeesNumber);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AdministratorForm";
			this->Text = L"Gerentes";
			this->Load += gcnew System::EventHandler(this, &AdministratorForm::AdministratorForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAdministrators))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		//Manager^ s = gcnew Manager();
		User^ s = gcnew Manager();
		try {
			if (txtUsername->Text->Trim() == "") {
				MessageBox::Show("El nombre del usuario no debe estar vacío.");
				return;
			}
			if (txtPassword->Text->Trim() == "") {
				MessageBox::Show("El password del gerente no debe estar vacío.");
				return;
			}
			if (txtName->Text->Trim() == "") {
				MessageBox::Show("El nombre del gerente no debe estar vacío.");
				return;
			}
			if (txtLastName->Text->Trim() == "") {
				MessageBox::Show("El apellido del gerente no debe estar vacío.");
				return;
			}
			if (txtAddress->Text->Trim() == "") {
				MessageBox::Show("La dirección del gerente no debe estar vacío.");
				return;
			}
			if (txtPhoneNumber->Text->Trim() == "") {
				MessageBox::Show("El teléfono del gerente no debe estar vacío.");
				return;
			}
			if (txtEmail->Text->Trim() == "") {
				MessageBox::Show("La correo del gerente no debe estar vacío.");
				return;
			}
			if (txtDNI->Text->Trim() == "") {
				MessageBox::Show("El DNI del gerente no debe estar vacío.");
				return;
			}
			if (txtSalary->Text->Trim() == "") {
				MessageBox::Show("El salario no debe estar vacío.");
				return;
			}
			if (txtEmployeesNumber->Text->Trim() == "") {
				MessageBox::Show("El número de empleados no debe estar vacío.");
				return;
			}
			
			s->Id = SalesManager::QueryLastManagerId() + 1;
			s->Username = txtUsername->Text;
			s->Password = txtPassword->Text;
			s->FirstName = txtName->Text;
			s->LastName = txtLastName->Text;
			((Manager^)s)->Salary= Double::Parse(txtSalary->Text);
			((Manager^)s)->EmployeesNumber = Int32::Parse(txtEmployeesNumber->Text);
			s->Gender = rbtnMale->Checked ? 'H' : 'M';
			s->Address = txtAddress->Text;
			s->DocumentNumber = txtDNI->Text;
			s->Email = txtEmail->Text;
			s->PhoneNumber = txtPhoneNumber->Text;
			s->Status = 'A';
			//s->Department = ((ComboBoxItem^)cmbDepartment->Items[cmbDepartment->SelectedIndex])->Name;
			s->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
			SalesManager::AddManager((Manager^)s);
			SalesManager::AddUser(s);
			RefreshDGVAdministrators();
			//btnAdd->Enabled = true;
			ClearControls();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "No se guardó el administrador por error en los datos.");
			return;
		}
	}

	void ClearControls() {
		txtId->Text = "";
		txtName->Text = "";
		txtPassword->Text = "";
		txtUsername->Text = "";
		txtLastName->Text = "";
		txtAddress->Clear();
		txtDNI->Clear();
		txtPhoneNumber->Clear();
		txtEmail->Clear();
		dtpBirthday->ResetText();
		txtSalary->Text = "";
		txtEmployeesNumber->Text = "";

	}

	void RefreshDGVAdministrators() {
		List <Manager^>^ administratorList = SalesManager::QueryAllManagers();
		dgvAdministrators->Rows->Clear();
		for (int i = 0; i < administratorList->Count; i++) {
			dgvAdministrators->Rows->Add(gcnew array<String^> {
				"" + administratorList[i]->Id,
					administratorList[i]->Username,
					administratorList[i]->FirstName,
					administratorList[i]->LastName
			});
		}
	}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Manager^ s = gcnew Manager();
	try {
		if (txtUsername->Text->Trim() == "") {
			MessageBox::Show("El nombre del usuario no debe estar vacío.");
			return;
		}
		if (txtPassword->Text->Trim() == "") {
			MessageBox::Show("El password del gerente no debe estar vacío.");
			return;
		}
		if (txtName->Text->Trim() == "") {
			MessageBox::Show("El nombre del gerente no debe estar vacío.");
			return;
		}
		if (txtLastName->Text->Trim() == "") {
			MessageBox::Show("El apellido del gerente no debe estar vacío.");
			return;
		}
		if (txtAddress->Text->Trim() == "") {
			MessageBox::Show("La dirección del gerente no debe estar vacío.");
			return;
		}
		if (txtPhoneNumber->Text->Trim() == "") {
			MessageBox::Show("El teléfono del gerente no debe estar vacío.");
			return;
		}
		if (txtEmail->Text->Trim() == "") {
			MessageBox::Show("La correo del gerente no debe estar vacío.");
			return;
		}
		if (txtDNI->Text->Trim() == "") {
			MessageBox::Show("El DNI del gerente no debe estar vacío.");
			return;
		}

		if (txtSalary->Text->Trim() == "") {
			MessageBox::Show("El salario del gerente no debe estar vacío.");
			return;
		}
		if (txtEmployeesNumber->Text->Trim() == "") {
			MessageBox::Show("El número de empleados no debe estar vacío.");
			return;
		}

		s->Id = Int32::Parse(txtId->Text);
		s->Username = txtUsername->Text;
		s->Password = txtPassword->Text;
		s->FirstName = txtName->Text;
		s->LastName = txtLastName->Text;
		s->Salary = Double::Parse(txtSalary->Text);
		s->EmployeesNumber = Int32::Parse(txtEmployeesNumber->Text);
		s->Gender = rbtnMale->Checked ? 'M' : 'F';
		s->Status = 'A';
		s->Address = txtAddress->Text;
		s->DocumentNumber = txtDNI->Text;
		s->Email = txtEmail->Text;
		s->PhoneNumber = txtPhoneNumber->Text;
		//s->Department = ((ComboBoxItem^)cmbDepartment->Items[cmbDepartment->SelectedIndex])->Name;
		s->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");

		SalesManager::UpdateManager(s);
		RefreshDGVAdministrators();
		//btnAdd->Enabled = true;
		ClearControls();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "No se guardó el administrador por error en los datos.");
		return;
	}
}
private: System::Void AdministratorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshDGVAdministrators();
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int admId = -1;
	try {
		if (txtId->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ningún administrador seleccionado.");
			return;
		}
		admId = Int32::Parse(txtId->Text);

	}
	catch (...) {
		MessageBox::Show("No se puede eliminar el administrador porque el Id no es válido.");
		return;
	}
	if (MessageBox::Show(
		"¿Está seguro de eliminar el administrador?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		SalesManager::DeleteManager(admId);
		RefreshDGVAdministrators();
		ClearControls();
	}
}
private: System::Void dgvAdministrators_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvAdministrators->CurrentCell != nullptr &&
		dgvAdministrators->CurrentCell->Value != nullptr &&
		dgvAdministrators->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvAdministrators->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvAdministrators->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int administratorId = Int32::Parse(a);
		Manager^ adm = SalesManager::QueryManagerById(administratorId);

		if (adm != nullptr) {
			txtId->Text = "" + adm->Id;
			txtName->Text = adm->FirstName;
			txtUsername->Text = adm->Username;
			txtPassword->Text = adm->Password;
			txtSalary->Text = "" + adm->Salary;
			txtEmployeesNumber->Text = "" + adm->EmployeesNumber;
			txtLastName->Text = adm->LastName;
			rbtnMale->Checked = adm->Gender == 'M';
			rbtnFemale->Checked = adm->Gender == 'F';
			txtAddress->Text = adm->Address;
			txtPhoneNumber->Text = adm->PhoneNumber;
			txtDNI->Text = adm->DocumentNumber;
			txtEmail->Text = adm->Email;
			dtpBirthday->Value = DateTime::Parse(adm->Birthday);
			/*
			for (int i = 0; i < cmbDepartment->Items->Count; i++) {
				ComboBoxItem^ cmbi = ((ComboBoxItem^)cmbDepartment->Items[i]);
				if (cmbi->Name->Equals(adm->Department)) {
					cmbDepartment->SelectedIndex = i;
					break;
				}
			}
			*/
		}
	}

}
};
}
