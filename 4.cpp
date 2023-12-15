#include <iostream>

using namespace std;

void showEl_line(const int* ar, int size, char del = ' '){
	for (int i = 0; i < size; i++) {
		cout << ar[i];
		if (i != size - 1){
			cout << del;
		}
	} 
}

void showEl_matrix(const int* ar, int size, int col, char del = ' ') {
	int j = 0;
	for (int i = 0; i < size; i++){
		for (int q = j; q < j; q++){
		    j++;
			cout << ar[q] << del;
		}
	}
}

int main (){
	int l;
	cin >> l;
	int ar[l];

	for (int i = 0; i < l; i++) {
		cin >> ar[i];
	}

	char del;
	cin >> del;

	showEl_line(ar, l, del);
    
    cout << endl;
    
	int m,n;
	cin >> m >> n;

	showEl_matrix(ar, m, n, del);
}