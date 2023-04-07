#include <iostream>
#include <cstring>

class String
{
private:
    char *name;
    int length;

public:
    String()
    {
        length = 0;
        name = new char[length + 1];
    }
    String(char *s)
    {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }
    void display(void)
    {
        std::cout << name << std::endl;
    }
    void join(String &a, String &b)
    {
        length = a.length + b.length;
        delete name;
        name = new char[length + 1];
        strcpy(name, a.name);
        strcat(name, b.name);
    }
};
int main(void)
{
    char *first = "Vaibhav ";
    String name1(first), name2("Mahesh "), name3("Londhe"), s1, s2;
    s1.join(name1, name2);
    s2.join(s1, name3);
    s2.display();
    return 0;
}