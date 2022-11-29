#include <iostream>
#include <vector>
#include "BigThree.h"

BigThree BigThree::SimpleMultiply(BigThree& b)
{
    //multiply each digit in b.s with each digit in s
    //nested for loop
        //for each in b.s
            //for each in s
                //b.s multiply s
   BigThree res;
   vector<BigThree> stores;
   int counter = 0;

    for (auto digit : b.s){
        BigThree temp = (*this * digit);
        //cout << *this << " * " << digit << " = " << temp << "\n";
        temp.AddZeros(counter);
        stores.push_back(temp);
        //cout << "TEMP WITH " << counter <<  " ZEROS: " << temp << "\n";
        counter++;
        }

    for (auto number : stores){
        BigThree temp2 = res + number;
        res = temp2;
    }


   return res;
}

BigThree BigThree::RecursiveMultiply(BigThree& b)
{

    //split *this into left with zeroes and right
    //
   BigThree res;
   cout << "Recursive Multiply not implemented\n";
   return res;
}

BigThree BigThree::FasterRecursiveMultiply(BigThree& b)
{
   BigThree res;
   cout << "Faster Recursive Multiply not implemented\n";
   return res;
}

