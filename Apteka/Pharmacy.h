#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Apteka {
private:
    string aptekaName;
    string drugName;
    vector<double> drugCosts;

public:
    Apteka(string aptekaName, string drugName, vector<double> drugCosts) {
        this->aptekaName = aptekaName;
        this->drugName = drugName;
        this->drugCosts = drugCosts;
    }

    void printInfo() {
        cout << "Аптека: " << aptekaName << endl;
        cout << "Название лекарства: " << drugName << endl;
        cout << "Стоимость каждого лекарства по граммовке: ";
        for (double cost : drugCosts) {
            cout << cost << " ";
        }
        cout << endl;
    }

    double getMostExpensiveDrugCost() {
        double maxCost = drugCosts[0];
        for (double cost : drugCosts) {
            if (cost > maxCost) {
                maxCost = cost;
            }
        }
        return maxCost;
    }

    double getTotalCostOfDrugs() {
        double totalCost = 0;
        for (double cost : drugCosts) {
            totalCost += cost;
        }
        return totalCost;
    }
};


