#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h> 
#include <string.h>
#include <cstring>
Sort::Sort(int nr_elem, int min_elem, int max_elem)
  {
    this->vector = (int*)(malloc(nr_elem * sizeof(int)));
    time_t t;
    srand((unsigned)time(&t));
    for (int i = 0; i < nr_elem; i++)
    {
            this->vector[i] = min_elem + rand() % (max_elem - min_elem + 1);
            //printf("Elementul de pe pozitia %d este %d\n", i, vector[i]);
    }
    this->nr_de_elem = nr_elem;
  }
Sort::Sort(int* v, int nr_elem)
{
    this->vector= (int*)(malloc(nr_elem * sizeof(int)));
    for (int i = 0; i < nr_elem; i++)
    {
        this->vector[i] = v[i];
       //printf("Elementul de pe pozitia %d este %d\n", i, vector[i]);
    }
    this->nr_de_elem = nr_elem;
}
Sort::Sort(int count, ...)
{
    this->vector = (int*)(malloc(count * sizeof(int)));
    va_list valori;
    va_start(valori, count);
    for (int i = 0; i < count; i++)
    {
        this->vector[i]= va_arg(valori,int);
        //printf("Elementul de pe pozitia %d este %d\n", i, vector[i]);
    }
    va_end(valori);
    this->nr_de_elem = count;
}

Sort::Sort(char* sir)
{
    this->nr_de_elem = 0;
    int a = strlen(sir);
    char* p;
    this->vector = (int*)(malloc(a * sizeof(int)));
    int k = 0;
    p = strtok(sir,",");
    while (p)
    {
        char* numar;
        numar = (char*)(malloc(strlen(p) + 1));
        strcpy(numar, p);
        this->nr_de_elem++;
        this->vector[k] = 1;
        k++;
        printf("%d\n",this->vector[k]);
        p = strtok(NULL, ",");
    }

    printf("%s\n", sir);
    
}

Sort::Sort(): vector(new int[6]{ 1, 3, 2, 4, 5, 6 })
{
        this->nr_de_elem = 6;
        for(int i=0;i<6;i++)
        printf("Elementul de pe pozitia %d este\n",vector[i]);
}

    
/*void Sort::InsertSort(bool ascendent = false)
{
    int i, key, j;
    for (i = 1; i < this->nr_de_elem; i++)
    {
        key = this->vector[i];
        j = i - 1;
        while (j >= 0 && this->vector[j] > key)
        {
            this->vector[j + 1] = this->vector[j];
            j = j - 1;
        }
        this->vector[j + 1] = key;
    }
}*/
void QuickSort(bool ascendent = false)
{

}
    /*void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
    */