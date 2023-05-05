#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){
	int cod, i, quant, quant2;
	float total, soma;
	
	cin >> quant2;
	for(i = 0;i < quant2;i++){
		cin >> cod;
		if(cod == 1001){
			cin >> quant;
			soma = 1.5 * quant;
		}else if(cod == 1002){
			cin >> quant;
			soma = 2.5 * quant;
		}else if(cod == 1003){
			cin >> quant;
			soma = 3.5 * quant;
		}else if(cod == 1004){
			cin >> quant;
			soma = 4.5 * quant;
		}else if(cod == 1005){
			cin >> quant;
			soma = 5.5 * quant;
		}
		total += soma;
	}
	cout << fixed << setprecision(2) << total << endl;
	
	return 0;
}
