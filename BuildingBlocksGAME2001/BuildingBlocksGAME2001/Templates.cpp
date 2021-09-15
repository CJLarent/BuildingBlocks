#include<iostream>
#include"Templates.h"
using namespace std;
template <class T>
T Min(T lval, T rval)
{
	if (lval > rval)
		return rval;
}
int main()
{
	return 0;
}