
typedef enum Tipobancario{
    CORRENTE = 1,
    POUPANCA = 2
}Tipobancario;

typedef struct {
    int numero;
    double saldo;
    Tipobancario tipo_da_conta;
    int ano_de_abertura;
} ContaBancaria;

void Inicializa(ContaBancaria* conta, int numero, float saldo, int ano_de_abertura, Tipobancario tipo);
void preenche(ContaBancaria* conta);
void Deposito (ContaBancaria* conta, double valor);
void Saque (ContaBancaria* conta, double valor);
void Emprestimo (ContaBancaria* conta);

void Imprime_contaBancaria (ContaBancaria* conta);
void set_numero(ContaBancaria* conta, int numero);
void set_saldo(ContaBancaria* conta, float saldo);
void set_ano_de_abertura(ContaBancaria* conta, int ano_de_abertura);
void set_Tipobancario(ContaBancaria* conta, Tipobancario tipo);