#pragma once
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class CustomerDB
	{
	public:
		List <Customer^>^ ListDB = gcnew List<Customer^>();
		void Persist();
		void LoadData();
	};
}