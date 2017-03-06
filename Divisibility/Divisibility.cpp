#include <iostream>
using namespace std;
 
int main() {
	int T;
	cin >> T;
	while(T--){
		int n, x, y;
		cin >> n >> x >> y;
		for(int i = x; i<=n; i+=x){
			if(i%y == 0){
				continue;
			}
			else{
				cout<< i << " ";
			}
		}
		cout<< endl;
	}
	return 0;
} 