 /*
	 La clase SaleDetail modela a un detalle de venta.
 */
#include "StoreProduct.h"

using namespace System;

namespace SalesModel {
	[Serializable]
	public ref class SaleDetail {
		public:
			property int Id;
			property int Quantity;
			property double SubTotal;
			property double UnitPrice;
			property StoreProduct^ Product;
	};
}