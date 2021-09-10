#include <iostream>
#include <memory>

using namespace std;

int main()
{
    shared_ptr<int> p(new int(10));

    cout<<p.get();
    cout<<endl<<*p;

    shared_ptr<int> q(p);

    cout<<endl<<q.get();
    cout<<endl<<p.get();
    //cout<<endl<<*p;
    cout<<endl<<*q;

    cout<<endl<<p.use_count();
    cout<<endl<<q.use_count();
    p.reset();
    cout<<endl<<p.use_count();
    cout<<endl<<q.use_count();
    cout<<endl<<p.get();
    cout<<endl<<q.get();
}

