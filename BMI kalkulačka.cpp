#include <iostream>;
using namespace std;

int main()
{
	double vaha;
	double vyska;
	double BMI;
	char ano;

	do {
		cout << "++++++++++++++++++++++++++++++" << endl;
		cout << "Body Mass index" << endl;
		cout << "++++++++++++++++++++++++++++++" << endl;


		cout << "Zadajte vysku(m) :";
		cin >> vyska;

		cout << "Zadajte hmotnost(kg):";
		cin >> vaha;

		BMI = vaha / (vyska * 2);

		cout << "BMI:" << BMI << endl;


		if (BMI < 16)
			cout << "Kriticky chudy!" << endl;

		else if (BMI > 16, BMI < 17)
			cout << "Priemerne chudy!" << endl;

		else if (BMI > 17, BMI < 18.5)
			cout << "Mierne chudy!" << endl;

		else if (BMI > 18.5, BMI < 25)
			cout << "Normalny!" << endl;

		else if (BMI > 25, BMI < 30)
			cout << "Nadváda!" << endl;

		else if (BMI > 30, BMI < 35)
			cout << "Obezita I stupna!" << endl;

		else if (BMI > 35, BMI < 40)
			cout << "Obezita II stupna!" << endl;

		else if (BMI > 40)
			cout << "Obezita III stupna!" << endl;

		cout << "Chcete pokracovat? Ak ano stlacte 1 ak nie 2" << endl;
		cin >> ano;
	} while (ano == '1');

	return 0;
}