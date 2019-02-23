//
//  main.c
//  QKP_ QueensKnightsandPawns
//
//  Created by Chel Long on 1/20/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1000
#define MAX_COUNT 100

int main(int argc, const char * argv[]) {
#ifndef ONLINE_JUDGE
    freopen("/Users/chellong/Workspace/CProgramming/SPOJ/QKP_ QueensKnightsandPawns/input.txt", "r", stdin);
#endif
    int rows, cols, queens, knights, pawns;
    int qpos[MAX_COUNT][2];
    int kpos[MAX_COUNT][2];
    int ppos[MAX_COUNT][2];
    char board[MAX_SIZE+1][MAX_SIZE+1];
    int q, k;
    //khởi tạo các ô bàn cờ về 0
    memset(board, 0, (int)(MAX_SIZE+1)*(MAX_SIZE+1));
    // đọc từng testcase và giải quyết nó cho đến khi hết testcase
    while (1) {
        //đọc test case
        scanf("%d%d", &rows, &cols);
        
        if(rows == 0) break;
        //đọc các quân hậu
        scanf("%d", &queens);
        for (int i=0; i<queens; i++) {
            scanf("%d%d", &qpos[i][0], &qpos[i][1]);
            board[qpos[i][0]][qpos[i][1]] = 1;
        }
        //đọc các quân mã
        scanf("%d", &knights);
        for (int i=0; i<knights; i++) {
            scanf("%d%d", &kpos[i][0], &kpos[i][1]);
            board[qpos[i][0]][kpos[i][1]] = 1;
        }
        //đọc các quân tốt
        scanf("%d", &pawns);
        for (int i=0; i<pawns; i++) {
            scanf("%d%d", &ppos[i][0], &ppos[i][1]);
            board[ppos[i][0]][ppos[i][1]] = 1;
        }
        
        //giải quyết test case
        //1. đánh dấu các ô bị ăn (và các ô có sẵn quân)
        //1.1. xét từng quân hậu bị đánh dấu
        for (q=0; q<queens; q++) {
            //đánh dấu các ô bị ăn bởi con hậu thứ q
            
        }
        //1.2. Xét từng quân mã và đánh dấu
        
        //2. đếm số ô chưa đánh dấu => là kết quả
        //
    }
    
    
    return 0;
}
