#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Kabanova.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream fout;
	ifstream fin;
	Student Sofia = { 1, "Кабанова", "София", "Яшаровна", 'ж', 17, 1.61 };
	Sofia.f = "Кабанчикова";
	//cout << Sofia.f << " " << Sofia.i << " " << Sofia.o << endl;
	cout_(Sofia);
	fout_(Sofia);
}