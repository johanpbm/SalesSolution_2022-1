/**
 * La clase Customer modela a un cliente a quien se realiza la venta.
 * Customer hereda de User, eso significa que todo cliente es un tipo de usuario del sistema.
 */

#include "User.h"

using namespace System;

namespace SalesModel {
    [Serializable]
	public ref class Customer : public User {
        public:
            property int CustomerPoints;
	};
}