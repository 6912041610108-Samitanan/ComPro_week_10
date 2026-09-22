#include <stdio.h>

int main(void) {
    /* แถว = นักศึกษา, คอลัมน์ = คะแนนสอบ 3 ครั้ง */
    int scores[2] [3] = {
        {68, 85, 72},
        {95, 88, 91}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
             printf("%d ", scores[i][j]);
        }
    }
    return 0;
}