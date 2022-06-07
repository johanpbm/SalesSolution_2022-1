#pragma once
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class StoreDB
	{
	public:
		List <Store^>^ ListDB = gcnew List<Store^>();
		void Persist();
		void LoadData();
	};
}
