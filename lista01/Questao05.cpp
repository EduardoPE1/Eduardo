#include <iostream>
#include <fstream>


using namespace std;
int main(){
    ofstream arquivo;
    string texto;
    arquivo.open("input.txt", ios::app);
    getline (cin, texto);
    arquivo << texto;
    arquivo.close();

    return 0;
}