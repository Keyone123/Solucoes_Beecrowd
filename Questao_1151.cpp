#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){
	long long int vetor[46];
	int num, i;
	vetor[0] = 0;
	vetor[1] = 1;
	for(i = 2; i < 46; i++){
		vetor[i] = vetor[i-1] + vetor[i-2];
	}
	cin >> num;
	for(i = 0;i < num;i++){
		if(i == num-1)
			cout << vetor[i] << endl;
		else 
			cout << vetor[i] << " ";
	}
	
	return 0;
}
