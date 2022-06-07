#include "CustomerForm.h"

using namespace SalesView;

using namespace System::Collections::Generic;

Void SalesView::CustomerForm::RefreshPersonsDGV()
{
	List <Person^>^ personList = SalesManager::QueryAllPersons();
	dgvPersons->Rows->Clear();
	for (int i = 0; i < personList->Count; i++) {
		dgvPersons->Rows->Add(gcnew array<String^> {
			"" + personList[i]->Id,
				personList[i]->FirstName,
				personList[i]->LastName,
				personList[i]->Email,
				personList[i]->PhoneNumber
		});
	}
	return Void();
}

Void CustomerForm::RefreshCompaniesDGV() {
	List <Company^>^ companyList = SalesManager::QueryAllCompanies();
	dgvCompanies->Rows->Clear();
	for (int i = 0; i < companyList->Count; i++) {
		dgvCompanies->Rows->Add(gcnew array<String^> {
			"" + companyList[i]->Id,
				companyList[i]->Name,
				companyList[i]->DocumentNumber,
				companyList[i]->PhoneNumber
		});
	}
	return Void();
}

Void CustomerForm::ClearControls() {
	txtPersonId->Text = "";
	//txtPersonId->ReadOnly = true;
	txtUsername->Text = "";
	txtFirstName->Text = "";
	txtDNI->Text = "";
	txtLastName->Text = "";
	txtAddress->Text = "";
	txtPhoneNumber->Text = "";
	txtEmail->Text = "";
	txtCompanyId->Text = "";
	//txtCompanyId->ReadOnly = true;
	txtCompanyUsername->Text = "";
	txtCompanyPassword->Text = "";
	txtCompanyFirstName->Text = "";
	txtCompanyLastName->Text = "";
	txtRUC->Text = "";
	txtCompanyName->Text = "";
	txtCompanyAddress->Text = "";
	txtCompanyPhoneNumber->Text = "";
	txtLegalDepartment->Text = "";
	txtWebPage->Text = "";
	txtCompanyEmail->Text = "";
	txtPersonPoints->Text = "0";
	txtCompanyPoints->Text = "0";
}