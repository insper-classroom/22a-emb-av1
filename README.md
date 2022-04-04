# 22a - EMB - AV1

- A prova é prática, com o objetivo de avaliar sua compreensão a cerca do conteúdo ministrado pela disciplina. 
- É permitido consulta a todo material pessoal (suas anotações, códigos) e publico (github e internet), mas não pode consultar outros alunos.
- **A cada 30 minutos você deverá fazer um commit no seu código!**
    - Códigos que não tiverem commit a cada 30min ou que mudarem drasticamente entre os commits podem ter a entrega anulada.
    - Tente inserir mensagens condizentes nos commits!
- Duração total: 3h

!!! info
    Criar o repositório de entrega pelo link:
    
    - https://classroom.github.com........


    Use como base o código disponível neste repositório.

Você vai precisar:

- ▶️ Kit SAME70-XPLD
- ▶️ Conectar o OLED1 ao EXT-1

### Ideia geral

Nesta avaliacão vocês vão desenvolver um protótipo de um controlador para um micro-ondas, que em linhas gerais irá possuir as seguintes interfaces:

- Display OLED
- Botão de +5 segundos
- Botão de +30 segundos
- Sensor de porta aberta
- Controle da luz interna 
- Sistema de potência
- Buzzer 

A seguir iremos detalhar um pouco mais como deve ser feito o protótipo e o que estará sendo avaliado.

## Micro-ondas

O funcionamento do micro-ondar é similar com qualquer outro, o usuário primeiramente precisa acrescentar um tempo utilizando os botões de `+5 segundos` ou `+10 segundos` (botões 3 e 2 do OLED). Se o usuário não adicionar um tempo novo durante o período de 3 segundos e a porta estiver fechada, o microondas comeca funcionar. Isso é indicado pelo LED 2 da placa OLED, que informa que o sistema de potência. O sistema de potência deve ficar aceso pelo tempo em que o sistema ficar ligado, e deve desligar passado o tempo ou se a portar for aberta.

A seguir detalhes do funcionamento:

![](diagrama.png)


- **Display OLED:** Exibe o tempo configurado pelo usuário, deve ser atualizado de segundo em segundo quando o micro-ondas estiver ligado. Por padrão deve exibir `00:00`.
- **Cronometro:** Deve ser o valor configurado pelo usuário, sendo que o valor máximo do segundo deve ser 60 e do minuto 60. 
- **Botão de +5 segundos:** Adiciona 5 segundos ao cronometro.
   - `OLED BUTTON 3`
   - Ação na borda de descida 
- **Botão de +10 segundos:** Adiciona 10 segundos ao cronometro.
   - `OLED BUTTON 2`
- **Sensor de porta aberta:** Em qualquer momento se a portar do micro-ondas for aberta o sistema de potência deve parar. Junto com ele o contador de tempo, a luz interna deve acender.
    - `OLED BUTTON 1`
    - Ação nas bordas: descida E subida
- **Potência:** Indica que o micro-ondas está ligado
    - `OLED LED 2`
    - Aceso: Micro-ondas ligado
    - Apagado: Micro-ondas desligado
- **Luz interna:** É a luz interna do Micro-ondas, acesa sempre que a porta estiver aberta ou o micro-ondas ligado
    - `OLED LED 1`
- **Buzzer:** Deve piscar até o usuário abrir a porta do micro-ondas, quando aberto o sistema deve parar de piscar.
    - `OLED LED 3`

## Extras

- Luz interna fica acesa por 15 segundos após o fim 
