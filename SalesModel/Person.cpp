/**
 * Project SalesSolution
 */
#include "pch.h"
#include "Person.h"

/**
 * Person implementation
 */

SalesModel::Person::Person(int id, String^ firstName, String^ lastName, String^ email, String^ dni)
{
	this->Id = id;
	this->FirstName = firstName;
	this->LastName = lastName;
	this->Email = email;
	this->DocumentNumber = dni;

}
