#include "MOSFETController.h"

//MOSFETController::MOSFETController()
//{
//
//}

void MOSFETController::InitOutPut(int pin, bool isDepletionMode = false)
{
	pinMode(pin, OUTPUT);
	_isDepletionMode = isDepletionMode;
	_pin = pin;
	if (!_isDepletionMode)
	{
		digitalWrite(_pin, LOW);
	}
	else
	{
		digitalWrite(_pin, HIGH);
	}
}

void MOSFETController::Open()
{
	if (!_isDepletionMode)
	{
		digitalWrite(_pin, HIGH);
	}
	else
	{
		digitalWrite(_pin, LOW);
	}
}

void MOSFETController::Close()
{
	if (!_isDepletionMode)
	{
		digitalWrite(_pin, LOW);
	}
	else
	{
		digitalWrite(_pin, HIGH);
	}
}