
#include <iostream> 
#include <stdlib.h>
#include "sorts.hpp"
#include <stdexcept>

using namespace std;
using namespace arjunexample;

namespace
{
    enum CommandOptions
    {
        INSERTION_ASC   = 0,
        INSERTION_DSC   = 1,
        SELECTION       = 2
    };
}


int main(int argc, char* argv[]) 
{ 

    if(argc > 1 && argc <3
            && (atoi(argv[1]) < 3))
    {
        InsertionSort insert;
        int samp[] = {4,1,2,5,3};
        int sel = atoi(argv[1]);
        switch(sel)
        {
            case INSERTION_ASC:
                cout << "Insertion sort Ascending order" << endl;
                insert.sort(samp,5);
                break;
            case INSERTION_DSC:
                cout << "Insertion sort Descending order" << endl;
                insert.sortDesc(samp,5);
                break;
            default:
                break;
        }

        for(int i =0; i<5; i++)
        {
            cout << samp[i] << ",";
        }
        cout << endl;

    }
    else 
    {
        throw std::runtime_error("args: 1-Insertion Ascending : 2-Insertion Desc : 3-Selection");
    }

}

/* vim: set noai ts=4 sw=4: */
