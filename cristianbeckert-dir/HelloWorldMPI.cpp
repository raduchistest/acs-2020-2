#include <iostream>
#include <stdio.h>
#include <mpi.h>

using namespace std;

int main(){
	MPI_Init(NULL, NULL);
	int world_size, world_rank;
	MPI_Comm_size(MPI_COMM_WORLD, &world_size);
	MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
	cout << "Hello world from processor " 
		<< world_rank << " out of " 
		<< world_size << " processors" << endl;
	MPI_Finalize();
}
