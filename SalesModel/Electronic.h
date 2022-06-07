/*
	La clase Electronic modela un producto electrónico para la venta.
	Electronic hereda de Product y Taxable, eso significa que un producto electrónico es un tipo de producto y a la vez es susceptible a impuestos.
*/
#include "Product.h"
#include "Taxable.h"

using namespace System;

namespace SalesModel {
	[Serializable]
	public ref class Electronic : public Product, Taxable {
	public:
		property String^ Brand;
		property String^ Family;
		property String^ Model;
		property int Warranty;
		virtual double GetTax();
	};
}