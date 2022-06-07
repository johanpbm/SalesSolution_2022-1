#pragma once
/*
	La clase Department modela un departamento.
*/
#include "Manager.h"

using namespace System;

namespace SalesModel {
	[Serializable]
	public ref class Department
	{
	public:
		property int Id;
		property String^ Name;
		property Manager^ Administrator;
		property double comission;
	};
}

