#pragma once
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class DepartmentDB
	{
	public:
		List <Department^>^ ListDB = gcnew List<Department^>();
		void Persist();
		void LoadData();
	};
}

