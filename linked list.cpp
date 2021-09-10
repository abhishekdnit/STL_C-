#include<iostream>
#include<list>
#include<stdlib.h>

using namespace std;
list<int> lists;
int main()
{

    int value,choice,pos;

    while(1)
    {
        cout<<"\nEnter 1 to add element from back";
        cout<<"\nEnter 2 to add element from front";
        cout<<"\nEnter 3 to remove element by value";
        cout<<"\nEnter 4 to remove element by position";
        cout<<"\nEnter 5 to remove element from front";
        cout<<"\nEnter 6 to remove element from last";
        cout<<"\nEnter 7 to show first element";
        cout<<"\nEnter 8 to show last element";
        cout<<"\nEnter 9 to reverse the list";
        cout<<"\nEnter 10 to sort elements of the lists";
        cout<<"\nEnter 11 to check whether list is empty";
        cout<<"\nEnter 12 to add element at specific position";
        cout<<"\nEnter 13 to know No. of elements in the lists";
        cout<<"\nEnter 14 to remove all elements of the lists";
        cout<<"\nEnter 15 to show all elements of the lists";
        cout<<"\nEnter 16 to sort elements of the lists";
        cout<<"\nEnter 0 to exit";
        cout<<"\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the value of element : ";
            cin>>value;
            lists.push_back(value);
            break;

        case 2:
            cout<<"Enter the value of element : ";
            cin>>value;
            lists.push_front(value);
            break;

        case 3:
            cout<<"Enter the value to be removed: ";
            cin>>value;
            lists.remove(value);
            break;
        case 4:
            {
            cout<<"Enter the position at which element to be removed: ";
            cin>>pos;
            list<int>::iterator it=lists.begin();
            advance(it,pos-1);                       //key ('pos-1' gives position not index,pos is index)
            lists.erase(it);                         //key
            }
            break;

        case 5:
            lists.pop_front();
            break;
        case 6:
            lists.pop_back();
            break;
        case 7:
            cout<<lists.front();
            break;
        case 8:
            cout<<lists.back();
            break;
        case 9:
            lists.reverse();

            break;
        case 10:
            lists.sort();
            break;
        case 11:
            if(lists.empty())
                cout<<"list is Empty";
            else
                cout<<"list is not Empty";
            break;
        case 12:
            {
                list<int>::iterator it=lists.begin();
                cout<<"Enter the position :";
                cin>>pos;
                cout<<"\nEnter the value : ";
                cin>>value;
                advance(it,pos-1);          //key
                lists.insert(it,value);   //key
            }
            break;
        case 13:
            cout<<lists.size();
            break;
        case 14:
            lists.clear();
            break;
        case 15:
            void show();
            show();
            break;
        case 16:
            break;
        case 0:
            exit(0);


        }

    }

}

void show()
{

    list <int>::iterator it;
    if(lists.empty())
        cout<<"list is empty";

    for(it=lists.begin();it!=lists.end();++it)
    {
        cout<<*it<<"\t";

    }
}




