#include <stdio.h>
#include <math.h>

void CI(int *, int *, int *, float *, float *);

int main()
{
    int p, n, t;
    float r, a, i;
    printf("Enter the principle, no. of times compounded, time(in years) and rate%% respectively: ");
    scanf("%d%d%d%f", &p, &n, &t, &r);
    CI(&p, &n, &t, &r, &a);
    i = a - p;
    printf("Interest: %f\n", i);
    printf("Amount: %f", a);

    return 0;
}

void CI(int *prin, int *n, int *time, float *rate, float *amount){
    *amount = (*prin) * pow(1 + (*rate)/100/(*n), (*n)*(*time));

}
