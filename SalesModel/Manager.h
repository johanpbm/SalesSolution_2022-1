/**
 * Project SalesSolution
 */
#pragma once
#include "Employee.h"

using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class Manager : public Employee {
    public:
        property int EmployeesNumber;
        //property String^ Department;
    };
}