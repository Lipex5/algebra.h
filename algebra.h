#include <stdlib.h>
#include <stdio.h>

// ======================= Structs ======================
typedef struct{
    float x;
    float y;
}Vector2;

typedef struct{                         // Initialize the structures like: SqrMatrix2 name = {{{2, 3},
    float mat[2][2];                    //                                                    {4, 5}}};     
}SqrMatrix2;

typedef struct{
    float mat[3][3];
}SqrMatrix3;

typedef struct{
    float mat[4][4];
}SqrMatrix4;


// ======================= Functions ====================

void printMatrix2(SqrMatrix2 m){
    for(int i = 0; i < 2; i++){
        printf("|");
        for(int j = 0; j < 2; j++){
            printf("%.2f ", m.mat[i][j]);
        }
        printf("\b \b|\n");
    }
}

SqrMatrix2 sumMatrix2(SqrMatrix2 m1, SqrMatrix2 m2){          //Use like: res = sumMatrix2(&matrix1, &matrix2);
    SqrMatrix2 sum;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            sum.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
        }
    }

    return sum;
}