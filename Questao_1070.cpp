#include <iostream>
 
using namespace std;
 
int main() {
 
    int num, cont = 0;
	cin >> num;
	if(num%2 == 0){
		num++;
		while(cont < 6){
			cout << num << endl;
			num+=2;
			cont++;
		}
	}else{
		while(cont < 6){
			cout << num << endl;
			num+=2;
			cont++;
		}
	}
 
    return 0;
}
