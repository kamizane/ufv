typedef struct
{
    char CEP_endereco[11];
    int numero_endereco;
}Endereco;


void Inicializa_endereco(Endereco* endereco, char* CEP, int numero);
void preenche_endereco(Endereco* endereco);

void set_CEP_cliente(Endereco* endereco, char* CEP);
void set_numero_endereco_cliente(Endereco* endereco, int numero);

int get_numero_endereco_cliente(Endereco* endereco, int numero);