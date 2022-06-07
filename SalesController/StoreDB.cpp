#include "pch.h"
#include "StoreDB.h"
#include "DBController.h"

using namespace System::Xml::Serialization;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

void SalesController::StoreDB::Persist()
{
	/* Persistencia de las tiendas en formato binario */
	Stream^ stream = File::Open("stores.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::StoreDB::LoadData() {
	
	if (File::Exists("stores.bin")) {
		Stream^ stream = File::Open("stores.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Store^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
	
	/*
	Store^ s = gcnew Store();
	s->Id = 1;
	s->Name = "Tienda San Miguel";
	s->Address = "Av. La Marina 999";
	s->PostalCode = "12021";
	s->Status = "A";
	s->StoreProductList = gcnew List<StoreProduct^>();
	StoreProduct^ sp = gcnew StoreProduct();
	sp->Id = 1;
	sp->Product = DBController::QueryProductById(1);
	sp->Discount = 0.05;
	sp->MinStock = 3;
	sp->Status = "A";
	s->StoreProductList->Add(sp);

	sp = gcnew StoreProduct();
	sp->Id = 2;
	sp->Product = DBController::QueryProductById(2);
	sp->Discount = 0.08;
	sp->MinStock = 5;
	sp->Status = "A";
	s->StoreProductList->Add(sp);

	ListDB->Add(s);

	s = gcnew Store();
	s->Id = 2;
	s->Name = "Tienda Jockey Plaza";
	s->Address = "Av. Javier Prado 3415";
	s->PostalCode = "15023";
	s->Status = "A";

	sp = gcnew StoreProduct();
	sp->Id = 3;
	sp->Product = DBController::QueryProductById(3);
	sp->Discount = 0.1;
	sp->MinStock = 4;
	sp->Status = "A";
	s->StoreProductList = gcnew List<StoreProduct^>();
	s->StoreProductList->Add(sp);

	sp = gcnew StoreProduct();
	sp->Id = 4;
	sp->Product = DBController::QueryProductById(4);
	sp->Discount = 0.15;
	sp->MinStock = 2;
	sp->Status = "A";
	s->StoreProductList = gcnew List<StoreProduct^>();
	s->StoreProductList->Add(sp);
	ListDB->Add(s);

	Persist();
	*/
}
