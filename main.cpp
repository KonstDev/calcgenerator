#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream write ("generatedcalc.cpp");
    //
    //cout << "Hello world!" << endl;
    write << "#include <iostream>" << endl;
    write << endl;
    write << "using namespace std;" << endl << endl;
    write << "int main()" << endl << "{" << endl;
    write << "int a1 = 0, a2 = 0;" << endl;
    write << "cin >> a1 >> a2;" << endl;
    for (int i = 0; i < 501; i++)
        for (int j = 0; j < 501; j++)
            {
                write << "if (a1 == " <<  i << " && a2 == " << j << ");"<< endl;
                write << "        cout << " << i + j << ";" << endl;
            }

    write << "return 0;" << endl;
    write << "}";
    return 0;
}
