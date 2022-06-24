#include "bar.h"

int Bar::barFun(int value)
{
	return foo.fooFun(value) + barValue_;
}
