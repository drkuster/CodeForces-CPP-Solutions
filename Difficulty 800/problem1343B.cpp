#include <iostream>

using namespace std;

bool identifySolution(int array[], int size)
{
    int firstHalfSum = 0;
    int secondHalfSum = 0;
    int evenIncrement = 2;
    int oddIncrement = 1;

    for (int i = 0; i < size / 2; i++) // first half
    {
        array[i] = evenIncrement;
        evenIncrement += 2;
        firstHalfSum += array[i];
    }

    for (int i = size / 2; i < size; i++)
    {
        if (i < size - 1)
        {
            array[i] = oddIncrement;
            oddIncrement += 2;
            secondHalfSum += array[i];
        }

        else
        {
            int numNeeded = firstHalfSum - secondHalfSum;
            
            if ((numNeeded % 2 == 1) && (numNeeded > array[i - 1]))
            {
                array[i] = numNeeded;
                return true;
            }

            else
            {
                return false;
            }
        }
    }

    return true;

}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++) { cout << array[i] << " "; }
    cout << endl;
}

int main()
{

    int numCases = 0;
    cin >> numCases;

    for (int i = 0; i < numCases; i++)
    {
        int arraySize = 0;
        cin >> arraySize;
        int* newArray = new int[arraySize];
        if (identifySolution(newArray, arraySize))
        {
            cout << "YES" << endl;
            printArray(newArray, arraySize);
        }

        else
        {
            cout << "NO" << endl;
        }

    }

}