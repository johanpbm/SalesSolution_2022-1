#include "pch.h"
#include "CarrierDB.h"
using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

void SalesController::CarrierDB::Persist()
{
	Stream^ stream = File::Open("carriers.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::CarrierDB::LoadFromBinaryFile()
{
	if (File::Exists("carriers.bin")) {
		Stream^ stream = File::Open("carriers.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Carrier^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}
