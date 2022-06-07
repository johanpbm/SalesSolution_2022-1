#include "pch.h"

#include "SalesController.h"


void SalesController::SalesManager::AddProduct(Product^ p)
{
	DBController::AddProduct(p);
}

void SalesController::SalesManager::UpdateProduct(Product^ p)
{
	DBController::UpdateProduct(p);
}

void SalesController::SalesManager::DeleteProduct(int productId)
{
	DBController::DeleteProduct(productId);
}

List<Product^>^ SalesController::SalesManager::QueryAllProducts()
{
	return DBController::QueryAllProducts();
}

List<Book^>^ SalesController::SalesManager::QueryAllBooks()
{
	return DBController::QueryAllBooks();
}

List<Electronic^>^ SalesController::SalesManager::QueryAllElectronics()
{
	return DBController::QueryAllElectronics();
}

Product^ SalesController::SalesManager::QueryProductById(int productId)
{
	return DBController::QueryProductById(productId);
}

Electronic^ SalesController::SalesManager::QueryElectronicById(int productId)
{
	return DBController::QueryElectronicById(productId);
}

Book^ SalesController::SalesManager::QueryBookById(int productId)
{
	return DBController::QueryBookById(productId);	
}

List<LiteratureGender^>^ SalesController::SalesManager::QueryAllLiteratureGenders() {
	return DBController::QueryAllLiteratureGenders();
}

User^ SalesController::SalesManager::ValidateUser(String^ username, String^ password)
{
	return DBController::ValidateUser(username, password);
}

void SalesController::SalesManager::AddUser(User^ user)
{
	DBController::AddUser(user);
}

int SalesController::SalesManager::QueryLastUserId()
{
	return DBController::QueryLastUserId();
}
void SalesController::SalesManager::AddManager(Manager^ manager) {
	DBController::AddManager(manager);
}
void SalesController::SalesManager::UpdateManager(Manager^ manager) {
	DBController::UpdateManager(manager);
}
void SalesController::SalesManager::DeleteManager(int managerId) {
	DBController::DeleteManager(managerId);
}
List<Manager^>^ SalesController::SalesManager::QueryAllManagers()
{
	return DBController::QueryAllManagers();
}
int SalesController::SalesManager::QueryLastManagerId()
{
	return DBController::QueryLastManagerId();
}
Manager^ SalesController::SalesManager::QueryManagerById(int managerId) {
	return DBController::QueryManagerById(managerId);
}
/*
int SalesController::SalesManager::QueryLastManagerId()
{
	return DBController::QueryLastManagerId();
}
*/

StoreProduct^ SalesController::SalesManager::QueryProductByIdFromStore(Store^ store, int productId)
{
	return DBController::QueryProductByIdFromStore(store->Id, productId);
}

List<Product^>^ SalesController::SalesManager::QueryProductsByName(String^ name)
{
	List<Book^>^ bookList = DBController::QueryAllBooksByCoincidence(name);
	List<Electronic^>^ electronicList = DBController::QueryAllElectronicsByCoincidence(name);
	List<Product^>^ productList = gcnew List<Product^>();

	for (int i = 0; i < bookList->Count; i++)
		productList->Add(bookList[i]);
	for (int i = 0; i < electronicList->Count; i++)
		productList->Add(electronicList[i]);

	return productList;
}

List<Product^>^ SalesController::SalesManager::QueryProductsByDescription(String^ description)
{
	List<Book^>^ bookList = DBController::QueryAllBooksByCoincidence(description);
	List<Electronic^>^ electronicList = DBController::QueryAllElectronicsByCoincidence(description);
	List<Product^>^ productList = gcnew List<Product^>();

	for (int i = 0; i < bookList->Count; i++)
		productList->Add(bookList[i]);
	for (int i = 0; i < electronicList->Count; i++)
		productList->Add(electronicList[i]);

	return productList;
}

int SalesController::SalesManager::QueryLastProductId()
{
	return DBController::QueryLastProductId();
}

void SalesController::SalesManager::AddSalesman(Salesman^ salesman)
{
	DBController::AddSalesman(salesman);
}

void SalesController::SalesManager::UpdateSalesman(Salesman^ salesman)
{
	DBController::UpdateSalesman(salesman);
}

void SalesController::SalesManager::DeleteSalesman(int salesmanId)
{
	DBController::DeleteSalesman(salesmanId);
}

List<Salesman^>^ SalesController::SalesManager::QueryAllSalesmen()
{
	return DBController::QueryAllSalesmen();
}

int SalesController::SalesManager::QueryLastSalesmanId()
{
	return DBController::QueryLastSalesmanId();
}

Salesman^ SalesController::SalesManager::QuerySalesmanById(int salesmanId)
{
	return DBController::QuerySalesmanById(salesmanId);
}

void SalesController::SalesManager::AddCustomer(Customer^ customer)
{
	DBController::AddCustomer(customer);
}

void SalesController::SalesManager::UpdateCustomer(Customer^ customer)
{
	DBController::UpdateCustomer(customer);
}

void SalesController::SalesManager::DeleteCustomer(int customerId)
{
	DBController::DeleteCustomer(customerId);
}

List<Customer^>^ SalesController::SalesManager::QueryAllCustomers() {
	return DBController::QueryAllCustomers();
}

List<Person^>^ SalesController::SalesManager::QueryAllPersons()
{
	return DBController::QueryAllPersons();
}

List<Company^>^ SalesController::SalesManager::QueryAllCompanies()
{
	return DBController::QueryAllCompanies();
}

Customer^ SalesController::SalesManager::QueryCustomerById(int customerId) {
	return DBController::QueryCustomerById(customerId);
}

int SalesController::SalesManager::QueryLastCustomerId()
{
	return DBController::QueryLastCustomerId();
}

List<Store^>^ SalesController::SalesManager::QueryAllStores()
{
	return DBController::QueryAllStores();
}

void SalesController::SalesManager::AddStore(Store^ store)
{
	DBController::AddStore(store);
}

void SalesController::SalesManager::UpdateStore(Store^ store)
{
	DBController::UpdateStore(store);
}

void SalesController::SalesManager::DeleteStore(int storeId)
{
	DBController::DeleteStore(storeId);
}

int SalesController::SalesManager::QueryLastStoreId()
{
	return DBController::QueryLastStoreId();
}

Store^ SalesController::SalesManager::QueryStoreById(int storeId) {
	Store^ store = DBController::QueryStoreById(storeId);
	//store->StoreProductList = DBController::QueryStoreProductsByStoreId(store->Id);
	return store;
}

/* Department */
void SalesController::SalesManager::AddDepartment(Department^ dept)
{
	DBController::AddDepartment(dept);
}

void SalesController::SalesManager::UpdateDepartment(Department^ dept)
{
	DBController::UpdateDepartment(dept);
}

List<Department^>^ SalesController::SalesManager::QueryAllDepartments()
{
	return DBController::QueryAllDepartments();
}

Department^ SalesController::SalesManager::QueryDepartmentById(int departmentId)
{
	Department^ dept = DBController::QueryDepartmentById(departmentId);
	return dept;
}

void SalesController::SalesManager::DeleteDepartment(int departmentId)
{
	DBController::DeleteDepartment(departmentId);
}

int SalesController::SalesManager::QueryLastDepartmentId()
{
	return DBController::QueryLastDepartmentId();
}

/* Carrier */
void SalesController::SalesManager::AddCarrier(Carrier^ carrier)
{
	DBController::AddCarrier(carrier);
}

void SalesController::SalesManager::UpdateCarrier(Carrier^ carrier)
{
	DBController::UpdateCarrier(carrier);
}

void SalesController::SalesManager::DeleteCarrier(int carrierId)
{
	DBController::DeleteCarrier(carrierId);
}

Carrier^ SalesController::SalesManager::QueryCarrierById(int carrierId)
{
	return DBController::QueryCarrierById(carrierId);
}

List<Carrier^>^ SalesController::SalesManager::QueryCarriersByName(String^ name)
{
	return DBController::QueryCarriersByName(name);
}

List<Carrier^>^ SalesController::SalesManager::QueryAllCarriers()
{
	return DBController::QueryAllCarriers();
}

int SalesController::SalesManager::QueryLastCarrierId()
{
	//Completar
	return 0;
}

/* Complete los métodos faltantes para el CRUD de Warehouse */

int SalesController::SalesManager::QueryLastSaleId()
{
	return DBController::QueryLastSaleId();
}

void SalesController::SalesManager::RegisterSale(Sale^ sale)
{
	DBController::RegisterSale(sale);
}

void SalesController::SalesManager::UpdateSale(Sale^ sale)
{
	DBController::UpdateSale(sale);
}

List<Sale^>^ SalesController::SalesManager::QueryAllSales()
{
	return DBController::QueryAllSales();
}

List<Sale^>^ SalesController::SalesManager::QueryAllSalesByStatus(char status)
{
	return DBController::QueryAllSalesByStatus(status);
}

Sale^ SalesController::SalesManager::QuerySaleById(int saleId)
{
	return DBController::QuerySaleById(saleId);
}

List<SaleDetail^>^ SalesController::SalesManager::QueryAllSaleDetails(int saleId)
{
	return DBController::QueryAllSaleDetails(saleId);
}

SaleDetail^ SalesController::SalesManager::QuerySaleDetailById(Sale^ sale, int saleDetailId)
{
	return DBController::QuerySaleDetailById(sale, saleDetailId);;
}
/*
int SalesController::SalesManager::QueryLastSaleDetailId(int saleId)
{
	return DBController::QueryLastSaleDetailId(saleId);
}
*/
int SalesController::SalesManager::QueryLastCreditNoteId()
{
	return DBController::QueryLastCreditNoteId();
}

void SalesController::SalesManager::RegisterCreditNote(CreditNote^ creditNote)
{
	DBController::RegisterCreditNote(creditNote);
}


