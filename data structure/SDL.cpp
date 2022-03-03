#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main(void){

   int array[] = {2,3,5,5};
   
   ostream_iterator<int> saeed(cout, " ");
   copy(array, array+4, saeed);
   vector<int> khan(4);
    copy(array, array+4, khan.begin());
    copy(khan.begin(), khan.end(), saeed);















/*
    int intArray[] = {5,6,8,3,40,36,98,29,75};
    vector<int> vecList(9);

    ostream_iterator<int> screen(cout, " ");
    cout << "Line 11 intArray: ";
    copy(intArray, intArray+9, screen);
    cout << endl;
    copy(intArray, intArray+9, vecList.begin());
    cout << "line 15: vecList: ";
    copy(vecList.begin(), vecList.end(), screen);
    cout << endl;
    copy(intArray+1, intArray+9, intArray);
    cout << "line 19: intArray: ";
    copy(intArray, intArray+9, screen);
    cout << endl;
    copy(vecList.rbegin()+2, vecList.rend(), vecList.rbegin());
    cout << "line 23: vecList: ";
    copy(vecList.begin(), vecList.end(), screen);
    cout << endl; */
    return 0;
}


