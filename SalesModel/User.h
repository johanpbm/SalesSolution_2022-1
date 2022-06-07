/**
 * Project SalesSolution
 */
#pragma once
using namespace System;

namespace SalesModel {
	[Serializable]
	public ref class User {
		//private:
		//	int id;
		//public:
		//	int GetId(){ return id;}
		//	void SetId(int id){ this->id = id;}	
		public:
		    property int Id; //Internamente hace que se implemente los métodos de acceso GetId y SetId
		    property String^ Username;
		    property String^ Password;
		    property String^ FirstName;
		    property String^ LastName;
		    property char Gender;
		    property String^ DocumentNumber;
		    property String^ PhoneNumber;
		    property String^ Address;
		    property String^ Email;
		    property char Status;
		    property String^ Birthday;
			User() {}
			User(int id, String^ username, String^ password, String^ firstName, String^ lastName, 
				char gender, String^ documentNumber, String^ phoneNumber, String^ address, 
				String^ email, char status, String^ birthday);
	};
}

