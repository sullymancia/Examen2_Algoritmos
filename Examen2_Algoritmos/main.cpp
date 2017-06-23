#include "Test.h"
#include <iostream>
#include <map>
using namespace std;

map<int, map<int,int> > datoMemorizado;

int longestPalindromicSubsequence(string sequence, int begin, int end){
  if (begin == end)
     return 1;

   if (sequence[begin] == sequence[end] && begin + 1 == end)
     return 2;

        if(datoMemorizado.find(begin) == datoMemorizado.end() || datoMemorizado[begin].find(end) == datoMemorizado[begin].end()){
            if(sequence[begin] == sequence[end]){
                datoMemorizado[begin][end] = longestPalindromicSubsequence(sequence, begin+1, end-1) + 2;
}

            else{
                    return max(longestPalindromicSubsequence(sequence, begin, end - 1), longestPalindromicSubsequence(sequence, begin + 1, end) );
}
}
                        return datoMemorizado[begin][end];

}

int longestPalindromicSubsequence(string sequence){
    datoMemorizado.clear();
  return longestPalindromicSubsequence(sequence, 0, sequence.size()-1);
}

vector<int> getPath(int **DAG, int size, int source, int destination)
{
 vector<int> answer;
 int least_weight = 1000;
 int next_vertex = 1000;

//
   for(int destino = 0; destino < size; destino++){

     if(DAG[source][destino] == -1) continue;
            if(DAG[source][destino] < least_weight){
                    least_weight = DAG[source][destino];
                        next_vertex = destino;
     }
   }    answer.push_back(next_vertex);
            source = next_vertex;
                least_weight = 1000;
 return answer;
}

int main ()
{
    test();
    return 0;
}
