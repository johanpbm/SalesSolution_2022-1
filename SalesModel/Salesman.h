/*
	La clase Salesman modela a un vendedor.
	Salesman hereda de User, eso significa que un vendedor es un tipo de usuario del sistema.
*/
#include "Employee.h"
#include "Store.h"

namespace SalesModel {
	[Serializable]
	public ref class Salesman : public Employee {
	public:
		property double Salary;
		property double Quota;
		property Store^ Store;
		property char Status;
		Salesman() {}
		Salesman(int id, String^ firstName, String^ lastName, char gender, double salary, double quota) {
			this->Id = id;
			this->FirstName = firstName;
			this->LastName = lastName;
			this->Gender = gender;
			this->Salary = salary;
			this->Quota = quota;
			this->Status = 'A';
		}
	};
}