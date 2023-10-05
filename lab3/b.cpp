#include <iostream>
using namespace std;

void fill(int v, int p, int pp, float n);

int main()
{
	int v, p, pp;
	float n;

	cout << "Enter volume of the pool in liters: ";
	cin >> v;

	cout << "Enter flow rate of the first pipe per hour: ";
	cin >> p;

	cout << "Enter flow rate of the second pipe per hour: ";
	cin >> pp;

	cout << "Enter hours that the worker is absent: ";
	cin >> n;

	fill(v, p, pp, n);

	return 0;
}

void fill(int v, int p, int pp, float n)
{
	if(v <= 10000 && p <= 5000 && pp <= 5000 && n <= 24.00)
	{
		float totalFlow = (p + pp) * n;
		float overflow = totalFlow - v;

		if(totalFlow < v)
		{
			int percentFilled = (totalFlow / v) * 100;
			int percentP = (p / (float)(p + pp)) * 100;
			int percentPP = (pp / (float)(p + pp)) * 100;

			cout << "The pool is " << percentFilled << "% full. Pipe 1: " << percentP << "%. Pipe 2: " << percentPP << "%.\n";
		}
		else
		{
			cout << "For " << n << " hours, the pool overflows with " << overflow << " liters.\n";
		}
	}
	
}
