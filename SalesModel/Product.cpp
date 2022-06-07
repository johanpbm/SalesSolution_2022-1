/**
 * Product implementation
 */
#include "pch.h"
#include "Product.h"


SalesModel::Product::Product()
{

}

SalesModel::Product::Product(int id, String^ name, String^ description, int stockTotal, double price, char status)
{
	Id = id;
	Name = name;
	Description = description;
	Price = price;
	StockTotal = stockTotal;
	Status = status;
}