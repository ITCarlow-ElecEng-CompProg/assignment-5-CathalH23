/** Method of Least Squares of Linear Regression
 *  C00184521 
 *  Cathal Hogan
 *  11/10/2017
 */


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
        //Data type settings
        int n,i;
        double  arrayx[100]={0};
        double  arrayy[100]={0};
        double  sumx = 0;
        double  sumy = 0;
        double  sumxy = 0;
        double  sumx2 = 0;
        double  sum2x = 0;
        double  avgx = 0;
        double  avgy = 0;
        double  mtop = 0;
        double  mbot = 0;
        double  c =0;
        double  m = 0;

        //Tittle of Exercise
        cout << "Linear Regression\n\n"<<endl;

    do  //Prompting user to enter a value between 1 and 100
    {
        cout << "Enter a value for n (A value needs to be entered betweem 1-100):";
        cin>> n ;
    }
    //Only regonise numbers between 1-100
    while (n< 1 && n >100);


    for ( i=0 ; i < n ; i++)
    //Asking user to pick number for the coOrdinates
    {

        cout<< "Enter coOrdinates:";
        cin >> arrayx[i] >> arrayy[i];

    }

    //For Loop to carry out sums for the equation provide
    for ( i=0; i<n; i++)

    {
        sumx = sumx + arrayx[i];
        sumy = sumy + arrayy[i];
        sumxy = sumxy + (arrayx[i]*arrayy[i]);
        sumx2 = sumx2 + (arrayx[i]*arrayx[i]);
    }

        //Calculations for the equations
        mtop = (n*sumxy)- (sumx *sumy);
        mbot = (n * sumx2) - pow(sumx,2);
        m = mtop/mbot;
        avgx = sumx/n;
        avgy = sumy/n;
        sum2x = sumx * sumx;

        //Displays answer for the slope
        cout<< "The slope of the line is entered :"<< m << endl;

        //Calculates the Intercept point
        c = avgy -( m * avgx);

        //Displays the intercept answer
        cout << "The Intercept is: "<< c << endl;

        return 0;
}
