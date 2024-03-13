#include <iostream>
int main ()
{
    int size;
    //Promt user  for the size of the pattern
    std::cout <<" Enter the size of the pattern (number of rows):";
    std::cin >> size;
    //Loop to print the pattern
    for (int i=0; i < size; i++)
    {
        //Print spaces
        for (int j  = 0 ; j<size - i - 1; j++)
        {
            std::cout<<" ";
        }
        //print asterisks
        for (int j=0; j<=i; j++)
        {
            std:: cout << "*";
        }
        //print numbers
        for (int j = 1; j <= i+1; j++)
        {
            std::cout <<j;
        }
        //move to a new line
        std::cout << std::endl;
    }
    return 0;
}