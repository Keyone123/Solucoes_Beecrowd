#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){
	int primeiro, segundo, i, soma=0;
	cin >> primeiro;
	cin >> segundo;
	
	if(primeiro > segundo){
		int aux = primeiro;
		primeiro = segundo;
		segundo = aux;
	}
	
	for(i = primeiro + 1;i < segundo;i++){
		if(i%2 != 0)
			soma+=i;
	}
	cout << soma << endl;
	return 0;
}
