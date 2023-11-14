#include <iostream>
#include <string>
#include <vector>
#include "Pharmacy.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    Apteka apteka1("Аптека1", "Парацетамол", { 150, 240, 470 });
    Apteka apteka2("Аптека2", "Анальгин", { 170, 130, 380 });

    apteka1.printInfo();
    cout << "Стоимость самого дорогого лекарства в аптеке 1: " << apteka1.getMostExpensiveDrugCost() << endl;
    cout << "Общая стоимость лекарств в аптеке 1: " << apteka1.getTotalCostOfDrugs() << endl;

    apteka2.printInfo();
    cout << "Стоимость самого дорогого лекарства в аптеке 2: " << apteka2.getMostExpensiveDrugCost() << endl;
    cout << "Общая стоимость лекарств в аптеке 2: " << apteka2.getTotalCostOfDrugs() << endl;

	return 0;
}



