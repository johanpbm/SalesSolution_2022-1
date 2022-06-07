/**
 * Project SalesSolution
 */
#include "CreditNoteConcept.h"
#include "Sale.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SalesModel {
    [Serializable]
    public ref class CreditNoteDetail {
    public:
        int Id;
        int Quantity;
        double Amount;
        SaleDetail^ Detail;
    };

    [Serializable]
    public ref class CreditNote {
        public:
            int Id;
            String^ Reference;
            String^ EmissionDate;
            CreditNoteConcept^ Concept;
            Sale^ Sale;
            double Total;
            char Status;
            List <CreditNoteDetail^> ^Details;
        };

}