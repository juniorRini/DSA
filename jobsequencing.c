#include <stdio.h>
void job_sequence(int profits[], int deadlines[], int n) 
{
    int sequence[n],i,j;

    for ( i = 0; i < n; i++) {
        sequence[i] = -1;
    }

    for (i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (profits[i] < profits[j]) {
                // Swap profit
                int temp = profits[i];
                profits[i] = profits[j];
                profits[j] = temp;
                
                // Swap deadlines
                temp = deadlines[i];
                deadlines[i] = deadlines[j];
                deadlines[j] = temp;
            }
        }
    }
    
    // highest profit
    for ( i = 0; i < n; i++) {
        for ( j = (deadlines[i] - 1); j >= 0; j--) {
            if (sequence[j] == -1) {
                sequence[j] = i;
                break;
            }
        }
    }
    
    //Display
    int total_profit = 0;
    printf("Job sequence: ");
    for ( i = 0; i < n; i++) {
        if (sequence[i] != -1) {
            printf("%d ", sequence[i] + 1);
            total_profit += profits[sequence[i]];
        }
    }
    printf("\nTotal profit: %d\n", total_profit);
}

int main() {
	printf("PCA EXAM DAA RINITA SEN ROLL NUMBER-49 \n");
	printf("------------------------------------\n");
    int profits[] = {200,180,190,300, 120, 100};
    int deadlines[] = {5, 3, 3, 2, 4, 2};
    int n = sizeof(profits) / sizeof(profits[0]);
    job_sequence(profits, deadlines, n);
    return 0;
}