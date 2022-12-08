#pragma once

class MOSFETController
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