#pragma once
/*
	La clase Carrier modela un transportista.
*/
using namespace System;

namespace SalesModel {
	[Serializable]
	public ref class Carrier
	{
	public:
		property int Id;
		property String^ Name;
		property double VolumeCapacity;
		property double WeightCapacity;
	};
}
