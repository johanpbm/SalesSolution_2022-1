#include "pch.h"
#include "ProductDB.h"

using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

SalesController::ProductDB::ProductDB()
{
}

void SalesController::ProductDB::Persist()
{
	/* Persistencia de los productos en formato binario */
	Stream^ stream = File::Open("products.xxx", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::ProductDB::LoadData()
{
	if (File::Exists("products.xxx")) {
		Stream^ stream = File::Open("products.xxx", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Product^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}
