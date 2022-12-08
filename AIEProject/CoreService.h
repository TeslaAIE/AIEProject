#pragma once
#include <iterator>
#include <stl_list.h> //incluse list object from STL library

static class CoreService
{
	private:
		//void StartLoop();
		bool _isRunning;

		
	public:
		CoreService();
		void Start(int cellNumber);
		void Init(int cellNumber, int chargePins[], int voltagePins[], int balancePins[]);
		void StartLoop();
		void UpdateVoltage();
		void StartCharging();
		void StopCharging();
		void CheckCharging();
		void Balance(int balancePins[]);

		std::list<Cell> _cells;
		std::list<Cell>::iterator _iterator;
};