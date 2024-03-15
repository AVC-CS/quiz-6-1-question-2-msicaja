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

    if (!ofs) {
        cout << "File Open Error\n";
        exit(0);
    }

    int N, id, i;
    string depart, name;
    double salary;

    cin >> N;
    ofs << N << endl;

    for (i = 0; i < N; ++i) {
        cin >> id >> name >> depart >> salary;
        ofs << id << " " << name << " " << depart << " " << salary;
    }

    return N;
 }

 int readFile(string fileName) {
    return 23;
 }