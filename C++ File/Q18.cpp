// Write a program to demonstrate diamond’s problem. Also update the same program to
// resolve it.


// Daimond's problem Demonstration... (unresolved code commented below)
// The code below has Class B and Class C inherited from Class A... The attributes are inherited 
// Seperatedly in B and C 
// When we inherited Class D from B and C... same attribute got inherited from B and C


// #include <iostream> 
// using namespace std; 
// class A { 
// public: 
//     void say() 
//     { 
//         cout << "Hello world"<<endl; 
//     } 
// }; 
// class B : public A { 
// };   
// class C : public A { 
// };   
// class D : public B, public C { 
// }; 

// int main()
// {
//     D a1;
//     a1.say();
// }




// Resolved part of code below (By putting public virtual when inheriting )


#include <iostream> 
using namespace std; 
class A { 
public: 
    void say() 
    { 
        cout << "Hello world"<<endl; 
    } 
}; 
class B : public virtual A { 
};   
class C : public virtual A { 
};   
class D : public B, public C { 
}; 

int main()
{
    D a1;
    a1.say();
}
