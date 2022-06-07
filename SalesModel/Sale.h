 /*
	 La clase Sale modela a una venta.
 */

#include "Salesman.h"
#include "Customer.h"
#include "SaleDetail.h"

using namespace System;

namespace SalesModel {
	[Serializable]
	public ref class Sale {
	public:
		property int Id;
		property double Total;
		property char Status; //'A:anulado, C:cancelado, N:con nota de crédito 
		property String^ Date;
		property Salesman^ Salesman;
		property Customer^ Customer;
		property Store^ Store;
		property List<SaleDetail^>^ Details; //Puntero a una lista de punteros a SaleDetail
	};
}