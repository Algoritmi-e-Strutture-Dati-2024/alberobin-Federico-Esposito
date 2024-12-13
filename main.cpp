int main() {
    AlberoBinario <int> albero;

    albero.insRadice(15);
    
    std::cout << "Radice: " << albero.radice() << std::endl;

    albero.insFiglioSinistro(0, 3);
    
    albero.insFiglioDestro(0, 33);

    albero.stampa();

    albero.rimuovi(66); 
    
    std::cout << "Albero con foglia rimossa:" << std::endl;
    
    albero.stampa();

    return 0;
}

