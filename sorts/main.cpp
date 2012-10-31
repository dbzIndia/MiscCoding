
#include <iostream> 
#include "sorts.hpp"

using namespace std;
using namespace arjunexample;

int main() 
{ 
    insertionSort insert;
    int samp[] = {4,1,2,5,3};
    insert.sort(samp,5);

    for(int i =0; i<5; i++)
    {
        cout << samp[i] << ",";
    }
    cout << endl;
    
    cout << "This was ascending, next comes descending" << endl;
    insert.sortDesc(samp,5);
    for(int i =0; i<5; i++)
    {
        cout << samp[i] << ",";
    }
    cout << endl;
}

