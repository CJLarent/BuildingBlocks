// Lab 1 example 2 
#include<iostream>
#include<time.h>
using namespace std;
const int items = 800;
float array3D[items][items][items];

double ticks(clock_t clock, clock_t clock2)
{
	double timers = clock = clock2;
	double timerms = (timers * 10 / CLOCKS_PER_SEC);
	return timerms;
}
void Add_Rows()
{
	for (int i = 0; i < items; i++)
	{
		for (int second = 0; second < items; second++)
		{
			for (int last = 0; last < items; last++)
			{
				array3D[i][second][last] = 1;
			}
		}
	}
}
void Add_cols()
{
	for (int i = 0; i < items; i++)
	{
		for (int second = 0; second < items; second++)
		{
			for (int last = 0; last < items; last++)
			{
				array3D[last][second][i] = 1;
			}
		}
	}
}
int main()
{
	clock_t start = clock();
	Add_Rows();
	clock_t end = clock();

	cout << "Time passed (rows):" << ticks(end, start) << "ms" << endl;

	start = clock();
	Add_cols();
	end = clock();

	cout << "Time passed (cols):" << ticks(end, start) << "ms" << endl;

	return 0;
}