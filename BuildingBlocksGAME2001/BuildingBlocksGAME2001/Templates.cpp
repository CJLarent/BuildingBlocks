// Lab1 Example Templeplates 
#include<iostream>
#include"Templates.h"
using namespace std;
template <class T>
T Min(T lval, T rval)
{
	if (lval > rval)
		return rval;

	return lval;
}

template <class T>
T Max(T lval, T rval)
{
	if (lval < rval)
		return rval;

	return lval;
}
int main()
{
	cout << "Min is "<<min(4.44, 4.32)<< endl;
	cout << "Max is " << max('w', 's') << endl;

	// Template Obects
	// Another funcion needed to print to the srceen Getval(returns the compairsoin) 
	cout << "Max value of the objects  " << Max(TempalteClass<char>('z'),
		TempalteClass<char>('u')).Getval() << endl;
	
	cout << "Min value of the objects  " << Min(TempalteClass<int>(100),
		TempalteClass<int>(360)).Getval() << endl;

	return 0;
}