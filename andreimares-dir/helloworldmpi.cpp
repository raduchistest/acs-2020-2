#include <iostream>
#include <mpi.h>
using namespace std;

int main(){
	MPI_Init(NULL, NULL);
	cout << "Hello world!\n";
	MPI_Finalize();
}
