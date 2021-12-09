#include <iostream>
using namespace std;

int main(){
	int sets, height, times;
	cin >> sets;
	for(int t0=0; t0<sets; t0++){
		cin >> height >> times;
		for(int t1=0; t1<times; t1++){
			for(int t2=1; t2<=height; t2++){
				for(int t3=0; t3<t2; t3++){
					cout << t2;
				}
				cout << "\n";
			}
			for(int t2=height-1; t2>=1; t2--){
				for(int t3=0; t3<t2; t3++){
					cout << t2;
				}
				cout << "\n";
			}
			cout << "\n";
		}
	}
}