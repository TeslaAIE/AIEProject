#pragma once
#include <MOSFETController.h>
#include <IVoltageSensor.h>
#include <ICurrentSensor.h>
#include <ITemperatureSensor.h>

class Cell 
{
	private:
		int _voltagePin;
		IVoltageSensor _voltageSensor;
		ITemperatureSensor _temperatureSensor;
		ICurrentSensor _currentSensor;
		static int _cellNumber;
	public:
		Cell(IVoltageSensor voltageSensor, ICurrentSensor currentSensor, ITemperatureSensor temperatureSensor);
		byte ID;
		float Voltage;
		int SOH;
		float Temperature;
		void UpdateVoltage();
		void Init(int chargePin, int voltagePin, int balancePin);
		MOSFETController ChargeMOSFET;
		MOSFETController BalanceMOSFET;
		MOSFETController TemperatureController;
};