#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> p(new int(10));

    cout<<p.get();
    cout<<endl<<*p;

    unique_ptr<int> q=move(p);

    cout<<endl<<q.get();
    cout<<endl<<p.get();
    //cout<<endl<<*p;
    cout<<endl<<*q;
}

