template <typename T>

class AlberoBinario {
private:
    T nodi[100];
    int numeronodi=0;
    int nuovovalore=0;
    
    for (int i = 0; i < 100; ++i) {
        T nodi[i] = -1;  
    }

public:
    AlberoBinario();
    
    bool alberoVuoto() const {
        return numeroNodi == 0;
    }

    void insRadice(const T& valore) {
        if (numeroNodi > 0) {
            std::cout << "La radice è già presente" << std::endl;
            return;
        }
        nodi[0] = valore;  
        numeroNodi = 1; 
    }
    
   
    T radice() const {
        if (alberoVuoto()) {
            std::cout<<("Non c'è radice.")<<std::endl;
        }
        return nodi[0];  
    }
  
    bool isFoglia(int indice) const {
      int sinistro = 2*indice + 1;
      int destro =  2*indice + 2;
       if (sinistro >= numeroNodi && destro >= numeroNodi) {
          return true;  
      } else {
          return false;  
    }
}
    
    int figlioSinistro(int indice) const {
      int sinistro = 2*indice + 1;
        if (sinistro < numeroNodi) {
            return sinistro;  
        } else {
          return -1;  
      }
    }
        
    int figlioDestro(int indice) const {
      int destro = 2*indice + 2;
      if (destro < numeroNodi) {
          return destro;  
      } else {
          return -1;  
    }
}
    
    void insFiglioSinistro(int indice, const T& valore) {
        int sinistro = 2 * indice + 1;
        if (sinistro < numeroNodi) {
            std::cout << "il figlio sinistro già esiste" << std::endl;
        } else if (numeroNodi < 100) {
            int nodi[sinistro] = nuovovalore;  
            numeroNodi++;             
        } else {
            std::out << "l'albero è pieno!" << std::endl;
        }
    }

    
    void insFiglioDestro(int indice, const T& valore) {
        int destro = 2 * indice + 2;
        if (destro < numeroNodi) {
            std::cout << "il figlio destro già esiste " << std::endl;
        } else if (numeroNodi < 100) {
            int nodi[destro] = nuovovalore;  
            numeroNodi++;            
        } else {
            std::out << "l'albero è pieno!" << std::endl;
        }
    }

    void rimuovi(int indice) {
        if (indice >= numeroNodi) {
            std::cout << "Errore" << std::endl;
            return;
        }
        if (!isFoglia(indice)) {
            std::cout << "Errore, il nodo non è una foglia" << std::endl;
            return;
        }
       

        for (int i = indice; i < numeroNodi - 1; ++i) {
            nodi[i] = nodi[i + 1];
        }
        numeroNodi--;  
    }

    
    void stampa() const {
        for (int i = 0; i < numeroNodi; i++) {
            int sinistro = figlioSinistro(i);
            int destro = figlioDestro(i);
            T valore = nodi[i];
            std::cout << "Pos " << i << ", Valore: " << nuovovalore
                      << ", Figliosx: " << (sinistro != -1 ? std::to_string(sinistro) : "N/A")
                      << ", Figliodx: " << (destro != -1 ? std::to_string(destro) : "N/A")
                      << std::endl;
        }
    }

};
