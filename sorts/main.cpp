
#include <iostream> 
#include <stdlib.h>
#include <stdexcept>
#include <vector>
#include "sorts.hpp"

using namespace std;
using namespace arjunexample;

namespace
{
    enum CommandOptions
    {
        INSERTION_ASC   = 0,
        INSERTION_DSC   = 1,
        SELECTION       = 2,
        MERGE           = 3
    };
}


int main(int argc, char* argv[]) 
{ 
    if(argc > 1 && argc <3
            && (atoi(argv[1]) < 3))
    {
        Sorts sortAlgo;
        int samp[] = {4,1,2,5,3};
        int sel = atoi(argv[1]);
        switch(sel)
        {
            case INSERTION_ASC:
                cout << "Insertion sort Ascending order" << endl;
                sortAlgo.insSort(samp,5);
                break;
            case INSERTION_DSC:
                cout << "Insertion sort Descending order" << endl;
                sortAlgo.insSortDesc(samp,5);
                break;
            case SELECTION:
                cout << "Selection sort " << endl;
                sortAlgo.selSort(samp,5);
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
