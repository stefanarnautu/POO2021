#include <iostream>
#include <string.h>
#include "Map.h"

using namespace std;

int main()
{
    Map<int, const char*> m;
    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";
    for (auto [valoare, sir, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, valoare, sir);
    }
    m[20] = "result";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
   
    printf("-----------------------------------------------\n");
    printf("Folosim get:\n");
    const char* valoare;
    m.Get(10, valoare);
    printf("%s\n", valoare);
    m.Get(20, valoare);
    printf("%s\n", valoare);

    printf("-----------------------------------------------\n");
    printf("Folosim set:\n");
    m.Set(10,"Ana");
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    m.Set(70, "Maria");
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    system("pause");
    return 0;
}