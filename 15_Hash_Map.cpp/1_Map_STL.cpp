#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    // Creation of map
    unordered_map<string,int> m;                         // => use this easy syntax

    // 3 type of insertion in map

    // 1. Insertion
    pair<string,int> p = make_pair("Scorpio", 9);
    m.insert(p);

    // 2. Insertion
    pair<string, int> p2("alto", 2);
    m.insert(p2);

    // 3. insertion
    m["fortuner"] = 10;                                  // => use this easy syntax


    // Access of map
    cout<<m.at("Scorpio")<<endl;  //case sensitive
    cout<<m.at("alto")<<endl;
 
    cout<<m["fortuner"]<<endl;                          // => use this easy syntax


    // Search
    // 1. search
    cout<<m.count("Innova")<<endl;              // if innova found than return 1 else return 0;

    // 2. search
    if(m.find("fortuner") != m.end()){          // agar fortuner ko find karte karte end tkk phoch jaate ho to fortuner nhi milli , orr end tkk nhi phochi to mil gai key
        cout<<"found "<<endl;
    }else{
        cout<<"Not found"<<endl;
    }

    // size
    cout<<m.size()<<endl;
    
    cout<<m["Hummer"]<<endl;   // this syntax -> if no key present in map, it create key="Hummer" and assign value 0 by default
    
    cout<<m.size()<<endl;


    // Iterrate on map

    cout<<"Printing all entries "<<endl;

    for(auto pair : m){
        cout<< pair.first << " -> "<< pair.second;
        cout<<endl;
    }



    return 0;
}