/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Book.h"

/**
 * Book implementation
 */
SalesModel::Book::Book()
{

}

SalesModel::Book::Book(int id, String^ name)
{
	this->Id = id;
	this->Name = name;
}

SalesModel::Book::Book(int id, String^ name, String^ description, String^ author, String^ title, double price,
	int stockTotal, String^ edition, String^ editorial, int year, char status) :
	SalesModel::Product::Product(id, name, description, stockTotal, price, status) {
	/*
	Id = id;
	Name = name;
	Description = description;
	Price = price;
	StockTotal = stockTotal;
	Status = status;
	*/
	Author = author;
	Title = title;
	Edition = edition;
	Editorial = editorial;
	Year = year;
}
