#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   
   cout << "Enter your N, RULES: M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;
  
  if (N <= 0 || N >= 10 || M < 1 || M > 10) {
   cout << "ERROR. Valid range is between 0 < N < 10 and 1 <= M <= 10." << endl;
   return 1;
  }

  cout << N << " to power number: ";
  int result = 1;
  for (int i = 0; i <= M; ++i) {
   cout << result << (i < M ? ", " : "");
   result *= N;
  }
  cout << endl;

  return 0;
  
}
