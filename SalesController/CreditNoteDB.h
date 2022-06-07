#pragma once
using namespace SalesModel;
using namespace System::Collections::Generic;
namespace SalesController {
	public ref class CreditNoteDB
	{
	public:
		List<CreditNote^>^ ListDB = gcnew List<CreditNote^>();
		void Persist();
		void LoadData();
		CreditNoteDB();
	};
}

