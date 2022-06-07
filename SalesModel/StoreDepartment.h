#pragma once
/*
	La clase StoreDepartment modela un departamento por tienda.
*/
#include "Department.h"
using namespace System;

namespace SalesModel {
	[Serializable]
	public ref class StoreDepartment{
	public:
		property bool IsActive;
		property Department^ Department;
	};
}

