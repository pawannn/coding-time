#include<stdio.h>
#define size 5

void init(int adjMatrix[][size]){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            adjMatrix[i][j] = 0;
        }
    }
}

void addEdge(int adjMatrix[][size], int src, int des){
    adjMatrix[src][des] = 1;
    adjMatrix[des][src] = 1;
}

void printMatrix(int adjMatrix[][size]){
    for(int i =0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int adjMatrix[size][size];
    init(adjMatrix);
    
    addEdge(adjMatrix,0,1);
    addEdge(adjMatrix,0,2);
    addEdge(adjMatrix,0,3);
    addEdge(adjMatrix,1,3);
    addEdge(adjMatrix,1,4);
    addEdge(adjMatrix,2,3);
    addEdge(adjMatrix,3,4);
    
    printMatrix(adjMatrix);
    
    return 0;
}