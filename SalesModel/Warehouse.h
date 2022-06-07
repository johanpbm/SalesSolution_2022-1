#pragma once
/*
	La clase Warehouse modela un almacén.
*/
#include "Premises.h"
#include "Carrier.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SalesModel {
	[Serializable]
	public ref class Warehouse : Premises {
	public:
		property int CarriersQuantity;
		property List<Carrier^ >^ CarrierList;
	};
}

