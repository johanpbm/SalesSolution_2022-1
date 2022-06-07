#pragma once
/*
	La clase StoreProduct modela un producto por tienda.
*/
#include "Product.h"
using namespace System;

namespace SalesModel {
	[Serializable]
    public ref class StoreProduct {
    public:
		property int Id;
		property int Stock;
		property int MinStock;
		property double Discount;
		property String^ Status;
		property Product^ Product;
    };
}