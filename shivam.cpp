#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class student
{
    private:
    int a=0,b=0;
    string s1,s2;
    public:
   
    void set_age(int x)
    {
       x=a;
    }
    int get_age()
    {
    return a;
    }
    void set_standard(int y)
    {
        y=b;
    }
    int get_standard()
    {
        return b;
    }
    void set_first_name(string g)
    {
        g=s1;
    }
    string get_first_name()
    {
        return s1;
    }
    void set_last_name(string h)
    {
        h=s2;
    }
    string get_last_name()
{
    return s2;
}
   string to_string ()
   {
       stringstream ss;
       char c=',';
       ss<<a<<c<<s1<<c<<s2<<c<<b;
       
       return ss.str();
   }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    
    student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

