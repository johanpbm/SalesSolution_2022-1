#include "pch.h"
#include "ManagerDB.h"

using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

void SalesController::ManagerDB::Persist()
{
	/* Persistencia de los gerentes en formato binario */
	Stream^ stream = File::Open("managers.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::ManagerDB::LoadData()
{
	if (File::Exists("managers.bin")) {
		Stream^ stream = File::Open("managers.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Manager^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}
