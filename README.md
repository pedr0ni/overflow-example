# Overflow Example

Exemplo de um programa com a falha de Overflow em C

## Introdução

* Quando uma variável ultrapassa o limite de BITS reservados na memória temos um Overflow.

```c
char nome[10];
gets(nome);
```
* Se for digitado um nome com mais de 10 caracters ocorrerá um Overflow.

### Encontrando o endereço de memória da variável vulneravel

Existem 2 formas para encontrar o endereço de memória:

  1. Utilizando o objdump para realizar um disassembly do código.
  2. Utilizando o GDB para debugar o programa.

Utilizando o objdump, passamos como parâmetro o programa em C compilado e jogamos o output para um txt:
```
objdump -d ./problema > disassembly.txt
```
Aqui o espaço na memória é reservado:
```
 744:	48 83 ec 10          	sub    $0x10,%rsp
```
Aqui fica o endereço da váriavel vulneravel:
```
 748:	48 8d 3d d5 00 00 00 	lea    0xd5(%rip),%rdi        # 824 <_IO_stdin_used+0x4>
```
