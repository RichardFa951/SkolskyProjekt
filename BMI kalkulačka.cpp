#include <iostream>;
using namespace std;

int main()
{
	double vaha;
	double vyska;
	double BMI;

	cout << "Zadajte vysku(m) :";
	cin >> vyska;

	cout << "Zadajte hmotnost(kg):";
	cin >> vaha;

	cout << "BMI:";
	cin >> BMI;
	BMI = (vaha*703) / (vyska * vyska);
	;;
	return 0;
}
