#include <iostream>
using namespace std;

void afficherBornes(const float puiss[], const float dist[], int taille);
int indice(const float dist[], int taille);

int main() {
  float puissances[5] = {50.0, 22.0, 11.0, 150.0, 7.4}; // en kW
  float distances[5] = {12.5, 35.0, 8.0, 60.0, 2.3};    // en km
  afficherBornes(puissances, distances, 5);
  indice(distances, 5);
  return 0;
}

void afficherBornes(const float puiss[], const float dist[], int taille) {
  for (int i = 0; i < taille; i++) {
    cout << "Borne " << i + 1 << " : " << puiss[i] << "kW,  à " << dist[i]
         << "km" << endl;
  }
}

int indice(const float dist[], int taille) {
  int min = 0;
  int min2 = 0;
  for (int i = 0; i < taille-1; i++) {
    min = dist[i];
    min2 = dist[i+1];
    if (min<min2)
      min2=min;
  }
   cout<<"La borne la plus proche est à : "<<min2<<"km"<<endl;
  return min2;
}