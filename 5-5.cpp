/* Write a program that prompts the user to enter two integers. 
The program outputs how many numbers are multiples of 3 and how many numbers are multiples of 5 
between the two integers (inclusive). */
#include <iostream> 

using namespace std;



int main()
{
        //variables
    int int_1;
    int int_2;
    int mult_3_counter = 0;
    int mult_5_counter = 0;

        //prompts the user to enter two integers
    cout << "Enter two integers from least to greatest: ";
    cin >> int_1 >> int_2;

        //calculates how many numbers are multiples of 3 and 5 within the range of the two integers
    for (int i = int_1; i <= int_2; i++) 
    {
        if (i % 3 == 0)
        {
            mult_3_counter++;
        }
        if (i % 5 == 0)
        {
            mult_5_counter++;
        }
    }

        //outputs how many numbers are multiples of 3 and 5 within the range of the two integers
    cout << "There are " << mult_3_counter << " Multiples of 3" << endl;
    cout << "There are " << mult_5_counter << " Multiples of 5" << endl;

    return 0;
}