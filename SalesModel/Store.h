/*
	La clase Store modela una tienda.
*/
#include "Premises.h"
#include "StoreProduct.h"
#include "StoreDepartment.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SalesModel {
	[Serializable]
	public ref class Store: Premises {
	public:
		String^ Campaign;
		property List<StoreProduct^ >^ StoreProductList;
		property List<StoreDepartment^ >^ StoreDepartmentList;
	};
}