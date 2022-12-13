#pragma once

#include <ISensor.h>

class IVoltageSensor : public ISensor
{
	public:
		void Init(const int pin);

		/// <summary>
		/// Measures voltage on the given PIN
		/// </summary>
		//virtual void Mesaure() = 0;
};