bool remove(int value) {
	node* current = this->head;
	
	for (unsigned int i = 0; i < this->size_; i++) {
		if (this->data[i] == value) {
			for (unsigned int j = i; j < this->size_-1; j++) {
				this->data[j] = this->data[j+1];
			}
		}
		this->size_--;
		return true;
	}
	return false;
}