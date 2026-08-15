void push_back_vector(const Vector &other) {
	
    for (unsigned int i = 0; i < other.size_; i++) {

        if (this->size_ == this->capacity_) {
        	increase_capacity();
		}

        this->data[this->size_] = other.data[i];
        this->size_++;
    }
}