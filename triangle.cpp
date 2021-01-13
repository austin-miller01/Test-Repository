#include <bits/stdc++.h>
using namespace std;


class Book{
    int isbn;
    string name;

    public:
        void setname(string newName){ name = newName;};
        void print(){cout << name << " " << isbn << endl;};
        void setISBN(int num){isbn = num;};

};


int main(){
  cout << "hello world" << endl;
    Book b;
    b.setname("hello world");
    b.setISBN(24);
    b.print();
    return 0;

}
