#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace SalesModel;

namespace SalesController {
	public ref class StoreProductDB
	{
	public:
		List <StoreProduct^>^ ListDB = gcnew List<StoreProduct^>();
		void Persist();
	};
}