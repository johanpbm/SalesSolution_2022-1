#include "pch.h"
#include "SalesmanDB.h"

using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

void SalesController::SalesmanDB::Persist()
{
	Stream^ stream = File::Open("salesmen.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::SalesmanDB::LoadData()
{
	if (File::Exists("salesmen.bin")) {
		Stream^ stream = File::Open("salesmen.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Salesman^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}
