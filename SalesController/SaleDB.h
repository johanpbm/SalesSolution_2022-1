#pragma once
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class SaleDB
	{
		public:
			List<Sale^>^ ListDB = gcnew List<Sale^>();
			void Persist();
			void LoadData();
			SaleDB();
	};
}
