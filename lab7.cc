#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;



double maxDistance(int x[][2], int length) {
  double maxDistance=0;
  double distance=0;
  for(int i=1; i<=length; i++) {
    distance=sqrt((x[i][0]-x[i-1][0])*(x[i][0]-x[i-1][0])+(x[i][1]-x[i-1][1])*(x[i][1]-x[i-1][1]));
    if (distance > maxDistance) {
      maxDistance=distance;
    }
    else {
      maxDistance=maxDistance;
    }
  }
  return maxDistance;
}


void compact(int x[], int length, int a, int b) {
  int i = 0;
  for(int i=0; i<=length; i++) {
    if(i<a | i>b) {
      x[i]=x[i];
    }
    else {
      x[i]=0;
    }
  }
}



void print(int a[], int length) {
  for (int i = 0; i < length; i++) {
    cout << a[i] << " ";
    if (i == (length - 1)) {
      cout << endl;
    }
  }
}

int main() {
  int r2[4][2] = {{0, 0}, {0, 3}, {4, 3}, {5, 0}};
  double res = maxDistance(r2, 4);
  cout << res << endl;
  
  int r1[] = {1, 7, 3, 4, 5, 6, 2, 8, 3, 5};
  compact(r1, 10, 2, 4);
  print(r1, 10);
}
