#pragma once

#include "IService.h"

class IChargingService : IService
{
public:
	virtual void StartCharging() = 0;
	virtual void StopCharging() = 0;
	virtual void CheckCharging() = 0;

	// Inherited via IService
	virtual void Init() override = 0;

};