# 📚 Libft

O **Libft** é um projeto que consiste na criação de uma biblioteca personalizada em C, contendo diversas funções úteis para manipulação de strings, memória e listas encadeadas.

---

## 📌 Índice

- [Objetivo do Projeto](#-objetivo-do-projeto)
- [Funcionalidades](#-funcionalidades)
- [Tecnologias Utilizadas](#-tecnologias-utilizadas)
- [Instalação](#-instalação)
- [Como Usar](#-como-usar)
- [Testes](#-testes)
- [Contato](#-contato)

---

## 🎯 Objetivo do Projeto

O **Libft** tem como objetivo fornecer uma base sólida de funções reutilizáveis, facilitando o desenvolvimento de projetos em C. Ele replica e amplia diversas funções da biblioteca padrão do C.

---

## 🔧 Funcionalidades

O projeto é dividido em várias categorias:

### 🔹 Funções de Manipulação de Strings
- `ft_strlen` - Retorna o tamanho de uma string.
- `ft_strcpy` - Copia uma string para outra.
- `ft_strncmp` - Compara duas strings.

### 🔹 Funções de Manipulação de Memória
- `ft_memset` - Preenche um bloco de memória com um valor específico.
- `ft_memcpy` - Copia blocos de memória.
- `ft_bzero` - Zera um bloco de memória.

### 🔹 Funções de Conversão
- `ft_atoi` - Converte uma string para um inteiro.
- `ft_itoa` - Converte um inteiro para uma string.

### 🔹 Funções de Manipulação de Listas Encadeadas
- `ft_lstnew` - Cria um novo nó na lista.
- `ft_lstadd_front` - Adiciona um nó no início da lista.
- `ft_lstadd_back` - Adiciona um nó no final da lista.

---

## 🛠 Tecnologias Utilizadas

- **Linguagem:** C  
- **Compilador:** `cc` (ou GCC, Clang)  
- **Sistema Operacional:** Linux, macOS  

---

## 🛠 Instalação

### 🔹 Passo 1: Clonar o repositório
```sh
git clone https://github.com/seu-usuario/libft.git
```

### 🔹 Passo 2: Compilar a biblioteca
```sh
cd libft
make
```

Isso gerará o arquivo `libft.a`, que pode ser usado em outros projetos.

---

## 🚀 Como Usar

Para utilizar a `libft` em seu projeto, inclua o cabeçalho e compile com a biblioteca:

```c
#include "libft.h"

int main()
{
    char str[] = "Hello, world!";
    printf("Tamanho da string: %zu\n", ft_strlen(str));
    return 0;
}
```

Para compilar e executar:
```sh
gcc main.c -L. -lft -o test_libft
./test_libft
```

---

## 🧪 Testes

### 🔹 Testes Manuais
- Teste cada função individualmente para validar seu comportamento.
- Utilize ferramentas externas, como `libftTester` e `42Testers-Libft`, para testes mais robustos.

---

## 📩 Contato

Se tiver alguma dúvida ou sugestão, entre em contato:
📧 **E-mail:** [asilvaperoba@gmail.com](mailto:asilvaperoba@gmail.com)

