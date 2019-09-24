/* pi.c
   CSC 111 - Fall 2019 - Assignment 2

   B. Bird - 08/13/2019
   (Put your name/StudentID/date here when you implement your solution)

   Sydney Derksen/V00910431/09/18/2019

   This program was designed to approximate the value of pi using the specified formula,
   and can be adjusted to estimate for any value of n
*/

#include <stdio.h>

int main(){
    /* INPUT DATA */
    /* You may modify the values of each variable below, but DO NOT
       rename the variables, change their type or move the declarations. */

    int n = 30; //Number of terms in summation

    /* END OF INPUT DATA */
    /* Implement your solution below this line */


    //to show condition for main for loop
    int i;

    //values of completed bases to powers
    double third_power_value;
    double second_power_value;
    double first_power_value;



    //to show condition for individual loops
    int j;
    //values of bases for power functions
    double a = 1.0;
    double b = 3.0;
    double k = a/b;
    double c = 2.0;
    double l = a/c;
    double m = (-1.0);

    double pi_estimate;
    double running_pi_estimate = 0.0;

    double numerator = 4.0;


    //main for loop to calculate total sum and estimate pi
    for(i = 1; i <= n; i = i + 1){

        //to represent individual powers
        int third_power = (2*i) - 1;
        int second_power = (2*i) - 1;
        int first_power = i + 1;

        double denominator = (2*i) - 1;

        //to start a going sum for each power for loop
        double sum_third = 1.0;
        double sum_second = 1.0;
        double sum_first = 1.0;

        //individual loop for third power
        for(j = 1; j <= third_power; j = j + 1){

            third_power_value = k*sum_third;

            sum_third = third_power_value;
        //printf("check = %.15f\n", sum_third);

        }

        //individual loop for second power
        for(j = 1; j <= second_power; j = j + 1){

            second_power_value = l*sum_second;

            sum_second = second_power_value;


        }

        //individual loop for first power
        for(j = 1; j <= first_power; j = j + 1){

            first_power_value = m*sum_first;

            sum_first = first_power_value;

        }

        pi_estimate = (numerator*sum_first/denominator)*(sum_second + sum_third);

        running_pi_estimate = running_pi_estimate + pi_estimate;



    }


    printf("With %d terms: pi = %.15f\n", n, running_pi_estimate);


    return 0;
}

