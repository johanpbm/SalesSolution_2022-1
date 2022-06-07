#pragma once
#include "DBController.h"

using namespace System;
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class SalesManager
	{	
		public:
			//Métodos CRUD para productos, que son métodos de clase (estáticos)
			static void AddProduct(Product^);
			static void UpdateProduct(Product^);
			static void DeleteProduct(int);
			static Product^ QueryProductById(int);
			static Book^ QueryBookById(int);
			static Electronic^ QueryElectronicById(int);
			static StoreProduct^ QueryProductByIdFromStore(Store^, int productId);
			static List<Product^>^ QueryProductsByName(String^ name);
			static List<Product^>^ QueryProductsByDescription(String^ description);
			static List<Product^>^ QueryAllProducts();
			static List<Book^>^ QueryAllBooks();
			static List<LiteratureGender^>^ QueryAllLiteratureGenders();
			static List<Electronic^>^ QueryAllElectronics();
			static int QueryLastProductId();

			//Métodos para la autenticación
			static User^ ValidateUser(String^ username, String^ password);
			static void AddUser(User^);
			static int QueryLastUserId();

			/*Manager*/
			static void AddManager(Manager^);
			static void UpdateManager (Manager^);
			static void DeleteManager(int);
			static Manager^ QueryManagerById(int);
			static List<Manager^>^ QueryAllManagers();
			static int QueryLastManagerId();

			/*Salesman*/
			static void AddSalesman(Salesman^);
			static void UpdateSalesman(Salesman^);
			static void DeleteSalesman(int salesmanId);
			static Salesman^ QuerySalesmanById(int salesmanId);
			static List<Salesman^>^ QueryAllSalesmen();
			static int QueryLastSalesmanId();

			/*Customer*/
			static void AddCustomer(Customer^);
			static void UpdateCustomer(Customer^);
			static void DeleteCustomer(int customerId);
			static List<Customer^>^ QueryAllCustomers();
			static List<Person^>^ QueryAllPersons();
			static List<Company^>^ QueryAllCompanies();
			static Customer^ QueryCustomerById(int customerId);
			static int QueryLastCustomerId();

			/*Store*/
			static List<Store^>^ QueryAllStores();
			static void AddStore(Store^);
			static void UpdateStore(Store^);
			static void DeleteStore(int storeId);
			static Store^ QueryStoreById(int storeId);
			static int QueryLastStoreId();

			/*Department*/
			static void AddDepartment(Department^);
			static void UpdateDepartment(Department^);
			static List<Department^>^ QueryAllDepartments();
			static Department^ QueryDepartmentById(int departmentId);
			static void DeleteDepartment(int departmentId);
			static int QueryLastDepartmentId();

			/*Carrier*/
			static void AddCarrier(Carrier^);
			static void UpdateCarrier(Carrier^);
			static void DeleteCarrier(int);
			static Carrier^ QueryCarrierById(int);
			static List<Carrier^>^ QueryCarriersByName(String^ name);
			static List<Carrier^>^ QueryAllCarriers();
			static int QueryLastCarrierId();

			/*Complete los métodos faltantes para el CRUD de Warehouse*/

			/*Sale*/
			static int QueryLastSaleId();
			static void RegisterSale(Sale^);
			static void UpdateSale(Sale^);
			static List<Sale^>^ QueryAllSales();
			static List<Sale^>^ QueryAllSalesByStatus(char status);
			static Sale^ QuerySaleById(int saleId);

			/*SaleDetail*/
			static List<SaleDetail^>^ QueryAllSaleDetails(int saleId);
			//static int QueryLastSaleDetailId(int saleId);
			static SaleDetail^ QuerySaleDetailById(Sale^ sale, int saleDetailId);

			/*CreditNote*/
			static int QueryLastCreditNoteId();
			static void RegisterCreditNote(CreditNote^);
	};
}
