#include <iostream>
#include <ctime>

using namespace std;

int main() {
    clock_t begin;
    cout << "Comenzando a medir Tiempo\n" << endl;

    begin = clock();
	
	int a[1024];
	for(int i = 0; i < 1024; i++) {
		a[i] = i;
	}

    clock_t end = clock();

    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

    cout << "Tardo elapsed_secs: " << elapsed_secs << "\n" << std::endl;
    return 0;
}
