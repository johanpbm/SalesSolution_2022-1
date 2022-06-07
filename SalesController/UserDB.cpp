#include "pch.h"
#include "UserDB.h"

using namespace System::Xml::Serialization;
using namespace System::IO;
using namespace System::Collections::Generic;

SalesController::UserDB::UserDB() {
}

void SalesController::UserDB::Persist()
{
	XmlSerializer^ writer = gcnew XmlSerializer(ListDB->GetType());
	StreamWriter^ file = gcnew StreamWriter("users.xml");
	writer->Serialize(file, ListDB);
	file->Close();
}

void SalesController::UserDB::LoadData()
{
	XmlSerializer^ reader = gcnew XmlSerializer(ListDB->GetType());
	StreamReader^ file = gcnew StreamReader("users.xml");
	ListDB = (List <User^>^)reader->Deserialize(file);
	file->Close();
}
