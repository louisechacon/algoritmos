unsigned int contar_comuns(const vector &other) {
	
	unisgned int contador = 0;
	
	for (unsigned int i = 0; i < this->size_; i++) {
		for (unsigned int j = 0; j < other.size_; j++) {
			if (this->data[i] == other.data[j]) {
				contador++;
				break
			}
		}
	}
	return contador;
} // O(n²)