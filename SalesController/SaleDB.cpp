#include "pch.h"
#include "SaleDB.h"
using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

void SalesController::SaleDB::Persist()
{
	Stream^ stream = File::Open("sales.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::SaleDB::LoadData()
{
	if (File::Exists("sales.bin")) {
		Stream^ stream = File::Open("sales.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Sale^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}

SalesController::SaleDB::SaleDB()
{

}