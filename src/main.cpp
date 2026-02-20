#include <iostream>
using namespace std;

void afficherBornes(const float puiss[], const float dist[], int taille);
int indice(const float dist[], int taille);
int recharge(float capacite, float puiss[]);
void modifier(float dist[], int indice, float nouvelledist);

int main() {
  float puissances[5] = {50.0, 22.0, 11.0, 150.0, 7.4}; // en kW
  float distances[5] = {12.5, 35.0, 8.0, 60.0, 2.3};    // en km
  int capacite;
  int i;
  int ndist;
  cout<<"quelle capacité souhaitez-vous recharger ?"<<endl;
  cin>>capacite;
  recharge(capacite, puissances);
  afficherBornes(puissances, distances, 5);
  indice(distances, 5);

  cout << "Quelle borne souhaitez-vous modifier ?" << endl;
  cin >> i;
  cout << "Quelle distance souhaitez-vous lui attribuer ?" << endl;
  cin >> ndist;

  modifier(distances, i, ndist);

  afficherBornes(puissances, distances, 5);
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
  int x=0;
  for (int i = 0; i < taille-1; i++) {
    min = dist[i];
    min2 = dist[i+1];
    if (min<min2)
      min2=min;
    min2=dist[i+1];
    x=i+2;
  }
   cout<<"La borne la plus proche est à "<<min2<<"km"<<" à la borne "<<x<<endl;
  return x;
}

int recharge(float capacite, float puiss[]) {
  int i;
  cout<<"quelle borne souhaitez-vous utiliser ?"<<endl;
  cin>>i;
  int t=capacite/puiss[i-1];
  cout<<"Vous rechargerez votre véhicule en "<<t<<" heures."<<endl;
  return t;
}

void modifier(float dist[], int indice, float nouvelledist) {
  dist[indice - 1] = nouvelledist;
}