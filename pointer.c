#include <stdio.h>

int array(int avr[5]);
int swap(int *a, int *b);



int main() {

    int app[5][3]; //점수
    int avr[5]; // 평균
    int i = 0; //사람
    int j = 0; // 과목별 점수
    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
        printf("%d 번째 학생의 %d 번째과목성적은?  ",i + 1,j + 1);
        scanf("%d", &app[i][j]);
        }
        avr[i] = (app[i][0] + app[i][1] + app[i][2]) / 3;
    }
    array(avr);

    printf("\n 내림차순 평균 점수 \n");
    for (i = 0; i < 5; i++) {
        printf("%d \n", avr[i]);
    }

    printf("\n 합격여부 \n");
    for(i = 0; i < 5; i++){
        if(avr[i] >= avr[2]){
            printf("%d점 합격\n",avr[i]);
        }
        if(avr[i] < avr[2]){
            printf("%d점 불합격\n",avr[i]);
        }
    }

    return 0;
}
int array(int avr[5]) {
    int i, j;
    for (i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            if (avr[j] < avr[j + 1]) {
                swap(&avr[j], &avr[j + 1]);
                
                // call by reference, call by value
                // 값을 포인터를 이용해 참조해서 넘겨주기 때문에 값이 바뀜.
                // 값을 복사해서 함수에 넘겨주기 때문에 값이 변하지 않음.
            }
        }
    }
}

int swap(int *a, int *b){
    int c;

    c = *a;
    *a = *b;
    *b = c;

 
}