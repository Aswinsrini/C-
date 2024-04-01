// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n,k,b=0,count=0,check1=0,p=0;
//   cin>>n;
//   int a[n];
//   for(int i=0;i<n;i++)
//   {
//     cin>>a[i];
//   }
//   sort(a,a+n);
  
//   cin>>k;
//   int check=a[n-1]-a[0];
//   if(check<=k)
//   {
//     cout<<1;
//   }
//   else
//   {
//     for(int i=0;i<n;i++)
//     {  
//       i=check1;
//       if(i==n-1)
//       {
//         count++;
//         break;
//       }
//      for(int j=i+1;j<n;j++)
//      {
//        if((a[j]-a[i])<k  || a[j]-a[i]==0 || a[j]-a[i]==k)
//        { b=1;  
//        }
//         else if(b==1)
//         {
//           count++;
//           b=0;
//           check1=j;
//           break;
//         }
//       }
//       if(b==1)
//      {count++;
//       break;}
     
//     }
//     cout<<count;
//   }
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    unordered_map<string,int>a;
// 	string S, T,word;
//   getline(cin, S);
// 	stringstream X(S);
// 	while(X>> word)
//      { a[word]++;}
//  unordered_map<string,int> ::iterator m;
//  for(m=a.begin();m!=a.end();m++)
//  { cout<<m->first<<" "<<m->second<<endl;  }
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// class A{
//   public:
//   int val;
//   A(int val){
//     this->val= val;
//   }
//   void print(){
//     cout << val;
//   }
// };
// class B : public A{
//   public:
//   int val;
//   B(int val) : A(val){
//     this->val= 10;
//   }
//   void print() {
//     A::print();
//     cout <<val;
//   }
// };
// int main(){
//   B a =  B(100);
//   a.print();
// }



#include <iostream>


class Base {
public:
    virtual void display() {
        std::cout << "Base class display()" << std::endl;
    }
};

class Derived : public Base {
public:
    // Function hiding (overriding without virtual functions)
    void display() {
        std::cout << "Derived class display()" << std::endl;
    }
};

int main() {
    Base baseObj;
    baseObj.display();  // Calls Base class display()

    Derived derivedObj;
    // derivedObj.display();  // Calls Derived class display()

    // // Using a pointer to demonstrate polymorphism
    Base* ptr = &derivedObj;
    ptr->display();  // Calls Base class display() due to function hiding

    return 0;
}
