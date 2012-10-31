
#include <stdio.h>
#include <iostream>
#include "sorts.hpp"

namespace 
{
    void swap(int *a, int *b)
    {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}

namespace arjunexample
{

    void Sorts::insSort(int arr[], int length)
    {
        int i,j;
        for(i=0; i< length; i++)
        {
            j = i;
            while (j > 0 && arr[j-1] > arr[j])
            {
                swap(&arr[j],&arr[j-1]);
                j--;
            }
        }
    }

    void Sorts::insSortDesc(int arr[], int length)
    {
        int i,j;
        for(i=0; i < length; i++)
        {
            j = i;
            while(j > 0 && arr[j-1] < arr[j])
            {
                swap(&arr[j],&arr[j-1]);
                j--;
            }
        }
    }

    void Sorts::selSort(int arr[], int length)
    {
        int i,j;
        for(i=0; i < length; i++)
        {
            int lIndex = i ;
            for(j=i+1; j < length; j++)
            {
                if(arr[lIndex] > arr[j])
                {
                    lIndex = j;
                }
            }
            if(i != lIndex)
            {
                swap(&arr[i],&arr[lIndex]);
            }
        }
    }

}

/* vim: set noai ts=4 sw=4: */
