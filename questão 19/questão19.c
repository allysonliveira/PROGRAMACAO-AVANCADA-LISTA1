// 19. Pesquise na Internet sobre o uso da biblioteca libGC, que implementa um coletor de lixo em C. O processo de instalação dessa biblioteca em sistemas Windows pode ser um pouco trabalhoso. Entretanto, em sistemas Unix, a instalação é bem simples, de sorte que se recomenda a resolução desta questão em uma máquina, por exemplo, com Linux instalado. Caso seja usuário Windows e não queira instalar sistemas alternativos em seu computador, use uma ferramenta de virtualização (ex: VirtualBox) para instalar e executar o Linux sem alterar a instalação original de seu computador. Prepare um pequeno programa-exemplo demonstrando como usar a biblioteca.

#include <stdio.h>
#include "gc.h"

int main() {
    int size = 10;

    GC_INIT();

    int *p = GC_MALLOC_ATOMIC(sizeof *p);
    
    for (int i=0; i<size; i++){
      p[i]=i+1;
    }

    for (int i=0; i<size; i++){
      printf("%d ", p[i]);
    }
    
    return 0;
}