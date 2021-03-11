class Sort
{
    int* vector;
    int nr_de_elem;
public:

    // add constuctors
    Sort(int nr_elem,int min_elem,int max_elem);
    Sort(int* vector, int nr_elem);
    Sort(int count, ...);
    Sort(char* sir);
    Sort();

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
