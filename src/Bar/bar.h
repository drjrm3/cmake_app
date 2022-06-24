#pragma once

#include <Foo/foo.h>

class Bar
{
	public:
		Bar() {};

		int barFun(int);
	
	private:
		int barValue_ = 4;
		Foo foo; // foo object 
};
