#pragma once
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class ManagerDB
	{
		public:
			List <Manager^>^ ListDB = gcnew List<Manager^>();
			void Persist();
			void LoadData();
	};
}
