#include <iostream>
using namespace std;

void afficherBornes(const float puiss[], const float dist[], int taille);

void afficherBornes(const float puiss[], const float dist[], int taille) {
  for (int i = 0; i < taille; i++) {
    cout<<"Borne "<<i+1<<" : "<<puiss[i]<<"kW,  à "<<dist[i]<<"km"<<endl;
  }
}

int main() {
  float puissances[5] = {50.0, 22.0, 11.0, 150.0, 7.4}; //en kW
  float distances[5] = {12.5, 35.0, 8.0, 60.0, 2.3}; //en km
  afficherBornes(puissances, distances, 5);
  return 0;
} 

