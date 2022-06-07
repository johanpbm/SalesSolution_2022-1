#pragma once
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class CarrierDB
	{
		public:
			List <Carrier^>^ ListDB = gcnew List<Carrier^>();
			void Persist();
			void LoadFromBinaryFile();
	};
}
