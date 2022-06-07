#pragma once
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
	/// Resumen de CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	private:
	public:
		CustomerForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabCustomers;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dgvPersons;






	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPersonId;

	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtCompanyId;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtRUC;
	private: System::Windows::Forms::TextBox^ txtCompanyName;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtCompanyAddress;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtWebPage;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtLegalDepartment;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtCompanyPhoneNumber;
	private: System::Windows::Forms::Button^ btnDeletePerson;
	private: System::Windows::Forms::Button^ btnUpdatePerson;
	private: System::Windows::Forms::Button^ btnAddPerson;
	private: System::Windows::Forms::Button^ btnAddCompany;
	private: System::Windows::Forms::DataGridView^ dgvCompanies;





	private: System::Windows::Forms::Button^ btnDeleteCompany;
	private: System::Windows::Forms::Button^ btnUpdateCompany;





	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtCompanyEmail;
	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ txtPassword;
private: System::Windows::Forms::TextBox^ txtUsername;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::RadioButton^ rbtnFem;

private: System::Windows::Forms::RadioButton^ rbtnMasc;
private: System::Windows::Forms::TextBox^ txtCompanyLastName;
private: System::Windows::Forms::TextBox^ txtCompanyFirstName;
private: System::Windows::Forms::TextBox^ txtCompanyPassword;
private: System::Windows::Forms::TextBox^ txtCompanyUsername;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::DateTimePicker^ dtpCreationDate;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ txtPersonPoints;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ txtCompanyPoints;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CompanyId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CompanyName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CompanyRUC;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CompanyPhoneNumber;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ personId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ firstName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ email;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ phoneNumber;




	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerForm::typeid));
			this->tabCustomers = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtPersonPoints = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnDeletePerson = (gcnew System::Windows::Forms::Button());
			this->btnUpdatePerson = (gcnew System::Windows::Forms::Button());
			this->btnAddPerson = (gcnew System::Windows::Forms::Button());
			this->dgvPersons = (gcnew System::Windows::Forms::DataGridView());
			this->personId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->firstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPersonId = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txtCompanyPoints = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->dtpCreationDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtCompanyLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyUsername = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtCompanyEmail = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dgvCompanies = (gcnew System::Windows::Forms::DataGridView());
			this->CompanyId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CompanyName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CompanyRUC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CompanyPhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDeleteCompany = (gcnew System::Windows::Forms::Button());
			this->btnUpdateCompany = (gcnew System::Windows::Forms::Button());
			this->btnAddCompany = (gcnew System::Windows::Forms::Button());
			this->txtLegalDepartment = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtCompanyPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtWebPage = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtCompanyAddress = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtCompanyName = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtRUC = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyId = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabCustomers->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersons))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCompanies))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabCustomers
			// 
			this->tabCustomers->Controls->Add(this->tabPage1);
			this->tabCustomers->Controls->Add(this->tabPage2);
			this->tabCustomers->Location = System::Drawing::Point(12, 33);
			this->tabCustomers->Name = L"tabCustomers";
			this->tabCustomers->SelectedIndex = 0;
			this->tabCustomers->Size = System::Drawing::Size(531, 441);
			this->tabCustomers->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtPersonPoints);
			this->tabPage1->Controls->Add(this->label26);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->txtPassword);
			this->tabPage1->Controls->Add(this->txtUsername);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->btnDeletePerson);
			this->tabPage1->Controls->Add(this->btnUpdatePerson);
			this->tabPage1->Controls->Add(this->btnAddPerson);
			this->tabPage1->Controls->Add(this->dgvPersons);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->dtpBirthday);
			this->tabPage1->Controls->Add(this->txtPhoneNumber);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->txtAddress);
			this->tabPage1->Controls->Add(this->txtEmail);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->txtPersonId);
			this->tabPage1->Controls->Add(this->txtDNI);
			this->tabPage1->Controls->Add(this->txtLastName);
			this->tabPage1->Controls->Add(this->txtFirstName);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(523, 415);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Personas";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txtPersonPoints
			// 
			this->txtPersonPoints->Location = System::Drawing::Point(398, 184);
			this->txtPersonPoints->Name = L"txtPersonPoints";
			this->txtPersonPoints->Size = System::Drawing::Size(100, 20);
			this->txtPersonPoints->TabIndex = 27;
			this->txtPersonPoints->Text = L"0";
			this->txtPersonPoints->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(350, 187);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(40, 13);
			this->label26->TabIndex = 26;
			this->label26->Text = L"Puntos";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnFem);
			this->groupBox1->Controls->Add(this->rbtnMasc);
			this->groupBox1->Location = System::Drawing::Point(377, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(121, 31);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			// 
			// rbtnFem
			// 
			this->rbtnFem->AutoSize = true;
			this->rbtnFem->Location = System::Drawing::Point(67, 8);
			this->rbtnFem->Name = L"rbtnFem";
			this->rbtnFem->Size = System::Drawing::Size(45, 17);
			this->rbtnFem->TabIndex = 1;
			this->rbtnFem->Text = L"Fem";
			this->rbtnFem->UseVisualStyleBackColor = true;
			// 
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Checked = true;
			this->rbtnMasc->Location = System::Drawing::Point(7, 9);
			this->rbtnMasc->Name = L"rbtnMasc";
			this->rbtnMasc->Size = System::Drawing::Size(54, 17);
			this->rbtnMasc->TabIndex = 0;
			this->rbtnMasc->TabStop = true;
			this->rbtnMasc->Text = L"Masc.";
			this->rbtnMasc->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(315, 12);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(55, 13);
			this->label19->TabIndex = 24;
			this->label19->Text = L"G�nero (*)";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(344, 37);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(154, 20);
			this->txtPassword->TabIndex = 23;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(121, 37);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(144, 20);
			this->txtUsername->TabIndex = 22;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(271, 37);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(66, 13);
			this->label18->TabIndex = 21;
			this->label18->Text = L"Password (*)";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(39, 37);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(68, 13);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Username (*)";
			// 
			// btnDeletePerson
			// 
			this->btnDeletePerson->Location = System::Drawing::Point(318, 212);
			this->btnDeletePerson->Name = L"btnDeletePerson";
			this->btnDeletePerson->Size = System::Drawing::Size(120, 23);
			this->btnDeletePerson->TabIndex = 19;
			this->btnDeletePerson->Text = L"Eliminar";
			this->btnDeletePerson->UseVisualStyleBackColor = true;
			this->btnDeletePerson->Click += gcnew System::EventHandler(this, &CustomerForm::btnDeletePerson_Click);
			// 
			// btnUpdatePerson
			// 
			this->btnUpdatePerson->Location = System::Drawing::Point(191, 212);
			this->btnUpdatePerson->Name = L"btnUpdatePerson";
			this->btnUpdatePerson->Size = System::Drawing::Size(121, 23);
			this->btnUpdatePerson->TabIndex = 18;
			this->btnUpdatePerson->Text = L"Actualizar";
			this->btnUpdatePerson->UseVisualStyleBackColor = true;
			this->btnUpdatePerson->Click += gcnew System::EventHandler(this, &CustomerForm::btnUpdatePerson_Click);
			// 
			// btnAddPerson
			// 
			this->btnAddPerson->Enabled = false;
			this->btnAddPerson->Location = System::Drawing::Point(58, 212);
			this->btnAddPerson->Name = L"btnAddPerson";
			this->btnAddPerson->Size = System::Drawing::Size(127, 23);
			this->btnAddPerson->TabIndex = 17;
			this->btnAddPerson->Text = L"Agregar";
			this->btnAddPerson->UseVisualStyleBackColor = true;
			this->btnAddPerson->Click += gcnew System::EventHandler(this, &CustomerForm::btnAddPerson_Click);
			// 
			// dgvPersons
			// 
			this->dgvPersons->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPersons->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->personId,
					this->firstName, this->lastName, this->email, this->phoneNumber
			});
			this->dgvPersons->Location = System::Drawing::Point(13, 241);
			this->dgvPersons->Name = L"dgvPersons";
			this->dgvPersons->Size = System::Drawing::Size(485, 157);
			this->dgvPersons->TabIndex = 16;
			this->dgvPersons->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dgvPersons_CellClick);
			// 
			// personId
			// 
			this->personId->HeaderText = L"Id";
			this->personId->Name = L"personId";
			this->personId->ReadOnly = true;
			this->personId->Width = 20;
			// 
			// firstName
			// 
			this->firstName->HeaderText = L"Nombres";
			this->firstName->Name = L"firstName";
			this->firstName->ReadOnly = true;
			// 
			// lastName
			// 
			this->lastName->HeaderText = L"Apellidos";
			this->lastName->Name = L"lastName";
			this->lastName->ReadOnly = true;
			this->lastName->Width = 130;
			// 
			// email
			// 
			this->email->HeaderText = L"Email";
			this->email->Name = L"email";
			this->email->ReadOnly = true;
			this->email->Width = 120;
			// 
			// phoneNumber
			// 
			this->phoneNumber->HeaderText = L"Tel�fono(s)";
			this->phoneNumber->Name = L"phoneNumber";
			this->phoneNumber->ReadOnly = true;
			this->phoneNumber->Width = 70;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(42, 187);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Fec. Nac.";
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(121, 185);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(200, 20);
			this->dtpBirthday->TabIndex = 14;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(121, 159);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(269, 20);
			this->txtPhoneNumber->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Tel�fono(s)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Direcci�n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Email";
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(121, 116);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(269, 36);
			this->txtAddress->TabIndex = 5;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(121, 90);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(269, 20);
			this->txtEmail->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(271, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Apellidos (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Nombres (*)";
			// 
			// txtPersonId
			// 
			this->txtPersonId->Location = System::Drawing::Point(121, 9);
			this->txtPersonId->Name = L"txtPersonId";
			this->txtPersonId->ReadOnly = true;
			this->txtPersonId->Size = System::Drawing::Size(37, 20);
			this->txtPersonId->TabIndex = 5;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(209, 9);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(100, 20);
			this->txtDNI->TabIndex = 4;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(343, 64);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(155, 20);
			this->txtLastName->TabIndex = 3;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(121, 64);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(144, 20);
			this->txtFirstName->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(164, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DNI (*)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id (*)";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->txtCompanyPoints);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->dtpCreationDate);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->txtCompanyLastName);
			this->tabPage2->Controls->Add(this->txtCompanyFirstName);
			this->tabPage2->Controls->Add(this->txtCompanyPassword);
			this->tabPage2->Controls->Add(this->txtCompanyUsername);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->txtCompanyEmail);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->dgvCompanies);
			this->tabPage2->Controls->Add(this->btnDeleteCompany);
			this->tabPage2->Controls->Add(this->btnUpdateCompany);
			this->tabPage2->Controls->Add(this->btnAddCompany);
			this->tabPage2->Controls->Add(this->txtLegalDepartment);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->txtCompanyPhoneNumber);
			this->tabPage2->Controls->Add(this->txtWebPage);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->txtCompanyAddress);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->txtCompanyName);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->txtRUC);
			this->tabPage2->Controls->Add(this->txtCompanyId);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(523, 415);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Empresas";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// txtCompanyPoints
			// 
			this->txtCompanyPoints->Location = System::Drawing::Point(411, 220);
			this->txtCompanyPoints->Name = L"txtCompanyPoints";
			this->txtCompanyPoints->Size = System::Drawing::Size(79, 20);
			this->txtCompanyPoints->TabIndex = 33;
			this->txtCompanyPoints->Text = L"0";
			this->txtCompanyPoints->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(352, 223);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(53, 13);
			this->label25->TabIndex = 32;
			this->label25->Text = L"Puntos (*)";
			// 
			// dtpCreationDate
			// 
			this->dtpCreationDate->Location = System::Drawing::Point(114, 220);
			this->dtpCreationDate->Name = L"dtpCreationDate";
			this->dtpCreationDate->Size = System::Drawing::Size(200, 20);
			this->dtpCreationDate->TabIndex = 31;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(27, 224);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(85, 13);
			this->label24->TabIndex = 30;
			this->label24->Text = L"Fec. creaci�n (*)";
			// 
			// txtCompanyLastName
			// 
			this->txtCompanyLastName->Location = System::Drawing::Point(329, 60);
			this->txtCompanyLastName->Name = L"txtCompanyLastName";
			this->txtCompanyLastName->Size = System::Drawing::Size(161, 20);
			this->txtCompanyLastName->TabIndex = 29;
			// 
			// txtCompanyFirstName
			// 
			this->txtCompanyFirstName->Location = System::Drawing::Point(114, 60);
			this->txtCompanyFirstName->Name = L"txtCompanyFirstName";
			this->txtCompanyFirstName->Size = System::Drawing::Size(136, 20);
			this->txtCompanyFirstName->TabIndex = 28;
			// 
			// txtCompanyPassword
			// 
			this->txtCompanyPassword->Location = System::Drawing::Point(329, 35);
			this->txtCompanyPassword->Name = L"txtCompanyPassword";
			this->txtCompanyPassword->PasswordChar = '*';
			this->txtCompanyPassword->Size = System::Drawing::Size(161, 20);
			this->txtCompanyPassword->TabIndex = 27;
			// 
			// txtCompanyUsername
			// 
			this->txtCompanyUsername->Location = System::Drawing::Point(114, 36);
			this->txtCompanyUsername->Name = L"txtCompanyUsername";
			this->txtCompanyUsername->Size = System::Drawing::Size(136, 20);
			this->txtCompanyUsername->TabIndex = 26;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(256, 39);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(66, 13);
			this->label20->TabIndex = 25;
			this->label20->Text = L"Password (*)";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(27, 40);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(68, 13);
			this->label21->TabIndex = 24;
			this->label21->Text = L"Username (*)";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(256, 64);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(62, 13);
			this->label22->TabIndex = 23;
			this->label22->Text = L"Apellidos (*)";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(27, 64);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(62, 13);
			this->label23->TabIndex = 22;
			this->label23->Text = L"Nombres (*)";
			// 
			// txtCompanyEmail
			// 
			this->txtCompanyEmail->Location = System::Drawing::Point(114, 193);
			this->txtCompanyEmail->Name = L"txtCompanyEmail";
			this->txtCompanyEmail->Size = System::Drawing::Size(376, 20);
			this->txtCompanyEmail->TabIndex = 19;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(27, 196);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(87, 13);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Email contacto(*)";
			// 
			// dgvCompanies
			// 
			this->dgvCompanies->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCompanies->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->CompanyId,
					this->CompanyName, this->CompanyRUC, this->CompanyPhoneNumber
			});
			this->dgvCompanies->Location = System::Drawing::Point(19, 279);
			this->dgvCompanies->Name = L"dgvCompanies";
			this->dgvCompanies->Size = System::Drawing::Size(484, 119);
			this->dgvCompanies->TabIndex = 17;
			this->dgvCompanies->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dgvCompanies_CellClick);
			// 
			// CompanyId
			// 
			this->CompanyId->HeaderText = L"Id";
			this->CompanyId->Name = L"CompanyId";
			this->CompanyId->ReadOnly = true;
			this->CompanyId->Width = 30;
			// 
			// CompanyName
			// 
			this->CompanyName->HeaderText = L"Raz�n Social";
			this->CompanyName->Name = L"CompanyName";
			this->CompanyName->ReadOnly = true;
			this->CompanyName->Width = 230;
			// 
			// CompanyRUC
			// 
			this->CompanyRUC->HeaderText = L"RUC";
			this->CompanyRUC->Name = L"CompanyRUC";
			this->CompanyRUC->ReadOnly = true;
			this->CompanyRUC->Width = 80;
			// 
			// CompanyPhoneNumber
			// 
			this->CompanyPhoneNumber->HeaderText = L"Tel�fono";
			this->CompanyPhoneNumber->Name = L"CompanyPhoneNumber";
			this->CompanyPhoneNumber->ReadOnly = true;
			this->CompanyPhoneNumber->Width = 80;
			// 
			// btnDeleteCompany
			// 
			this->btnDeleteCompany->Location = System::Drawing::Point(337, 245);
			this->btnDeleteCompany->Name = L"btnDeleteCompany";
			this->btnDeleteCompany->Size = System::Drawing::Size(122, 23);
			this->btnDeleteCompany->TabIndex = 16;
			this->btnDeleteCompany->Text = L"Eliminar";
			this->btnDeleteCompany->UseVisualStyleBackColor = true;
			this->btnDeleteCompany->Click += gcnew System::EventHandler(this, &CustomerForm::btnDeleteCompany_Click);
			// 
			// btnUpdateCompany
			// 
			this->btnUpdateCompany->Location = System::Drawing::Point(214, 245);
			this->btnUpdateCompany->Name = L"btnUpdateCompany";
			this->btnUpdateCompany->Size = System::Drawing::Size(117, 23);
			this->btnUpdateCompany->TabIndex = 15;
			this->btnUpdateCompany->Text = L"Actualizar";
			this->btnUpdateCompany->UseVisualStyleBackColor = true;
			this->btnUpdateCompany->Click += gcnew System::EventHandler(this, &CustomerForm::btnUpdateCompany_Click);
			// 
			// btnAddCompany
			// 
			this->btnAddCompany->Enabled = false;
			this->btnAddCompany->Location = System::Drawing::Point(84, 245);
			this->btnAddCompany->Name = L"btnAddCompany";
			this->btnAddCompany->Size = System::Drawing::Size(124, 23);
			this->btnAddCompany->TabIndex = 14;
			this->btnAddCompany->Text = L"Agregar";
			this->btnAddCompany->UseVisualStyleBackColor = true;
			this->btnAddCompany->Click += gcnew System::EventHandler(this, &CustomerForm::btnAddCompany_Click);
			// 
			// txtLegalDepartment
			// 
			this->txtLegalDepartment->Location = System::Drawing::Point(288, 164);
			this->txtLegalDepartment->Name = L"txtLegalDepartment";
			this->txtLegalDepartment->Size = System::Drawing::Size(202, 20);
			this->txtLegalDepartment->TabIndex = 13;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(209, 168);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 13);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Representante";
			// 
			// txtCompanyPhoneNumber
			// 
			this->txtCompanyPhoneNumber->Location = System::Drawing::Point(114, 165);
			this->txtCompanyPhoneNumber->Name = L"txtCompanyPhoneNumber";
			this->txtCompanyPhoneNumber->Size = System::Drawing::Size(90, 20);
			this->txtCompanyPhoneNumber->TabIndex = 11;
			// 
			// txtWebPage
			// 
			this->txtWebPage->Location = System::Drawing::Point(114, 138);
			this->txtWebPage->Name = L"txtWebPage";
			this->txtWebPage->Size = System::Drawing::Size(376, 20);
			this->txtWebPage->TabIndex = 10;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(27, 168);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 13);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Tel�fono (*)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(27, 141);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 13);
			this->label13->TabIndex = 8;
			this->label13->Text = L"P�gina Web";
			// 
			// txtCompanyAddress
			// 
			this->txtCompanyAddress->Location = System::Drawing::Point(114, 111);
			this->txtCompanyAddress->Name = L"txtCompanyAddress";
			this->txtCompanyAddress->Size = System::Drawing::Size(376, 20);
			this->txtCompanyAddress->TabIndex = 7;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(27, 114);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 13);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Direcci�n (*)";
			// 
			// txtCompanyName
			// 
			this->txtCompanyName->Location = System::Drawing::Point(114, 85);
			this->txtCompanyName->Name = L"txtCompanyName";
			this->txtCompanyName->Size = System::Drawing::Size(376, 20);
			this->txtCompanyName->TabIndex = 5;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(27, 88);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Raz�n Social (*)";
			// 
			// txtRUC
			// 
			this->txtRUC->Location = System::Drawing::Point(329, 11);
			this->txtRUC->Name = L"txtRUC";
			this->txtRUC->Size = System::Drawing::Size(161, 20);
			this->txtRUC->TabIndex = 3;
			// 
			// txtCompanyId
			// 
			this->txtCompanyId->Location = System::Drawing::Point(114, 12);
			this->txtCompanyId->Name = L"txtCompanyId";
			this->txtCompanyId->ReadOnly = true;
			this->txtCompanyId->Size = System::Drawing::Size(60, 20);
			this->txtCompanyId->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(256, 15);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"RUC (*)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Id (*)";
			this->label9->Click += gcnew System::EventHandler(this, &CustomerForm::label9_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->reporteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(581, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"Archivo";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nuevoToolStripMenuItem.Image")));
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editarToolStripMenuItem.Image")));
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::salirToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->consultasToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			this->consultasToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::consultasToolStripMenuItem_Click);
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 488);
			this->Controls->Add(this->tabCustomers);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CustomerForm";
			this->Text = L"Clientes";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load);
			this->tabCustomers->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersons))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCompanies))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAddPerson_Click(System::Object^ sender, System::EventArgs^ e) {
	Customer^ p;
	try {
		/*
		if (txtPersonId->Text->Trim() == "") {
			MessageBox::Show("El Id no debe estar vac�o.");
			return;
		}
		
		p->Id = Int32::Parse(txtPersonId->Text);
		p->FirstName = txtFirstName->Text;
		p->LastName = txtLastName->Text;
		p->Dni = txtDNI->Text;
		p->Address = txtAddress->Text;
		p->Email = txtEmail->Text;
		p->PhoneNumber = txtPhoneNumber->Text;
		p->Birthday = dtpBirthday->Value.ToString();	
		*/
		p = gcnew Person(SalesManager::QueryLastCustomerId()+1, txtFirstName->Text, txtLastName->Text,
						txtEmail->Text, txtDNI->Text);
		p->Address = txtAddress->Text;
		p->PhoneNumber = txtPhoneNumber->Text;
		p->Username = txtUsername->Text;
		p->Password = txtPassword->Text;
		p->Gender = rbtnMasc->Checked ? 'M' : 'F';
		((Person ^)p)->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
		p->CustomerPoints = Int32::Parse(txtPersonPoints->Text);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al �rea de TI.");
		return;
	}

	SalesManager::AddCustomer(p); // Casi polimorfismo
	RefreshPersonsDGV();
	ClearControls();
}
private: System::Void CustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshPersonsDGV();
	RefreshCompaniesDGV();
}
	public: Void RefreshPersonsDGV();
private: System::Void btnUpdatePerson_Click(System::Object^ sender, System::EventArgs^ e) {
	Person^ p = gcnew Person();
	try {
		if (txtPersonId->Text->Trim() == "") {
			MessageBox::Show("El Id no debe estar vac�o.");
			return;
		}
		p->Id = Int32::Parse(txtPersonId->Text);
		p->Username = txtUsername->Text;
		p->Password = txtPassword->Text;
		p->Gender = rbtnMasc->Checked ? 'M' : 'F';
		p->FirstName = txtFirstName->Text;
		p->LastName = txtLastName->Text;
		p->DocumentNumber = txtDNI->Text;
		p->Address = txtAddress->Text;
		p->Email = txtEmail->Text;
		p->PhoneNumber = txtPhoneNumber->Text;
		p->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
		p->CustomerPoints = Int32::Parse(txtPersonPoints->Text);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al �rea de TI.");
		return;
	}

	SalesManager::UpdateCustomer(p); //Polimorfismo
	RefreshPersonsDGV();
}
private: System::Void dgvPersons_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvPersons->CurrentCell != nullptr &&
		dgvPersons->CurrentCell->Value != nullptr &&
		dgvPersons->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvPersons->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvPersons->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int personId = Int32::Parse(a);
		Customer^ customer = SalesManager::QueryCustomerById(personId);
		//MessageBox::Show(customer->ToString()); //Polimorfismo
		if (customer != nullptr && customer->GetType() == Person::typeid) {
			txtPersonId->Text = "" + customer->Id;
			txtUsername->Text = dynamic_cast<Person^>(customer)->Username;
			txtPassword->Text = "";
			rbtnMasc->Checked = dynamic_cast<Person^>(customer)->Gender == 'M';
			rbtnFem->Checked = dynamic_cast<Person^>(customer)->Gender == 'F';
			txtFirstName->Text = dynamic_cast<Person^>(customer)->FirstName;
			txtLastName->Text = dynamic_cast<Person^>(customer)->LastName;
			txtDNI->Text = dynamic_cast<Person^>(customer)->DocumentNumber;
			txtEmail->Text = dynamic_cast<Person^>(customer)->Email;
			txtAddress->Text = customer->Address;
			txtPhoneNumber->Text = customer->PhoneNumber;
			dtpBirthday->Value = DateTime::Parse(dynamic_cast<Person^>(customer)->Birthday);
			txtPersonPoints->Text = "" + customer->CustomerPoints;
		}
	}

}
private: System::Void btnDeletePerson_Click(System::Object^ sender, System::EventArgs^ e) {
	int personId = -1;
	try {
		if (txtPersonId->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ning�n cliente seleccionado.");
			return;
		}
		personId = Int32::Parse(txtPersonId->Text);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al �rea de TI.");
		return;
	}

	SalesManager::DeleteCustomer(personId);
	RefreshPersonsDGV();
}
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	EnableControls();
	btnAddPerson->Enabled = true;
	btnUpdatePerson->Enabled = false;
	btnDeletePerson->Enabled = false;
	btnAddCompany->Enabled = true;
	btnUpdateCompany->Enabled = false;
	btnDeleteCompany->Enabled = false;
}
	public: System::Void ClearControls();
	public: System::Void RefreshCompaniesDGV();

private: System::Void btnAddCompany_Click(System::Object^ sender, System::EventArgs^ e) {
	Company^ p = gcnew Company();
	try {
		/*
		if (txtCompanyId->Text->Trim() == "") {
			MessageBox::Show("El Id no debe estar vac�o.");
			return;
		}
		*/
		p->Id = SalesManager::QueryLastCustomerId() + 1;
		p->Username = txtCompanyUsername->Text;
		p->Password = txtCompanyPassword->Text;
		p->FirstName = txtCompanyFirstName->Text;
		p->LastName = txtCompanyLastName->Text;
		p->Name = txtCompanyName->Text;
		p->Address = txtCompanyAddress->Text;
		p->DocumentNumber = txtRUC->Text;
		p->WebPage = txtWebPage->Text;
		p->PhoneNumber = txtCompanyPhoneNumber->Text;
		p->LegalDepartment = txtLegalDepartment->Text;
		p->Email = txtCompanyEmail->Text;
		p->Birthday = dtpCreationDate->Value.ToString("yyyy-MM-dd");
		p->CustomerPoints = Int32::Parse(txtCompanyPoints->Text);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al �rea de TI.");
		return;
	}

	SalesManager::AddCustomer(p); //Polimorfismo
	RefreshCompaniesDGV();
	ClearControls();
}
private: System::Void dgvCompanies_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvCompanies->CurrentCell != nullptr &&
		dgvCompanies->CurrentCell->Value != nullptr &&
		dgvCompanies->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvCompanies->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvCompanies->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int personId = Int32::Parse(a);
		Customer^ customer = SalesManager::QueryCustomerById(personId);
		//MessageBox::Show(customer->ToString());
		if (customer->GetType() == Company::typeid) {
			txtCompanyId->Text = "" + customer->Id;
			txtCompanyUsername->Text = customer->Username;
			txtCompanyFirstName->Text = customer->FirstName;
			txtCompanyLastName->Text = customer->LastName;
			txtCompanyName->Text = dynamic_cast<Company^>(customer)->Name;
			txtWebPage->Text = dynamic_cast<Company^>(customer)->WebPage;
			txtRUC->Text = dynamic_cast<Company^>(customer)->DocumentNumber;
			txtLegalDepartment->Text = dynamic_cast<Company^>(customer)->LegalDepartment;
			txtCompanyAddress->Text = customer->Address;
			txtCompanyPhoneNumber->Text = customer->PhoneNumber;
			txtCompanyEmail->Text = customer->Email;
			txtCompanyPoints->Text = "" + customer->CustomerPoints;
			dtpCreationDate->Value = DateTime::Parse(customer->Birthday);
		}
	}
}

private: System::Void btnUpdateCompany_Click(System::Object^ sender, System::EventArgs^ e) {
	Company^ p = gcnew Company();
	try {
		if (txtCompanyId->Text->Trim() == "") {
			MessageBox::Show("El Id no debe estar vac�o.");
			return;
		}
		p->Id = Int32::Parse(txtCompanyId->Text);
		p->Username = txtCompanyUsername->Text;
		p->Password = txtCompanyPassword->Text;
		p->FirstName = txtCompanyFirstName->Text;
		p->LastName = txtCompanyLastName->Text;
		p->Name = txtCompanyName->Text;
		p->WebPage = txtWebPage->Text;
		p->DocumentNumber = txtRUC->Text;
		p->Address = txtCompanyAddress->Text;
		p->LegalDepartment = txtLegalDepartment->Text;
		p->PhoneNumber = txtCompanyPhoneNumber->Text;
		p->Email = txtCompanyEmail->Text;
		p->CustomerPoints = Int32::Parse(txtCompanyPoints->Text);
		p->Birthday = dtpCreationDate->Value.ToString("yyyy-MM-dd");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al �rea de TI.");
		return;
	}

	SalesManager::UpdateCustomer(p);
	RefreshCompaniesDGV();
}
private: System::Void btnDeleteCompany_Click(System::Object^ sender, System::EventArgs^ e) {
	int companyId = -1;
	try {
		if (txtCompanyId->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ning�n cliente seleccionado.");
			return;
		}
		companyId = Int32::Parse(txtCompanyId->Text);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al �rea de TI.");
		return;
	}

	SalesManager::DeleteCustomer(companyId);
	RefreshCompaniesDGV();
}
	public: 
		Void DisableControls() {
		   //Person Controls
		   //txtPersonId->ReadOnly = true;
		   txtPhoneNumber->ReadOnly = true;
		   txtAddress->ReadOnly = true;
		   txtDNI->ReadOnly = true;
		   txtFirstName->ReadOnly = true;
		   txtLastName->ReadOnly = true;
		   txtEmail->ReadOnly = true;		   
		   dtpBirthday->Enabled = false;
		   btnAddPerson->Enabled = false;
		   btnUpdatePerson->Enabled = false;
		   btnDeletePerson->Enabled = false;

		   //Company Controls
		   //txtCompanyId->ReadOnly = true;
		   txtCompanyName->ReadOnly = true;
		   txtCompanyPhoneNumber->ReadOnly = true;
		   txtCompanyAddress->ReadOnly = true;
		   txtLegalDepartment->ReadOnly = true;
		   txtRUC->ReadOnly = true;
		   txtWebPage->ReadOnly = true;
		   btnAddCompany->Enabled = false;
		   btnUpdateCompany->Enabled = false;
		   btnDeleteCompany->Enabled = false;		   
		}

		Void EnableControls(){
			//Person Controls
			//txtPersonId->ReadOnly = true;
			txtPhoneNumber->ReadOnly = false;
			txtAddress->ReadOnly = false;
			txtDNI->ReadOnly = false;
			txtFirstName->ReadOnly = false;
			txtLastName->ReadOnly = false;
			txtEmail->ReadOnly = false;
			dtpBirthday->Enabled = true;
			btnAddPerson->Enabled = true;
			btnUpdatePerson->Enabled = false;
			btnDeletePerson->Enabled = false;

			//Company Controls
			//txtCompanyId->ReadOnly = true;
			txtCompanyName->ReadOnly = false;
			txtCompanyPhoneNumber->ReadOnly = false;
			txtCompanyAddress->ReadOnly = false;
			txtLegalDepartment->ReadOnly = false;
			txtRUC->ReadOnly = false;
			txtWebPage->ReadOnly = false;
			btnAddCompany->Enabled = true;
			btnUpdateCompany->Enabled = false;
			btnDeleteCompany->Enabled = false;
		}

private: System::Void consultasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DisableControls();
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnAddPerson->Enabled = false;
	btnUpdatePerson->Enabled = true;
	btnDeletePerson->Enabled = true;

	btnAddCompany->Enabled = false;
	btnUpdateCompany->Enabled = true;
	btnDeleteCompany->Enabled = true;

}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
