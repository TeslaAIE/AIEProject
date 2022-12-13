#pragma once

class IMOSFETController
{
	virtual void InitOutPut(int pin, bool isDepletionMode) = 0;
	virtual void Open() = 0;
	virtual void Close() = 0;
};