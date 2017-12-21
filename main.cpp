#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of students" << endl;
    cin >> n;
    string *students = new string[n];
    ofstream file("students.txt");
    for (int i = 0; i < n; i++){
        cin >> students[i];}
        for(int i=0; i < n; i++){
            file << students[i] << " ";
        }
        file.close();
        ifstream file1("students.txt");
        char ch;
        while(file1.get(ch)){
            cout << ch;
        }
        file.close();
        return 0;
}
