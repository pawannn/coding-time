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
    if(src > size - 1 || des > size -1){
        printf("invalid source/destination");
    }
    adjMatrix[src][des] = 1;
}

void printData(int adjMatrix[][size]){
    for(int i = 0; i < size; i++){
        for(int j = 0; j< size; j++){
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }
}

void deleteEdge(int adjMatrix[][size], int src, int des){
    adjMatrix[src][des] = 0;
}

int isConnected(int adjMatrix[][size], int src, int des){
    if(adjMatrix[src][des] == 1){
        return 1;
    }
    else{
        return 0;
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
    
    printf("\nAdjacency matrix after insertion : \n");
    printData(adjMatrix);
    
    deleteEdge(adjMatrix, 0, 1);
    deleteEdge(adjMatrix,0,2);
    printf("\nAdjacency matrix after deletion : \n");
    printData(adjMatrix);
    
    //check is node 0 and 1 are connected or not.
    int src = 1;
    int des = 3;
    int res = isConnected(adjMatrix, src, des);
    if(res == 1){
        printf("\nnode %d and %d are connect.", src, des);
    }
    else{
        printf("\nnode %d and %d are not connect.", src, des);
    }
}