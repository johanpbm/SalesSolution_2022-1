#pragma once
#include "ProductDB.h"
#include "UserDB.h"
#include "ManagerDB.h"
#include "StoreDB.h"
#include "StoreProductDB.h"
#include "SalesmanDB.h"
#include "CustomerDB.h"
#include "SaleDB.h"
#include "DepartmentDB.h"
#include "CarrierDB.h"
#include "WarehouseDB.h"
#include "ConnectionParam.h"
#include "CreditNoteDB.h"
#include "LiteratureGenderDB.h"

using namespace SalesModel;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;


namespace SalesController {
	public ref class DBController
	{
		private:
			static ConnectionParam^ connParam;
			static UserDB^ userDB = gcnew UserDB();
			static ProductDB^ productDB = gcnew ProductDB();			
			static ManagerDB^ managerDB = gcnew ManagerDB();
			static StoreDB^ storeDB = gcnew StoreDB();
			static StoreProductDB^ storeProductDB = gcnew StoreProductDB();
			static SalesmanDB^ salesmanDB = gcnew SalesmanDB();
			static CustomerDB^ customerDB = gcnew CustomerDB();
			static SaleDB^ saleDB = gcnew SaleDB();
			static DepartmentDB^ departmentDB = gcnew DepartmentDB();
			static CreditNoteDB^ creditNoteDB = gcnew CreditNoteDB();
			static CarrierDB^ carrierDB = gcnew CarrierDB();
			static WarehouseDB^ warehouseDB = gcnew WarehouseDB();	
			static LiteratureGenderDB^ literatureGenderDB = gcnew LiteratureGenderDB();

		public:
			static void Init();

			static User^ ValidateUser(String^ username, String^ password);
			static int QueryLastUserId();
			static void AddUser(User^);

			/*Manager*/
			static void AddManager(Manager^);
			static void UpdateManager(Manager^);
			static void DeleteManager(int managerId);
			static Manager^ QueryManagerById(int managerId);
			static List<Manager^>^ QueryAllManagers();
			static void SaveManagers();
			static void LoadManagers();
			static int QueryLastManagerId();

			/*Product*/
			static Product^ QueryProductById(int);
			static List<Product^>^ QueryAllProducts();
			static int QueryLastProductId();
			static Book^ QueryBookById(int);
			static Electronic^ QueryElectronicById(int);
			static void AddProduct(Product^);
			static void UpdateProduct(Product^);
			static void DeleteProduct(int productId);
			static void AddStoreProduct(Store^, StoreProduct^);
			static List<Book^>^ QueryAllBooks();
			static List<Electronic^>^ QueryAllElectronics();
			static List<StoreProduct^>^ QueryAllBooksFromStore(int storeId);
			static List<StoreProduct^>^ QueryAllElectronicsFromStore(int storeId);
			static StoreProduct^ QueryProductByIdFromStore(int storeId, int productId);

			//Metodos de clase para generos literarios
			static void LoadLiteratureGender();
			static List<LiteratureGender^>^ QueryAllLiteratureGenders();
			static void SaveLiteratureGender();


			/*Customer*/
			static void AddCustomer(Customer^);
			static void UpdateCustomer(Customer^);
			static void DeleteCustomer(int customerId);
			static List<Customer^>^ QueryAllCustomers();
			static List<Person^>^ QueryAllPersons();
			static List<Company^>^ QueryAllCompanies();
			static Customer^ QueryCustomerById(int customerId);
			static int QueryLastCustomerId();

			/*Salesman*/
			static void SaveSalesmen();
			static void LoadSalesmen();
			static void AddSalesman(Salesman^);
			static void UpdateSalesman(Salesman^);
			static void DeleteSalesman(int salesmanId);
			static List<Salesman^>^ QueryAllSalesmen();
			static Salesman^ QuerySalesmanById(int salesmanId);
			static int QueryLastSalesmanId();

			/* Store */
			static void SaveStores();
			static void LoadStores();
			static List<Store^>^ QueryAllStores();
			static void AddStore(Store^);
			static void UpdateStore(Store^);
			static void DeleteStore(int storeId);
			static Store^ QueryStoreById(int storeId);
			static int QueryLastStoreId();
			static List<StoreProduct^>^ QueryStoreProductsByStoreId(int storeId);
			static List<Book^>^ QueryAllBooksByCoincidence(String^);
			static List<Electronic^>^ QueryAllElectronicsByCoincidence(String^);

			/* Department */
			static void SaveDepartments();
			static void LoadDepartments();
			static List<Department^>^ QueryAllDepartments();
			static void AddDepartment(Department^);
			static void UpdateDepartment(Department^);
			static Department^ QueryDepartmentById(int departmentId);
			static void DeleteDepartment(int departmentId);
			static int QueryLastDepartmentId();

			/* Carrier */
			static void SaveCarriers();
			static void LoadCarriers();
			static Carrier^ QueryCarrierById(int);
			static List<Carrier^>^ QueryAllCarriers();
			static List<Carrier^>^ QueryCarriersByName(String^);
			static int QueryLastCarrierId();
			static void AddCarrier(Carrier^);
			static void UpdateCarrier(Carrier^);
			static void DeleteCarrier(int carrierId);

			/*Complete los métodos faltantes para el CRUD de Warehouse*/

			/* Sale */
			static void RegisterSale(Sale^);
			static void UpdateSale(Sale^);
			static List<Sale^>^ QueryAllSales();
			static List<Sale^>^ QueryAllSalesByStatus(char status);
			static Sale^ QuerySaleById(int saleId);
			static int QueryLastSaleId();

			/*SaleDetail*/
			static List<SaleDetail^>^ QueryAllSaleDetails(int saleId);
			static SaleDetail^ QuerySaleDetailById(Sale^ sale, int saleDetailId);
			//static int QueryLastSaleDetailId(int saleId);

			/*CreditNote*/
			static void RegisterCreditNote(CreditNote^);
			static int QueryLastCreditNoteId();

	};


}
