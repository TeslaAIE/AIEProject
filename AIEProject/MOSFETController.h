#pragma once

#include "IMOSFETController.h"

class MOSFETController : IMOSFETController
{
	private:
		int _pin;
		bool _isDepletionMode = false;
		//MOSFETController();

	public:
		void InitOutPut(int pin, bool isDepletionMode);
		void Open();
		void Close();
};