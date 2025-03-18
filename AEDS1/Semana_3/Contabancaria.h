

typedef enum Tipobancario{
    CORRENTE = 1,
    POUPANCA = 2
}Tipobancario;

typedef struct {
    int numero;
    double saldo;
    char nome_do_cliente[255];
    char CPF[14];
    Tipobancario tipo_da_conta;
    int ano_de_abertura;
} ContaBancaria;

void Inicializa(ContaBancaria* conta, int numero, float saldo, char* nome, char* CPF, int ano_de_abertura, Tipobancario tipo);

void preenche(ContaBancaria* conta);

void Deposito (ContaBancaria* conta, double valor);


void Saque (ContaBancaria* conta, double valor);


void Imprime (ContaBancaria* conta);

void Emprestimo (ContaBancaria* conta);

void set_numero(ContaBancaria* conta, int numero);

void set_saldo(ContaBancaria* conta, float saldo);

void set_nome(ContaBancaria* conta, char* nome);

void set_CPF(ContaBancaria* conta, char* CPF);

void set_ano_de_abertura(ContaBancaria* conta, int ano_de_abertura);

void set_Tipobancario(ContaBancaria* conta, Tipobancario tipo);

int get_numero(ContaBancaria* conta);


float get_saldo(ContaBancaria* conta);
