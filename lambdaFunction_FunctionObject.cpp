#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


// Functor or Function object ----------
/*struct multiply
{
    int operator() (int n)
    {
        return n*n;
    }
};*/

int main()
{
    auto f=[](int n){return n*n;};    // Lambda function 1
    int d=f(2);
    cout<<d<<endl;

    vector<int> v{1,2,3,4};

    for_each(v.begin(),v.end(),[](int n){   // lambda function 2
             cout<<n*n<<endl;
             });

}

