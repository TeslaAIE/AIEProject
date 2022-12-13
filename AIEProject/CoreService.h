#pragma once
#include <iterator>
#include <stl_list.h> //incluse list object from STL library

static class CoreService
{
	private:
		//void StartLoop();
		bool _isRunning;
		std::list<Cell> _cells;
		std::list<Cell>::iterator _iterator;

		
	public:
		CoreService();
		void Start(int cellNumber);
		void Init(int cellNumber, int chargePins[], int voltagePins[], int balancePins[]);
		void StartLoop();
		void UpdateVoltage();
};