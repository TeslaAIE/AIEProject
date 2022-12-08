#pragma once

class ICurrentSensor
{
public:
	/// <summary>
	/// Measures Current on given PIN
	/// </summary>
	virtual void Measure();
};