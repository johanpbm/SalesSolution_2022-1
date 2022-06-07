#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace SalesModel;

namespace SalesController {
	public ref class ProductDB
	{
		public:
			List <Product^>^ ListDB = gcnew List<Product^>();
			ProductDB();
			void Persist();
			void LoadData();
	};
}

