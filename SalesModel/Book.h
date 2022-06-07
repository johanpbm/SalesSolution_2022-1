/*
	La clase Book modela un libro como producto para la venta.
	Book hereda de Product, eso significa que un libro es un tipo de producto.
*/

#include "Product.h"
#include "LiteratureGender.h"
using namespace System;

namespace SalesModel {
	[Serializable]
	public ref class Book : public Product {
	public:
		property String^ Author;
		property String^ Title;
		property String^ Edition;
		property String^ Editorial;
		property int Year;
		property LiteratureGender^ Gender;
		Book();
		Book(int id, String^ name);
		Book(int id, String^ name, String^ description, String^ author, String^ title, double price,
			int stockTotal, String^ edition, String^ editorial, int year, char status);
	};
}