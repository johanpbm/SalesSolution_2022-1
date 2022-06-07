#pragma once
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class UserDB
	{
		public:
			List <User^>^ ListDB = gcnew List<User^>();
			UserDB();
			void Persist();
			void LoadData();
	};
}

