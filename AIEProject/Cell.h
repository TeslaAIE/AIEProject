#pragma once
#include <MOSFETController.h>
#include <VoltageSensor.h>

class Cell 
{
	public:
		byte ID;
		float Voltage;
		int SOH;
		int _voltagePin;
		void UpdateVoltage();
		void Init(int chargePin, int voltagePin, int balancePin);
		VoltageSensor _voltageSensor;
		MOSFETController ChargeMOSFET;
		MOSFETController BalanceMOSFET;

};