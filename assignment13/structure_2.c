#include <stdio.h>
#include <math.h>

struct POINT
{
    float Xco;
    float Yco;
};

int main()
{
    struct POINT pt1, pt2;
    float distance;
    printf("Enter the x co-ordinate and y co-odrinate of first point: ");
    scanf("%f%f", &pt1.Xco, &pt1.Yco);
    printf("Enter the x co-ordinate and y co-odrinate of second point: ");
    scanf("%f%f", &pt2.Xco, &pt2.Yco);
    distance = sqrt(pow((pt1.Xco - pt2.Xco), 2) + pow((pt1.Yco - pt2.Yco), 2));
    printf("The co-ordinates are: p1(%.3f, %.3f) and p2(%.3f, %.3f)\n", pt1.Xco, pt1.Yco, pt2.Xco, pt2.Yco);
    printf("The distance between the points is %.3f", distance);
    return 0;
}