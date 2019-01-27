//Chris Myers
//I did not copy my code except for the Code from the book.
//I did not show my code to anyone else.

#define RootProcess 0
int length;
int length_per_process;
int myStart;
int myCount=0;
int globalCount;
MPI_Status status;
int tag=l;
int i;
int p;
int x;
FILE * fp;
char filename[] = RandomNums.txt;
int exit(int num);