# Super Trunfo - Nível Mestre

Esse projeto aqui é o desafio final da sequência do Super Trunfo. A proposta era fazer um programa em C onde a gente compara duas cartas de países usando **dois atributos diferentes**.

## 💡 O que o programa faz

- Mostra duas cartas já cadastradas (Brasil e Japão).
- O jogador escolhe **dois atributos numéricos diferentes** para comparar.
- O programa compara os atributos de cada carta:
  - Se for **Densidade Demográfica**, ganha quem tiver o menor valor.
  - Nos outros casos, ganha quem tiver o maior valor.
- Soma os dois atributos de cada carta.
- Mostra quem venceu no final com base na soma.
- Se empatar, ele mostra “Empate!”.

## 🧠 Atributos disponíveis

1. População (maior vence)  
2. Área (maior vence)  
3. Densidade Demográfica (menor vence)  
4. PIB (maior vence)

## 🚀 Como rodar

1. Copie o código do arquivo `super_trunfo_final.c` (tá no repositório).
2. Compila assim no terminal:

```bash
gcc super_trunfo_final.c -o super_trunfo_final
./super_trunfo_final
```

Pronto. Agora é só seguir as instruções do menu.

## 🛠️ Regras do código

- Menu dinâmico: o segundo atributo nunca aparece igual ao primeiro
- Códigos simples, diretos e comentados
- Tudo foi feito pensando na clareza, e tratando erro de entrada também

## ✅ Exemplo rápido

```
Escolha o PRIMEIRO atributo para comparar:
1 - População
2 - Área
3 - Densidade Demográfica
4 - PIB
Digite o número do atributo: 2

Escolha o SEGUNDO atributo (diferente do primeiro):
1 - População
3 - Densidade Demográfica
4 - PIB
Digite o número do atributo: 3

===== RESULTADO DA RODADA =====

Brasil:
- Atributo 2: 8516
- Atributo 3: 25
- Soma: 8541

Japão:
- Atributo 2: 377
- Atributo 3: 347
- Soma: 724

>>> Vencedor: Brasil
```

## 🧪 Observações

Esse projeto faz parte de uma série de exercícios pra treinar lógica em C, com foco em tomada de decisão (`if-else`, `switch`) e menus interativos.

---

Feito com raça 😤