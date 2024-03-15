/***************************************************
 * Code your program here
 ***************************************************/
 #include <iostream>
 #include <fstream>
 using namespace std;
 int writeFile(string);
 int readFile(string);

 int writeFile(string fileName) {
    ofstream ofs;

    ofs.open(fileName);

    int N, id, i;
    string depart, name;
    double salary;

    cin >> N;
    ofs << N << endl;

    for (i = 0; i < N; ++i) {
        cin >> id >> name >> depart >> salary;
        ofs << id << " " << name << " " << depart << " " << salary << endl;
    }

    return N;
 }

 int readFile(string fileName) {
    ifstream ifs;

    ifs.open(fileName);
    int N, id, i;
    string depart, name;
    double salary, sum, avg;
    sum = 0;

    ifs >> N;

    cout << "ID                 Name                 Department         Salary" << endl;

    for (i = 0; i < N; ++i) {
        ifs >> id >> name >> depart >> salary;

        cout << id << "          " << name;
        cout << "                 " << depart;
        cout << "         " << salary << endl;
        sum += salary;
    }

    avg = sum / N;
    cout << "                                        ";
    cout << "Total: " << sum << " ";
    cout << "Average: " << avg << endl;

    return N;

 }