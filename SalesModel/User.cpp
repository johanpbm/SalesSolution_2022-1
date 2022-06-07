/**
 * Project SalesSolution
 */
#include "pch.h"
#include "User.h"

/**
 * User implementation
 */

SalesModel::User::User(int id, String^ username, String^ password, String^ firstName, String^ lastName, char gender, String^ documentNumber, String^ phoneNumber, String^ address, String^ email, char status, String^ birthday)
{
    this->Id = id;
    this->Username = username;
    this->Password = password;
    FirstName = firstName;
    LastName = lastName;
    //Completar los demás atributos de la clase.

}
