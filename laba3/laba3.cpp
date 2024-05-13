

#include <iostream>
#include <string>
#include <fstream>


class My_string {
private:
    int s_n;
    char* s;
public :  // constructor
    My_string(int n) {
        s_n = n;
        s = new char[s_n];
    }

    void set_string(char* a) {
        for (int i = 0; i < s_n; i++) {
            s[i] = a[i];
        }
    }

    void print_string() {
        for (int i = 0; i < s_n; i++) {
            std::cout << s[i];
        }
        std::cout << std::endl;
    }

    My_string(const My_string& s1) : My_string(s1.s_n) {
        for (int i = 0; i < s_n; i++) {
            s[i] = s1.s[i];
        }
    }

    My_string& operator= (const My_string& s1) {
        delete[] s;
        s_n = s1.s_n;
        s = new char[s_n];

        for (int i = 0; i < s_n; i++) {
            s[i] = s1.s[i];
        }

        return *this;
    }

    ~My_string() {
        delete[] s;
    }
};

int main()
{
    char* a = new char[10];
    char* b = new char[10];

    for (int i = 0; i < 10; i++)
    {
        a[i] = '0';
        b[i] = '1';
    }

    My_string c(10);
    c.set_string(a);
    My_string d(10);
    d.set_string(b);

    c.print_string();
    d.print_string();

    c = d;
    c.print_string();

    /*int n = 0;
    char* tmp = new char[n];
    bool flag = 1;
    while (flag) {
        char ch = std::cin.get();
        if (ch != '\n') {
            n++;
            tmp.
        }
    }*/

}

