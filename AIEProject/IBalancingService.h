#pragma once

#include "IService.h"

class IBalancingService : IService
{
	virtual void StartBalancing() = 0;

	// Inherited via IService
	virtual void Init() override = 0;
};