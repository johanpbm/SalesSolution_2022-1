/**
 * Project SalesSolution
 */
#pragma once
#include "User.h"

namespace SalesModel {
    [Serializable]
    public ref class Employee: public User {
        public: 
            property double Salary;
    };
}