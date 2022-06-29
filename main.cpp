#include "veicoli.h"
#include "coda.h"
int main() {
	srand(time(NULL));
	int N, r;
	cout << "inserisci n: " << endl;
	cin>>N;
	coda<Veicolo*> cm(N);
	coda<Veicolo*> ca(N);
	coda<Veicolo*> cb(N);
	for(int i = 0; i < N; i++) {
		r = rand() % 3;
		if(r == 0)
			cm.enqueue(new Moto(rand()%(50-1+1)+1));
		if(r == 1)
			ca.enqueue(new Auto(rand()%(45-9+1)+9));
		if(r == 2)
			cb.enqueue(new Barca(rand()%(55-20+1)+20));

	}
	cout << "coda moto : " << endl;
	cout << cm << endl;
	cout << "-------------------" << endl;
	cout << "coda auto : " << endl;
	cout << ca << endl;

	cout << "-------------------" << endl;
	cout << "coda barche : " << endl;
	cout << cb << endl;
	


}