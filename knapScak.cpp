#include<bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

bool cmp(Item a,Item b){
    double ratio1 = a.value/a.weight;
    double ratio2 =b.value/b.weight;
    return ratio1 > ratio2;
}

int main()
{
    Item items[] = {{60,10},{100,20},{120,30}};
    int i=0;
    int allWeight = 50;
    int current = 0;
    double Value = 0.0;

    int size = sizeof(items)/ sizeof(items[0]);

    sort(items,items+size,cmp);
    for(i=0;i<size;i++)
    {
        if(current + items[i].weight <= allWeight)
        {
            Value += items[i].value;
            current += items[i].weight;
        }

        else{
            int nowWeight = allWeight - current;
            int valueOfRemainingWeight = items[i].value *((double)nowWeight/items[i].weight);
            current += nowWeight;
            Value += valueOfRemainingWeight;
        }
    }

    printf("%.2f\n",Value);
}

