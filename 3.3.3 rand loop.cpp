/*
* Loop until a rnadom number that is
* greater than 20,000.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i;
	int r;

	r = rand();

	for (i = 0; r <= 20000; i++) //This conditional expression does not use the loop control variable
	{
		r = rand();
	}
	cout << "Number is " << r <<
		". It was generated on try " << i << ".";

	cout << "\n";
	system("pause");
	return 0;
}