#include "pch.h"
#include "CustomerDB.h"

using namespace System::Xml::Serialization;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Runtime::Serialization::Formatters::Binary;

void SalesController::CustomerDB::Persist()
{
	/* Persistencia de los clientes en formato binario */
	Stream^ stream = File::Open("customers.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::CustomerDB::LoadData()
{
	if (File::Exists("customers.bin")) {
		Stream^ stream = File::Open("customers.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Customer^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}
