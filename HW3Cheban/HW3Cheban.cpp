#include <iostream>
#include <random>
using namespace std;


int main()
{
    //1
    /*int arr[5], num;
    for (int i = 0; i < 5; i++)
    {
        cout << "Input number for index" << " " << i << ": ";
        cin >> num;
        arr[i] = num;
    }
    cout << "Your array reversed: ";
    for (int j = 4; j >=0; j--)
    {
        cout << arr[j] << " ";
    }
    cout << endl;*/

    //2
    /*int arr[20];
    srand(time(0));
    for (int i = 0; i < 20; i++)
    {
        arr[i] = rand();
    }
    cout << "All elements: " << endl;
    for (int j = 0; j < 20; j++)
    {
        cout << arr[j] <<" ";
    }
    cout << endl << "Elements with an even index: " << endl;
    for (int k = 0; k < 20; k+=2)
    {
        cout << arr[k] <<" ";
    }
    cout << endl;*/

    //3
    /*int arr[10];
    float posNum = 0, posSum = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = -20 + rand() % (20 - (-20) + 1);

    }
    cout << "All elements: ";
    for (int j = 0; j < 10; j++)
    {
        cout << arr[j] << " ";
    }
    for (int k = 0; k < 10; k++)
    {
        if (arr[k] > 0)
        {
            posNum++;
            posSum += arr[k];
        }
    }
    cout << endl << "Average of the positive = " << posSum / posNum << endl;*/

    //4
    /*int arr[10];
    float posNum = 0, negNum = 0, zero = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = -5 + rand() % (5 - (-5) + 1);

    }
    cout << "All elements: ";
    for (int j = 0; j < 10; j++)
    {
        cout << arr[j] << " ";
    }
    for (int k = 0; k < 10; k++)
    {
        if (arr[k] > 0)
        {
            posNum++;
        }
        else if (arr[k] < 0)
        {
            negNum++;
        }
        else {
            zero++;
        }
    }
    cout << endl << "There are " << posNum << " positive number(s). " << endl;
    cout << "There are " << negNum << " negative number(s). " << endl;
    cout << "There are " << zero << " zero(s). " << endl;*/

    //5
    /*int arr[10];
    float evenSum = 0, oddSum = 0, oddNum = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand();
    }
    cout << "All elements: ";
    for (int j = 0; j < 10; j++)
    {
        cout << arr[j] << " ";
    }
    for (int k = 0; k < 10; k++)
    {
        if (arr[k] % 2 == 0)
        {
            evenSum += arr[k];
        }
        else {
            oddSum += arr[k];
            oddNum++;
        }
    }
    cout << endl << "Sum of even numbers = " << evenSum << endl;
    cout << "Average of odd numbers = " << oddSum / oddNum << endl;*/
}
