
#include <stdio.h>
#include <iostream>
#include "sorts.hpp"

namespace arjunexample
{
    insertionSort::insertionSort()
    {
        std::cout << "Here is my sample c++ program" << std::endl;
    }

    void insertionSort::sort(int arr[], int length)
    {
        int i,j;
        for(i=0; i< length; i++)
        {
            j = i;
            while (j > 0 && arr[j-1] > arr[j])
            {
                int lowerValue = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = lowerValue;
                j--;
            }
        }
    }

    void insertionSort::sortDesc(int arr[], int length)
    {
        int i,j;
        for(i=0; i < length; i++)
        {
            j = i;
            while(j > 0 && arr[j-1] < arr[j])
            {
               int lowerValue = arr[j];
               arr[j] = arr[j-1];
               arr[j-1] = lowerValue;
               j--;
            }
        }
    }

}

/* vim: set noai ts=4 sw=4: */
