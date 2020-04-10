///////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Mergesort Algorithm ////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

void merge (int *v, int comeco, int meio, int fim) {
	int c1 = comeco, c2 = meio, cAux = 0, tam = fim-comeco;
	int *aux = (int*) malloc (tam * sizeof (int));

	while (c1 < meio && c2 < fim) {
		if (v[c1] < v[c2]) {
			aux[cAux] = v[c1];
			c1++;
		}
		else {
			aux[cAux] = v[c2];
			c2++;
		}
		cAux++;
	}

	while (c1 < meio) {
		aux[cAux] = v[c1];
		cAux++;
		c1++;
	}

	while (c1 < fim) {
		aux[cAux] = v[c2];
		cAux++;
		c2++;
	}

	for (cAux = comeco; cAux < fim; cAux++)
		v[cAux] = aux[cAux-comeco];

	free (aux);
}


void mergesort (int *v, int comeco, int fim) {
	if (comeco < fim-1) {
		int meio = (fim + comeco) / 2;
		mergesort (v, comeco, meio);
		mergesort (v, meio, fim);
		merge (v, comeco, meio, fim);
	}
}

int main () {
	return 0; 
}
