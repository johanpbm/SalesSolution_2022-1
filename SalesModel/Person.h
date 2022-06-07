/**
 * Project SalesSolution
 */
#include "Customer.h"

using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class Person : public Customer {
    public:
        int Level;
        Person() {};
        Person(int id, String^ firstName, String^ lastName, String^ email, String^ dni);
        String^ ToString() override { return Id + " " + FirstName + " " + LastName; }
    };
}