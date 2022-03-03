#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void){
    deque<int> saeed;

    ostream_iterator<int> screen(cout, " ");
    istream_iterator<int> input(cin);
    
    int num;
    deque<int> :: iterator go;
    go = saeed.begin();
    
    for(int i=0; i<5; i++){
      cin>> num;
      saeed.insert(go++,num);
      


    }

  cout << "The elements are: ";
  copy(saeed.begin(), saeed.end(), screen);



    //  deque<int> intDeque;

    //  ostream_iterator<int> screen(cout, " ");
    //  intDeque.push_back(13);
    //  intDeque.push_back(75);
    //  intDeque.push_back(28);
    //  intDeque.push_back(35);

    //  cout << "Line: 17 intDeque" <<endl;
    //  copy(intDeque.begin(), intDeque.end(), screen);
    //  cout << endl;

    //  intDeque.push_front(0);
    //  intDeque.push_back(100);

    //  cout << "Line: 24"<<endl;
    //  cout << "After modification: "<<endl;
    //  copy(intDeque.begin(), intDeque.end(), screen);
    //  cout << endl;

    //  intDeque.pop_front();
    //  intDeque.pop_front();

    //  cout << "Line: 31"<<endl;
    //  cout << "After removing two elements from the front: "<<endl;
    //  copy(intDeque.begin(), intDeque.end(), screen);
    //  cout << endl;

    // intDeque.pop_back();
    // intDeque.pop_back();

    //  cout << "Line: 38"<<endl;
    //  cout << "After removing two elements from the back: "<<endl;
    //  copy(intDeque.begin(), intDeque.end(), screen);
    // cout << endl;

    
    // deque<int>:: iterator deqIterator;
    // deqIterator = intDeque.begin();
    // ++deqIterator;

    //   intDeque.insert(deqIterator, 444);

    //  cout << "After inserting the 444 element into deque: "<<endl;
    //  copy(intDeque.begin(), intDeque.end(), screen);
    //  cout << endl;

    return 0;
}














