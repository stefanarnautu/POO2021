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
        this->nr_de_elem++;
        this->vector[k] = atoi(p);
        k++;
        p = strtok(NULL, ",");
    }   
}

Sort::Sort(): vector(new int[6]{ 1, 3, 2, 4, 5, 6 }),nr_de_elem(6){}

void Sort::InsertSort(bool ascendent)
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
}

void Sort::QuickSort(bool ascendent)
{
   //
}

void Sort::BubbleSort(bool ascendent) {
   int i, j;
   int aux;
   int n = this->nr_de_elem;
     for (i = 0; i < n - 1; i++)
      for (j = 0; j < n - i - 1; j++)
          if (this->vector[j] > this->vector[j + 1])
          {
              aux = this->vector[j];
              this->vector[j] = this->vector[j + 1];
              this->vector[j + 1] = aux;
           }
    }

void Sort::Print()
{
    for (int i = 0; i < this->nr_de_elem; i++)
    {
        printf("%d ", this->vector[i]);
    }
    printf("\n");
}
      
int  Sort::GetElementsCount()
{
    return this->nr_de_elem;
}

int  Sort::GetElementFromIndex(int index)
{
    if (index > this->nr_de_elem)
        return 0;
    else 
          {
           for(int i=index;i<this->nr_de_elem;i++)
           printf("%d ", this->vector[i]);
          }
    printf("\n");
}
    