#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------

//1. Unterfunktion um ein Array mit Zufallszahlen (zwischen 0 und 1) zu füllen
double Zufallsfunktion(double* x,int N){
  //RAND_MAX = 1;
  for(int i = 0; i < N; i++){
  x[i] = (double)rand()/RAND_MAX;//Zufallszahlen erzeugen
  }
}
//2. Unterfunktion um den Mittelwert und die Varianz des Arrays zu bestimmen
double Rechnung(double* x, double& M, double& V, int N){
 for(int i = 0; i < N; i++) M += x[i];
 M = M/N;
 for(int i = 0; i < N; i++) V += (x[i] - M)*(x[i] - M);
 V = V/N;
 return M, V;
}

int main(){
   srand(time(NULL));//rand wirklich zur Zufallsfunktion machen
   const int N = 100;// größe des Zielarrays festlegen
   double p[N];//Zielarray erzeugen
   double mean, var;

   // Some lines here....
   //Fülle das Array mit Zufallszahlen
   Zufallsfunktion(p,N);
   //Bestimme Mittelwert und Varianz des Arrays
   Rechnung(p,mean,var,N);
   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
