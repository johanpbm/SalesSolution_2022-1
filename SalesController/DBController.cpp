#include "pch.h"
#include "DBController.h"

using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;
using namespace System::Collections::Generic;

void SalesController::DBController::Init()
{
	userDB->LoadData();
	//productDB->LoadData();
	//storeDB->LoadData();
	//customerDB->LoadData();
}


User^ SalesController::DBController::ValidateUser(String^ username, String^ password) {
	for (int i = 0; i < userDB->ListDB->Count; i++) {
		if (userDB->ListDB[i]->Username->Equals(username) &&
			userDB->ListDB[i]->Password->Equals(password))
			return userDB->ListDB[i];
	}
	return nullptr;
}

int SalesController::DBController::QueryLastUserId()
{	
	userDB->LoadData();
	int maxId = 0;
	for (int i = 0; i < userDB->ListDB->Count; i++) {
		if (userDB->ListDB[i]->Id > maxId)
			maxId = userDB->ListDB[i]->Id;
	}
	return maxId;
}

void SalesController::DBController::AddUser(User^ user) {
	userDB->ListDB->Add(user);
}

void SalesController::DBController::SaveManagers()
{
	managerDB->Persist();
}

void SalesController::DBController::LoadManagers()
{
	managerDB->LoadData();
}

int SalesController::DBController::QueryLastManagerId()
{
	LoadManagers();
	int maxId = 0;
	for (int i = 0; i < managerDB->ListDB->Count; i++) {
		if (managerDB->ListDB[i]->Id > maxId)
			maxId = managerDB->ListDB[i]->Id;
	}
	return maxId;
}

void SalesController::DBController::AddManager(Manager^ manager)
{
	managerDB->ListDB->Add(manager);
	SaveManagers();
}

void SalesController::DBController::UpdateManager(Manager^ manager)
{
	for (int i = 0; i < managerDB->ListDB->Count; i++) {
		if (managerDB->ListDB[i]->Id == manager->Id)
			managerDB->ListDB[i] = manager;
	}
	SaveManagers();
}

void SalesController::DBController::DeleteManager(int managerId) {
	for (int i = 0; i < managerDB->ListDB->Count; i++) {
		if (managerDB->ListDB[i]->Id == managerId)
			managerDB->ListDB->RemoveAt(i);
	}
	SaveManagers();
}

List<Manager^>^ SalesController::DBController::QueryAllManagers()
{
	LoadManagers();
	return managerDB->ListDB;
}

Manager^ SalesController::DBController::QueryManagerById(int ManagerId)
{
	LoadManagers();
	for (int i = 0; i < managerDB->ListDB->Count; i++) {
		if (managerDB->ListDB[i]->Id == ManagerId)
			return managerDB->ListDB[i];
	}
	return nullptr;
}


void SalesController::DBController::AddProduct(Product^ product)
{
	productDB->ListDB->Add(product);
	productDB->Persist();

}

void SalesController::DBController::UpdateProduct(Product^ product)
{
	for (int i = 0; i < productDB->ListDB->Count; i++)
		if (productDB->ListDB[i]->Id == product->Id) {
			productDB->ListDB[i] = product;
			productDB->Persist();
			return;
		}
}

void SalesController::DBController::DeleteProduct(int productId)
{
	for (int i = 0; i < productDB->ListDB->Count; i++)
		if (productDB->ListDB[i]->Id == productId) {
			//productDB->ListDB[i]->Status = 'I';
			productDB->ListDB->RemoveAt(i);
			productDB->Persist();
			return;
		}	
}

void SalesController::DBController::AddStoreProduct(Store^ store, StoreProduct^ sp) {
	storeProductDB->ListDB->Add(sp);
}

List<Product^>^ SalesController::DBController::QueryAllProducts()
{	
	productDB->LoadData();
	return productDB->ListDB;
}

int SalesController::DBController::QueryLastProductId()
{
	productDB->LoadData();
	int maxId = 0;
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->Id > maxId)
			maxId = productDB->ListDB[i]->Id;
	}
	return maxId;
}

List<Book^>^ SalesController::DBController::QueryAllBooks()
{
	productDB->LoadData();
	List<Book^>^ list = gcnew List<Book^>();
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->GetType() == Book::typeid && productDB->ListDB[i]->Status == 'A') {
			list->Add(dynamic_cast<Book^>(productDB->ListDB[i]));
		}
	}
	return list;
}

List<Electronic^>^ SalesController::DBController::QueryAllElectronics()
{
	productDB->LoadData();
	List <Electronic^>^ electronicList = gcnew List<Electronic^>();
	for (int i = 0; i < productDB->ListDB->Count; i++)
		if (productDB->ListDB[i]->GetType() == Electronic::typeid)
			electronicList->Add((Electronic^)productDB->ListDB[i]);
	return electronicList;
}

List<StoreProduct^>^ SalesController::DBController::QueryAllBooksFromStore(int storeId)
{
	storeDB->LoadData();
	Store^ store = QueryStoreById(storeId);
	List<StoreProduct^>^ list = gcnew List<StoreProduct^>();
	if (store != nullptr) {
		for (int i = 0; i < store->StoreProductList->Count; i++) {
			if (store->StoreProductList[i]->Product->GetType() == Book::typeid) {
				list->Add(store->StoreProductList[i]);
			}
		}
	}	
	return list;
}

List<StoreProduct^>^ SalesController::DBController::QueryAllElectronicsFromStore(int storeId)
{
	storeDB->LoadData();
	Store^ store = QueryStoreById(storeId);
	List<StoreProduct^>^ list = gcnew List<StoreProduct^>();
	if (store != nullptr) {
		for (int i = 0; i < store->StoreProductList->Count; i++) {
			if (store->StoreProductList[i]->Product->GetType() == Electronic::typeid) {
				list->Add(store->StoreProductList[i]);
			}
		}
	}
	return list;

}

StoreProduct^ SalesController::DBController::QueryProductByIdFromStore(int storeId, int productId)
{
	storeDB->LoadData();
	Store^ store = QueryStoreById(storeId);
	if (store != nullptr) {		
		for (int i = 0; i < store->StoreProductList->Count; i++) {
			if (store->StoreProductList[i]->Product->Id == productId) {
				return store->StoreProductList[i];
			}
		}
	}
	return nullptr;
}

Product^ SalesController::DBController::QueryProductById(int productId) {
	productDB->LoadData();
	for (int i = 0; i < productDB->ListDB->Count; i++)
		if (productDB->ListDB[i]->Id == productId) 
			return productDB->ListDB[i];
	return nullptr;
}

Electronic^ SalesController::DBController::QueryElectronicById(int productId)
{
	productDB->LoadData();
	for (int i = 0; i < productDB->ListDB->Count; i++)
		if (productDB->ListDB[i]->Id == productId &&
			productDB->ListDB[i]->GetType() == Electronic::typeid)
			return (Electronic^)productDB->ListDB[i];
	return nullptr;
}

Book^ SalesController::DBController::QueryBookById(int productId)
{	
	productDB->LoadData();
	for (int i = 0; i < productDB->ListDB->Count; i++)
		if (productDB->ListDB[i]->Id == productId &&
			productDB->ListDB[i]->GetType() == Book::typeid)
			return (Book^)productDB->ListDB[i];
	return nullptr;
}

void SalesController::DBController::AddCustomer(Customer^ c)
{
	customerDB->ListDB->Add(c);
	customerDB->Persist();
}

void SalesController::DBController::UpdateCustomer(Customer^ c)
{
	for (int i = 0; i < customerDB->ListDB->Count; i++)
		if (customerDB->ListDB[i]->Id == c->Id) {
			customerDB->ListDB[i] = c;
			customerDB->Persist();
			return;
		}
}

void SalesController::DBController::DeleteCustomer(int customerId)
{
	for (int i = 0; i < customerDB->ListDB->Count; i++)
		if (customerDB->ListDB[i]->Id == customerId) {
			customerDB->ListDB->RemoveAt(i);
			customerDB->Persist();
			return;
		}
}

List<Customer^>^ SalesController::DBController::QueryAllCustomers()
{	
	customerDB->LoadData();
	return customerDB->ListDB;
}

List<Person^>^ SalesController::DBController::QueryAllPersons()
{
	customerDB->LoadData();
	List<Person^>^ customerList = gcnew List<Person^>();
	for (int i = 0; i < customerDB->ListDB->Count; i++)
		if (customerDB->ListDB[i]->GetType() == Person::typeid) {
			customerList->Add(safe_cast<Person^>(customerDB->ListDB[i]));
		}
	return customerList;
}

List<Company^>^ SalesController::DBController::QueryAllCompanies()
{	
	customerDB->LoadData();
	List<Company^>^ customerList = gcnew List<Company^>();
	for (int i = 0; i < customerDB->ListDB->Count; i++)
		if (customerDB->ListDB[i]->GetType() == Company::typeid) {
			customerList->Add(safe_cast<Company^>(customerDB->ListDB[i]));
		}
	return customerList;
}

Customer^ SalesController::DBController::QueryCustomerById(int customerId)
{	
	customerDB->LoadData();
	Customer^ customer;
	for (int i = 0; i < customerDB->ListDB->Count; i++)
		if (customerDB->ListDB[i]->Id == customerId) {
			if (customerDB->ListDB[i]->GetType() == Company::typeid)
				customer = safe_cast<Company^>(customerDB->ListDB[i]);
			else
				customer = safe_cast<Person^>(customerDB->ListDB[i]);
		}
	return customer;
}

int SalesController::DBController::QueryLastCustomerId()
{
	customerDB->LoadData();
	int maxId = 0;
	for (int i = 0; i < customerDB->ListDB->Count; i++) {
		if (customerDB->ListDB[i]->Id > maxId)
			maxId = customerDB->ListDB[i]->Id;
	}
	return maxId;
}

void SalesController::DBController::SaveSalesmen()
{
	salesmanDB->Persist();
}

void SalesController::DBController::LoadSalesmen()
{
	salesmanDB->LoadData();
}

void SalesController::DBController::AddSalesman(Salesman^ s)
{
	salesmanDB->ListDB->Add(s);
	salesmanDB->Persist();
}

void SalesController::DBController::UpdateSalesman(Salesman^ s)
{
	for (int i = 0; i < salesmanDB->ListDB->Count; i++)
		if (salesmanDB->ListDB[i]->Id == s->Id) {
			salesmanDB->ListDB[i] = s;
			salesmanDB->Persist();
			return;
		}
}

void SalesController::DBController::DeleteSalesman(int salesmanId)
{
	for (int i = 0; i < salesmanDB->ListDB->Count; i++)
		if (salesmanDB->ListDB[i]->Id == salesmanId) {
			//productDB->ListDB[i]->Status = 'I';
			salesmanDB->ListDB->RemoveAt(i);
			salesmanDB->Persist();
			return;
		}
}

List<Salesman^>^ SalesController::DBController::QueryAllSalesmen()
{
	LoadSalesmen();
	return salesmanDB->ListDB;
}

Salesman^ SalesController::DBController::QuerySalesmanById(int salesmanId)
{
	LoadSalesmen();
	for (int i = 0; i < salesmanDB->ListDB->Count; i++)
		if (salesmanDB->ListDB[i]->Id == salesmanId)
			return salesmanDB->ListDB[i];
	return nullptr;
}

int SalesController::DBController::QueryLastSalesmanId()
{
	LoadSalesmen();
	int maxId = 0;
	for (int i = 0; i < salesmanDB->ListDB->Count; i++) {
		if (salesmanDB->ListDB[i]->Id > maxId)
			maxId = salesmanDB->ListDB[i]->Id;
	}
	return maxId;
}


void SalesController::DBController::SaveStores()
{
	storeDB->Persist();
}

void SalesController::DBController::LoadStores()
{
	storeDB->LoadData();
}

List<Store^>^ SalesController::DBController::QueryAllStores()
{
	LoadStores();
	return storeDB->ListDB;
}

void SalesController::DBController::AddStore(Store^ store)
{	
	storeDB->ListDB->Add(store);
	SaveStores();
}

void SalesController::DBController::UpdateStore(Store^ store)
{	
	for (int i = 0; i < storeDB->ListDB->Count; i++) {
		if (storeDB->ListDB[i]->Id == store->Id) {
			storeDB->ListDB[i] = store;
			SaveStores();
			return;
		}			
	}
}

void SalesController::DBController::DeleteStore(int storeId)
{
	for (int i = 0; i < storeDB->ListDB->Count; i++) {
		if (storeDB->ListDB[i]->Id == storeId) {
			storeDB->ListDB->RemoveAt(i);
			SaveStores();
			return;
		}			
	}
}

int SalesController::DBController::QueryLastStoreId()
{
	LoadStores();
	int maxId = 0;
	for (int i = 0; i < storeDB->ListDB->Count; i++) {
		if (storeDB->ListDB[i]->Id > maxId)
			maxId = storeDB->ListDB[i]->Id;
	}
	return maxId;
}

List<StoreProduct^>^ SalesController::DBController::QueryStoreProductsByStoreId(int storeId)
{
	List<StoreProduct^>^ storeProductList = gcnew List<StoreProduct^>();
	storeProductList->AddRange(QueryAllBooksFromStore(storeId));
	storeProductList->AddRange(QueryAllElectronicsFromStore(storeId));
	return storeProductList;
}


Store^ SalesController::DBController::QueryStoreById(int storeId)
{
	LoadStores();
	Store^ s = nullptr;
	for (int i = 0; i < storeDB->ListDB->Count; i++) {
		if (storeDB->ListDB[i]->Id == storeId) {
			s = storeDB->ListDB[i];
			return s;
		}
	}
	return s;

}

List<Book^>^ SalesController::DBController::QueryAllBooksByCoincidence(String^ str)
{
	List<Book^>^ bookList = gcnew List<Book^>();
	List<Book^>^ bookTotalList = QueryAllBooks();
	for (int i = 0; i < bookTotalList->Count; i++) {
		if (bookTotalList[i]->Name->Contains(str) || 
			bookTotalList[i]->Description->Contains(str) ||
			bookTotalList[i]->Title->Contains(str))
			bookList->Add(bookTotalList[i]);
	}
	return bookList;
}

List<Electronic^>^ SalesController::DBController::QueryAllElectronicsByCoincidence(String^ str)
{
	List<Electronic^>^ electronicList = gcnew List<Electronic^>();
	List<Electronic^>^ electronicTotalList = QueryAllElectronics();
	for (int i = 0; i < electronicTotalList->Count; i++) {
		if (electronicTotalList[i]->Name->Contains(str) ||
			electronicTotalList[i]->Description->Contains(str) ||
			electronicTotalList[i]->Family->Contains(str))
			electronicList->Add(electronicTotalList[i]);
	}
	return electronicList;
}

void SalesController::DBController::SaveDepartments()
{
	departmentDB->Persist();
}

void SalesController::DBController::LoadDepartments()
{
	departmentDB->LoadData();
}

List<Department^>^ SalesController::DBController::QueryAllDepartments()
{
	LoadDepartments();
	return departmentDB->ListDB;
}

void SalesController::DBController::AddDepartment(Department^ dept)
{
	departmentDB->ListDB->Add(dept);
	SaveDepartments();
}

void SalesController::DBController::UpdateDepartment(Department^ dept)
{
	LoadDepartments();
	for (int i = 0; i < departmentDB->ListDB->Count; i++) {
		if (departmentDB->ListDB[i]->Id == dept->Id) {
			departmentDB->ListDB[i] = dept;
			SaveDepartments();
			return;
		}
	}
}

Department^ SalesController::DBController::QueryDepartmentById(int departmentId)
{
	departmentDB->LoadData();
	for (int i = 0; i < departmentDB->ListDB->Count; i++)
		if (departmentDB->ListDB[i]->Id == departmentId)
			return departmentDB->ListDB[i];
	return nullptr;
}

void SalesController::DBController::DeleteDepartment(int departmentId)
{
	for (int i = 0; i < departmentDB->ListDB->Count; i++) {
		if (departmentDB->ListDB[i]->Id == departmentId) {
			departmentDB->ListDB->RemoveAt(i);
			departmentDB->Persist();
			//SaveDepartments();
			return;
		}
	}

}

int SalesController::DBController::QueryLastDepartmentId()
{
	LoadDepartments();
	int maxId = 0;
	for (int i = 0; i < departmentDB->ListDB->Count; i++) {
		if (departmentDB->ListDB[i]->Id > maxId)
			maxId = departmentDB->ListDB[i]->Id;
	}
	return maxId;
}

void SalesController::DBController::SaveCarriers()
{
	carrierDB->Persist();
}

void SalesController::DBController::LoadCarriers()
{
	carrierDB->LoadFromBinaryFile();
}

Carrier^ SalesController::DBController::QueryCarrierById(int carrierId)
{
	carrierDB->LoadFromBinaryFile();
	for (int i = 0; i < carrierDB->ListDB->Count; i++)
		if (carrierDB->ListDB[i]->Id == carrierId)
			return carrierDB->ListDB[i];
	return nullptr;
}

List<Carrier^>^ SalesController::DBController::QueryAllCarriers()
{
	carrierDB->LoadFromBinaryFile();
	return carrierDB->ListDB;
}

List<Carrier^>^ SalesController::DBController::QueryCarriersByName(String^ carrierName)
{
	List<Carrier^>^ carrierList = gcnew List<Carrier^>();
	carrierDB->LoadFromBinaryFile();
	for (int i = 0; i < carrierDB->ListDB->Count; i++)
		if (carrierDB->ListDB[i]->Name->Contains(carrierName)) {
			carrierList->Add(carrierDB->ListDB[i]);
		}
	return carrierList;
}

int SalesController::DBController::QueryLastCarrierId()
{
	
	carrierDB->LoadFromBinaryFile();
	int maxId = 0;
	for (int i = 0; i < carrierDB->ListDB->Count; i++) {
		if (carrierDB->ListDB[i]->Id > maxId)
			maxId = carrierDB->ListDB[i]->Id;
	}
	return maxId;
}

void SalesController::DBController::AddCarrier(Carrier^ carrier)
{
	carrierDB->ListDB->Add(carrier);
	carrierDB->Persist();
}

void SalesController::DBController::UpdateCarrier(Carrier^ carrier)
{
	for (int i = 0; i < carrierDB->ListDB->Count; i++)
		if (carrierDB->ListDB[i]->Id == carrier->Id) {
			carrierDB->ListDB[i] = carrier;
			carrierDB->Persist();
			return;
		}
}

void SalesController::DBController::DeleteCarrier(int carrierId)
{
	for (int i = 0; i < carrierDB->ListDB->Count; i++)
		if (carrierDB->ListDB[i]->Id == carrierId) {
			carrierDB->ListDB->RemoveAt(i);
			carrierDB->Persist();
			return;
		}
}

/*Complete los métodos faltantes para el CRUD de Warehouse*/

void SalesController::DBController::RegisterSale(Sale^ sale)
{	
	saleDB->ListDB->Add(sale);
	saleDB->Persist();
}

void SalesController::DBController::UpdateSale(Sale^ sale)
{
	for (int i = 0; i < saleDB->ListDB->Count; i++)
		if (saleDB->ListDB[i]->Id == sale->Id) {
			saleDB->ListDB[i] = sale;
			saleDB->Persist();
			return;
		}
}

List<Sale^>^ SalesController::DBController::QueryAllSales()
{
	saleDB->LoadData();
	return saleDB->ListDB;
}

List<Sale^>^ SalesController::DBController::QueryAllSalesByStatus(char status)
{
	saleDB->LoadData();
	List <Sale^>^ list = gcnew List<Sale^>();
	for (int i = 0; i < saleDB->ListDB->Count; i++) {
		if (saleDB->ListDB[i]->Status == status) {
			list->Add(saleDB->ListDB[i]);
		}
	}
	return list;
}

Sale^ SalesController::DBController::QuerySaleById(int saleId)
{
	saleDB->LoadData();
	for (int i = 0; i < saleDB->ListDB->Count; i++)
		if (saleDB->ListDB[i]->Id == saleId)
			return saleDB->ListDB[i];
	return nullptr;
}

int SalesController::DBController::QueryLastSaleId()
{
	saleDB->LoadData();
	int maxId = 0;
	for (int i = 0; i < saleDB->ListDB->Count; i++) {
		if (saleDB->ListDB[i]->Id > maxId)
			maxId = saleDB->ListDB[i]->Id;
	}
	return maxId;
}

List<SaleDetail^>^ SalesController::DBController::QueryAllSaleDetails(int saleId)
{
	saleDB->LoadData();
	for (int i = 0; i < saleDB->ListDB->Count; i++)
		if (saleDB->ListDB[i]->Id == saleId)
			return saleDB->ListDB[i]->Details;
	return nullptr;
}
SaleDetail^ SalesController::DBController::QuerySaleDetailById(Sale^ sale, int saleDetailId)
{	
	for (int i = 0; i < sale->Details->Count; i++)
		if (sale->Details[i]->Id == saleDetailId)
			return sale->Details[i];
	return nullptr;
}
/*
int SalesController::DBController::QueryLastSaleDetailId(int saleId)
{
	Sale^ sale = DBController::QuerySaleById(saleId);
	int maxId = 0;
	for (int i = 0; i < sale->Details->Count; i++) {
		if (sale->Details[i]->Id > maxId)
			maxId = sale->Details[i]->Id;
	}
	return maxId;
}
*/
void SalesController::DBController::RegisterCreditNote(CreditNote^ creditNote)
{
	creditNoteDB->ListDB->Add(creditNote);
	creditNoteDB->Persist();
}

int SalesController::DBController::QueryLastCreditNoteId()
{
	creditNoteDB->LoadData();
	int maxId = 0;
	for (int i = 0; i < creditNoteDB->ListDB->Count; i++) {
		if (creditNoteDB->ListDB[i]->Id > maxId)
			maxId = creditNoteDB->ListDB[i]->Id;
	}
	return maxId;
}

void SalesController::DBController::LoadLiteratureGender()
{
	System::Xml::Serialization::XmlSerializer^ reader =
		gcnew System::Xml::Serialization::XmlSerializer(LiteratureGenderDB::typeid);
	System::IO::StreamReader^ file = gcnew System::IO::StreamReader("literatureGenders.xml");
	literatureGenderDB = (LiteratureGenderDB^)reader->Deserialize(file);
	file->Close();

}

//List<LiteratureGender^>
List<LiteratureGender^>^ SalesController::DBController::QueryAllLiteratureGenders()
{
	LoadLiteratureGender();

	return literatureGenderDB->ListDB;
}

void SalesController::DBController::SaveLiteratureGender()
{
	System::Xml::Serialization::XmlSerializer^ writer =
		gcnew System::Xml::Serialization::XmlSerializer(LiteratureGenderDB::typeid);
	System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("literatureGenders.xml");
	writer->Serialize(file, literatureGenderDB);
	file->Close();
}
