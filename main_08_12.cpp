#include <iostream>

void maxPermutations(int ar[], int size) {
    int permutations[size];
    for (int i = 0; i < size; i++){
        permutations[i] = 0;
    }

    int maximum = 0;
    for (int i = 0; i < size; i++) {
        if (ar[i] > ar[maximum]) {
            maximum = i;
        }
    }

    if (maximum > 0){
    permutations[maximum]= permutations[maximum] + 1;
    permutations[0] = permutations[0] + 1;
    }
    std::swap(ar[maximum], ar[0]);

    for (int i = 1; i < size; i++){
        maximum = i;
        for (int j = i; j < size; j++){
            if (ar[j] > ar[maximum]){
                maximum = j;
            }
        }
        if ((maximum - i) > 0){
            permutations[maximum] = permutations[maximum] + 1;
            permutations[i] = permutations[i] + 1;
        }
        std::swap(ar[maximum], ar[i]);
    }

    for (int q = 0; q < size; q++){
        std::cout << permutations[q] << " ";
    }
}

void selection_sort(int* ar,int size,bool increment = true){
    int maximum = 0;
    for (int i = 0; i < size; i++) {
        if (ar[i] > ar[maximum]) {
            maximum = i;
        }
    }

    std::swap(ar[maximum], ar[0]);

    for (int i = 1; i < size; i++){
        maximum = i;
        for (int j = i; j < size; j++){
            if (ar[j] > ar[maximum]){
                maximum = j;
            }
        }
        std::swap(ar[maximum], ar[i]);
    }

    if (not increment){
    for (int q = 0; q < size; q++){
    std::cout << ar[q] << std::endl;
    }
    }
    else {for (int q = size - 1; q > 0; q--){
    std::cout << ar[q] << std::endl;
    }
    }
}

int main(){
	int size = 10;
	int ar[10] = {10, 7, 6, 4, 11, 56, 78, 97, 32, 8};
    selection_sort(ar, size, true);
    maxPermutations(ar, size);
	return 0;
}