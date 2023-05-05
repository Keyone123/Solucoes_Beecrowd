#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

bool primo(int num){
	int i;
	for(i = 2; i < num; i++){
		if(num%i == 0)
			return false;
	}
	return true;
}

int main(int argc, char** argv){
	int num, i;
	cin >> num;
	int vetor[num];
	for(i = 0;i < num;i++){
		cin >> vetor[i];
		if(primo(vetor[i]))
			cout << vetor[i] << " eh primo" << endl;
		else
			cout << vetor[i] << " nao eh primo" << endl;
	}
	
	return 0;
}
