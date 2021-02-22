#include <iostream>

void helloFromNewBranch()
{
    std::cout << "Hello github from new branch.\n";
}

void helloFromAdmin()
{
    std::cout << "Hi, I am Admin.\n";
}

int main(int argc, char **argv)
{
    helloFromNewBranch();
    helloFromAdmin();
    return 0;
}