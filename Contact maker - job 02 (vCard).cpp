#include <iostream>
#include <fstream>
using namespace std;

void create_vcard(string firstname, string lastname, string email, string phone) {
    string filename = lastname + "_" + firstname + ".vcf";
    ofstream outfile(filename);

    outfile << "BEGIN:VCARD" << endl;
    outfile << "VERSION:3.0" << endl;
    outfile << "N:" << lastname << ";" << firstname << ";;;" << endl;
    outfile << "FN:" << firstname << " " << lastname << endl;
    outfile << "EMAIL;TYPE=INTERNET:" << email << endl;
    outfile << "TEL;TYPE=CELL:" << phone << endl;
    outfile << "END:VCARD" << endl;

    outfile.close();

    cout << filename << " created successfully." << endl;
}

int main() {
    create_vcard("John", "Doe", "johndoe@example.com", "+1-555-555-5555");
//this nex line makes a secound vCard
//    create_vcard("Joe", "Doe", "joedoe@example.com", "+1-555-555-5556");
    return 0;
}
