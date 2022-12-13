#pragma once

class IVoltageSensor : public ISensor
{
	public:
		void Init(int pin);

		/// <summary>
		/// Measures voltage on the given PIN
		/// </summary>
		//void Mesaure();
};