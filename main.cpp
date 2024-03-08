#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;
  
  if (N <= 0 || N >= 10 || M < 1 || M > 10) {
   cout << "ERROR. Valid range is between 0 < N < 10 and 1 <= M <= 10." << endl;
   return 1;
  }

  cout << "Output: ";
  int result = 1;
  for (int i = 0; i <= M; ++i) {
   cout << result << " ";
   result *= N;
  }
  cout << endl;

  return 0;
  
}
