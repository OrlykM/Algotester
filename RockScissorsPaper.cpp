#include<iostream>
using namespace std;
int main() {
 long long rm, sm, pm;
 long long rz, sz, pz;
 cin >> rm >> sm >> pm;
 cin >> rz >> sz >> pz; 
 if (rm - sz > 0 && sm - pz > 0 && pm - rz > 0) {
  cout << sz + pz + rz << endl;
 }
 if (rm - sz > 0 && sm - pz > 0 && pm - rz <= 0) {
  cout << sz + pz + pm << endl;
 }
 if (rm - sz > 0 && sm - pz <= 0 && pm - rz > 0) {
  cout << sz + sm + rz << endl;
 }
 if (rm - sz <= 0 && sm - pz > 0 && pm - rz > 0) {
  cout << rm + pz + rz << endl;
 }
 if (rm - sz > 0 && sm - pz <= 0 && pm - rz <= 0) {
  cout << sz + sm + pm << endl;
 }
 if (rm - sz <= 0 && sm - pz <= 0 && pm - rz > 0) {
  cout << rm + sm + rz << endl;
 }
 if (rm - sz <= 0 && sm - pz > 0 && pm - rz <= 0) {
  cout << rm + pz + pm << endl;
 }
 if (rm - sz <= 0 && sm - pz <= 0 && pm - rz <= 0) {
  cout << rm + sm + pm << endl;
 }
 return 0;
}
