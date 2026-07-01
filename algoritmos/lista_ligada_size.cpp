unsigned int size() const {
    unsigned int contador = 0;

    Node* current = this->head;

    while (current != nullptr) {
        contador++;
        current = current->next;
    }

    return contador;
} // O(n)