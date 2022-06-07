#pragma once
/*
	La clase Premises modela un local físico.
*/
using namespace System;
using namespace System::Collections::Generic;

namespace SalesModel {
	[Serializable]
	public ref class Premises {
	public:
		property int Id;
		property String^ Name;
		property String^ Address;
		property String^ PostalCode;
		property String^ Status;
	};
}

