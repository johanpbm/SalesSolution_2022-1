#include "pch.h"
#include "CreditNoteDB.h"
using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

void SalesController::CreditNoteDB::Persist()
{
	Stream^ stream = File::Open("credit_notes.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::CreditNoteDB::LoadData()
{
	if (File::Exists("credit_notes.bin")) {
		Stream^ stream = File::Open("credit_notes.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <CreditNote^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}

SalesController::CreditNoteDB::CreditNoteDB()
{
}
