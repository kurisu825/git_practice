#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


int main(int argc, char ** argv){

   int first[] = {5, 10, 15, 20, 25};
   int second[] = {50, 40, 30, 20, 10};
   vector<int> result(10);
   vector<int>::iterator it;

   sort(first, first+5);
   sort(second, second+5);

   set_union(first, first+5, second, second+5, result.begin());

   for(it = result.begin(); it != result.end(); it++){

      cout << *it << " ";
   }



   return 0;
}
