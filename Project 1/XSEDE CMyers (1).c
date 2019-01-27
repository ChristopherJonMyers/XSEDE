//Chris Myers
//I did not copy my code except for the Code from the book.
//I did not show my code to anyone else.

#include <stdio.h>
#include "mpi.h"
#include "globals.h"

int main(argc, argv)
int argc;
char **argv;
{
    int myID, value, numProcs;
    MPI_Status status;
    
    MPI Init(&argc, Sargv);
    MPI Comm size(MPI COMM WORLD, SnumProcs);
    MPI Comm rank(MPI COMM_WORLD, SmylD);
    
    length per process=length/numProcs;
    
    printf ("Please enter number of digits: ");
    scanf ("%s", arraySize);
    
    int myArray[arraySize];
    
    for(x = 0; x < arraySize; x++)
    {
        myArray[i] = rand() % 4;
    }
    
    if(myID==RootProcess)
    {
       if((fp=fopen(*argv, "r"))==NULL )
       {
           printf("fopen failed on %s\n", filename);
           exit(0);
       }
        fscanf(fp,"%d", Slength);
        
        for(p=0; p<numProcs-l; p++)
        {
            for(i=0; idength per process; i++)
            {
                fscanf(fp,"%d", myArray+i);  
            }
            MPI Send(myArray, length per process, MPI INT, p+1, tag, MPI_COMM_WORLD);
        }
        
        for(i=0; i<length_per_process; i++)
        {
            fscanf(fp,"%d", myArray+i);
        }
    }
    else
    {
        MPI_Recv(myArray,length_per_process, MPI_INT, RootProcess, tag, MPI_COMM_WORLD, Sstatus);
    }
    
    for(i=0; i<length_per_process; i++)
    {
        if(myArray[i]==3)
        {
            myCount++;
        }
    }
    
    MPI_Reduce(SmyCount,SglobalCount, 1, MPI_INT, MPI_SUM, RootProcess, MPI_COMM_WORLD);
    
    if(myID==RootProcess)
    {
        printf("Number of 3's: %d\n", globalCount);
    }
    MPI_Finalize()
    return 0;
}
