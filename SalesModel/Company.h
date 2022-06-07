/**
 * Project SalesSolution
 */
#include "Customer.h"

using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class Company : public Customer {
    public:
        String^ Name;
        String^ LegalDepartment;
        String^ WebPage;
    };
}
