#include <iostream>

using namespace std;

class array
{
    int size_total;
    int size_used;
    int *ptr = new int[size_total];

public:
    array()
    {
        size_total = 10;
        size_used = 10;
    }
    void get_size()
    {
        cout << "input total array size" << endl;
        cin >> size_total;
        cout << "input use array size" << endl;
        cin >> size_used;
    }
    void add_val();
    void insert();
    void deletetion();
    void show();
    ~array()
    {
        delete[] ptr;
    }
};
void array ::add_val()
{
    int *p = ptr;
    for (int i = 0; i < size_used; i++)
    {
        cout<<"enter the value"<<endl;
        cin >> *p;
        p++;
    }
}

void array ::insert()
{
    int *p = ptr;
    p += size_used;
    if (size_used == size_total)
    {
        cout << "overflow" << endl;
        return;
    }
    cout << "enter the value" << endl;
    cin >> *p;
    size_used++;
}

void array ::deletetion()
{
    int *p = ptr;
    if (size_used < 1)
    {
        cout << "underflow" << endl;
        return;
    }
    size_used--;
}

void array :: show()
{
    int *p = ptr;
    cout<<"the array is :"<<endl;
    for(int i = 0; i < size_used; i++)
    {
        cout<<*p;
        p++;
    }
    cout<<endl;
}
int main(void)
{
    array ar;
    ar.get_size();
    ar.show();

    ar.add_val();
    ar.show();

    ar.insert();
    ar.show();

    ar.deletetion();
    ar.show();

    return 0;
}