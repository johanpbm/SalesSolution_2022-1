#pragma once
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class SalesmanDB
	{
		public:
			List <Salesman^>^ ListDB = gcnew List<Salesman^>();
			void Persist();
			void LoadData();

	};
}
