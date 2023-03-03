
#include <iostream>
using namespace std;
class fila{
public:
	int x;
	fila *prox;

	fila() {
		x = 0;
		prox = NULL;
	}
	
	~fila() {
		delete this;
	}

	bool vazia(fila *f){
		if(f->x == 0 && f->prox == NULL) {
			return 1;
		} else {
			return 0;
		}
	}
		
	fila *inicio(fila *f) {
		return f;
	}

	fila *ultimo(fila *f) {
		while(f) {
			if(f->prox == NULL) {
				return f;
			}
			f = f->prox;
		}
	}

	void insere(fila *f, int valor) {
		bool v = f->vazia(f);
		fila *u = f->ultimo(f);
		fila *no = new fila;
		
		if(v == 1) {
			f->x = valor;
		}	else {
			no->x = valor;
			u->prox = no;
		}
	}

	void mostra(fila *f) {
		while(f) {
			cout << "Ender: " << f << " Valor: " << f->x << " Proximo: " << f->prox << endl;
			f = f->prox;
		}
	}

	fila *elimina_no(fila *f) {
		fila *novacabeca = f->prox;
		f->prox = NULL;
		return novacabeca;
	}

	void drop(fila *f) {
		while(f) {
			cout << f->x << endl;
			f = f->elimina_no(f);
		}
	}
};

int main() {
	fila *f = new fila;
	f->insere(f, 1234);
	f->insere(f, 9999);
	f->insere(f, 5678);
	f->insere(f, 8888);
	f->insere(f, 9876);
	f->insere(f, 4321);
	f->mostra(f);
	f = f->elimina_no(f);
	f->mostra(f);
	f->drop(f);
}
