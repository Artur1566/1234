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
	for (int i = 0; i < (size * col); i++){
	    cout << ar[i];
	    if ((i + 1) % size == 0){
            cout << endl;
	    }
	    else {
	        cout << del;
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
