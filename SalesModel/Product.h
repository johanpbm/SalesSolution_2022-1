 /*
	 La clase Product modela un producto que se gestiona en el sistema de ventas.
 */
using namespace System;

namespace SalesModel {
	[Serializable]
	public ref class Product {
	public:
		property int Id;
		property String^ Name;
		property String^ Description;
		property int StockTotal;
		property double Price;
		property char Status;
		property array<Byte>^ Photo;
		Product();
		Product(int id, String^ name, String^ description, int stockTotal, double price, char status);
	};
}