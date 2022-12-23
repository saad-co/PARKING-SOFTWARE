#include <stdio.h>
#include <math.h>

int main() {
    char m;
    int x, entrng_hr, min_entr, hr_left, min_left, final_min, temp;
    float timehr_into_min, timemin, timehr;
    float parking_time, cost;
    printf("type of Vehicle(C,T,B)?");
    scanf_s("%c", &m);
    printf("hours vehicle entered the lot(0-24)?\t");
    scanf_s("%d", &entrng_hr);
    printf("minutes vehicle entered the lot(0-60)?\t");
    scanf_s("%d", &min_entr);
    printf("hours vehicle left the lot(0-24)?\t");
    scanf_s("%d", &hr_left);
    printf("minutes vehicle entered the lot(0-60)?\t");
    scanf_s("%d", &min_left);
    if (hr_left < entrng_hr)
    {
        hr_left = 23;
        min_left = 59;
        printf("Your car is towed.\n");
    }
    switch (m)
    {
    case 'C':
    case 'c':
        printf("Type of vehicle:\tCAR\n");
        printf("TIME-IN:\t  %d:%d", entrng_hr, min_entr);
        printf("\nTIME-OUT\t  %d:%d", hr_left, min_left);

        timehr = hr_left - entrng_hr;
        timemin = min_left - min_entr;
        timehr_into_min = timehr * 60;

        parking_time = (timemin + timehr_into_min) / 60;
         temp = (timemin + timehr_into_min) / 60;

        final_min = round((parking_time - temp) * 60);

        printf("\nparking time:\t%d:%d\n", temp, final_min);

        int x = parking_time;
        if (x < parking_time)
        {
            x += 1;
        }
        if (x > 3)
        {
            cost = x * 1.50;
            printf("\nrounded total\t:$%.2f", cost);
        }
        else
        {
            printf("\nthere is no parking fare for first 3 hours");
        }

        break;
    case 'B':
    case 'b':
        printf("Type of vehicle:\tBUS\n");
        printf("TIME-IN:\t  %d:%d", entrng_hr, min_entr);
        printf("\nTIME-OUT\t  %d:%d", hr_left, min_left);
        timehr = hr_left - entrng_hr;
        timemin = min_left - min_entr;
        timehr_into_min = timehr * 60;

        parking_time = (timemin + timehr_into_min) / 60;
         temp = (timemin + timehr_into_min) / 60;

        final_min = round((parking_time - temp) * 60);

        printf("\nparking time:\t%d:%d\n", temp, final_min);

        x = parking_time;
        if (x < parking_time)
        {
            x += 1;

            if (x <= 2)
            {
                cost = x * 1.0;
                printf("\nrounded total:\t$%.3f", cost);
            }
            else
            {
                cost = x * 2.30;
                printf("\nrounded total:\t$%.4f", cost);
            }
        }

        break;
    case 'T':
    case 't':
        printf("Type of vehicle:\tTRUCK\n");
        printf("TIME-IN:\t  %d:%d", entrng_hr, min_entr);
        printf("\nTIME-OUT\t  %d:%d", hr_left, min_left);
        timehr = hr_left - entrng_hr;
        timemin = min_left - min_entr;
        timehr_into_min = timehr * 60;
        parking_time = (timemin + timehr_into_min) / 60;
         temp = (timemin + timehr_into_min) / 60;

        final_min = round((parking_time - temp) * 60);

        printf("\nparking time:\t%d:%d\n", temp, final_min);

        x = parking_time;
        if (x < parking_time)
        {
            x += 1;
        }

        if (x <= 1)
        {
            cost = x * 2.0;
            printf("\nrounded total:\t$%.2f", cost);
        }
        else
        {
            cost = x * 3.70;
            printf("\nrounded total:\t$%.2f", cost);
        }

        break;
    default:
        printf("you entered invalid character");
        break;
    }
    return 0;
}