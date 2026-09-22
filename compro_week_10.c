#include <stdio.h>
#include <string.h>

int main() {
    char student[3][20] = {"Samitanan", "Soraya", "Lalida"};
    float score[3][3] = {
        {56.88, 48.01, 82.33},
        {67.33, 85.36, 79.29},
        {49.64, 28.24, 74.22}
    };

    float sum_Math = 0.0, sum_Phy = 0.0, sum_Chem = 0.0;
    for (int i = 0; i < 3; i++) {
        sum_Math += score[i][0];
        sum_Phy  += score[i][1];
        sum_Chem += score[i][2];
    }

    printf("==================================================\n");
    printf("%-20s %-10s %-10s %-10s\n", "Student (length)", "Math", "Phy", "Chem");
    printf("==================================================\n");

    for (int i = 0; i < 3; i++) {
        int len = strlen(student[i]);
        char name_with_len[30];
        sprintf(name_with_len, "%s (%d)", student[i], len);
        printf("%-20s %-10.2f %-10.2f %-10.2f\n",
               name_with_len, score[i][0], score[i][1], score[i][2]);
        
    }

    printf("==================================================\n");
    printf("%-20s %-10.2f %-10.2f %-10.2f\n",
           "Subject average", sum_Math / 3.0, sum_Phy / 3.0, sum_Chem / 3.0);

    printf("==================================================\n");

    return 0;
    
    }