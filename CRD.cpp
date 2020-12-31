#include<bits/stdc++.h>
using namespace std;

void create(string key, string value){
    ifstream fin;
    fin.open("C:\\Users\\Akash\\Desktop\\projects\\helloworld\\myFile.txt");
    string line, k, v;
    map<string, string> m;
    while (getline(fin, line))
    {
        stringstream ss(line);
        ss>>k>>v;
        m[k] = v;
    }
    fin.close();
    if(m.find(key) != m.end())  cout<<"Error : key already present.\n";
    else{
    ofstream fout;
    fout.open("C:\\Users\\Akash\\Desktop\\projects\\helloworld\\myFile.txt", ios::app);
    fout<<key<<' '<<value<<endl;
    fout.close();
    cout<<"key-value pair created successfully.\n";
    }
}

void read(string key){
    map<string, string> m;
    ifstream fin;
    fin.open("C:\\Users\\Akash\\Desktop\\projects\\helloworld\\myFile.txt");
    string line, k, v;
    while(getline(fin, line)){
        stringstream ss(line);
        ss>>k>>v;
        m[k] = v;
    }
    if(m.find(key) == m.end())  cout<<"Key not present.\n";
    else cout<<m[key]<<'\n';
    fin.close();
}

void readAll(){
    ifstream fin;
    fin.open("C:\\Users\\Akash\\Desktop\\projects\\helloworld\\myFile.txt");
    string line;
    while(getline(fin, line)){
        cout<<line<<endl;
    }
    fin.close();
}

void del(string key){
    map<string, string> m;
    ifstream fin;
    fin.open("C:\\Users\\Akash\\Desktop\\projects\\helloworld\\myFile.txt");
    string line, k, v;
    while(getline(fin, line)){
        stringstream ss(line);
        ss>>k>>v;
        m[k] = v;
    }
    if(m.find(key) == m.end())  cout<<"Key not present.\n";
    else{
        m.erase(key);
        ofstream fout;
        fout.open("C:\\Users\\Akash\\Desktop\\projects\\helloworld\\myFile.txt");
        for(auto it : m){
            fout<<it.first<<' '<<it.second<<endl;
        }
        fout.close();
    }    
}

int main(){
    
    readAll();
    return 0;
}