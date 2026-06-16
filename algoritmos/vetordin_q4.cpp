#include <iostream>

int *decrease_capacity(int *data, int &capacity, int size) {
    int* new_array = new int[capacity/2];

    for (int i = 0; i < size; i++) {
        new_array[i] = data[i];
    }

    int* old_array = data;
    delete [] old_array;
    capacity = capacity/2;

    return new_array;
}

bool remove(int value) {
    for (unsigned int i = 0; i < this->size_; i++) {

        if (this->data[i] == value) {

            for (unsigned int j = i; j < this->size_ - 1; j++) {
                this->data[j] = this->data[j + 1];
            }

            this->size_--;

            if (this->size_ < this->capacity_/4) {
                this->data = decrease_capacity(this->data, this->capacity_, this->size_);
            }

            return true;
        }
    }

    return false;
} // O(n)? levando também em consideração que decrease_capacity será chamada n vezes