#include "pch.h"
#include "DepartmentDB.h"

using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;
void SalesController::DepartmentDB::Persist()
{
	Stream^ stream = File::Open("departments.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::DepartmentDB::LoadData()
{
	if (File::Exists("departments.bin")) {
		Stream^ stream = File::Open("departments.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Department^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}
