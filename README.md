
# Digispark ATINY85 - Meus Scripts

Este repositório no GitHub foi criado com o objetivo de armazenar e divulgar os scripts desenvolvidos para o Digispark ATtiny85. O Digispark ATtiny85 é uma placa de desenvolvimento baseada no microcontrolador ATtiny85, que oferece uma solução compacta e versátil para projetos de automação, IoT e eletrônica em geral.

A criação deste repositório tem como objetivo principal proporcionar um espaço centralizado para o compartilhamento de scripts testados e funcionando para o Digispark ATtiny85. Ao disponibilizar esses scripts, esperamos facilitar o desenvolvimento de projetos e incentivar a colaboração entre os entusiastas e desenvolvedores da comunidade.

Os scripts armazenados neste repositório abrangem uma variedade de funcionalidades, desde projetos básicos até aplicações mais avançadas. Eles podem incluir exemplos de controle de LEDs, entre outros recursos comuns no desenvolvimento com o Digispark ATtiny85.

Além de ser um repositório de scripts, este espaço também busca servir como um local para compartilhar conhecimentos, dicas e truques relacionados ao Digispark ATtiny85. Acreditamos que a colaboração e o compartilhamento de informações são fundamentais para o avanço da comunidade de desenvolvimento do Digispark ATtiny85.

Convidamos entusiastas, desenvolvedores e interessados em eletrônica a explorar, contribuir e utilizar os scripts disponíveis neste repositório. Sinta-se à vontade para clonar o repositório, experimentar os scripts, fazer modificações e enviar suas próprias contribuições para aprimorar o projeto. Juntos, podemos impulsionar o desenvolvimento e a inovação na área do Digispark ATtiny85.

Agradecemos antecipadamente a todos os colaboradores que participarem deste projeto. Se você tiver alguma dúvida, sugestão ou precisar de ajuda, não hesite em abrir uma issue neste repositório. Estamos ansiosos para ver os projetos incríveis que serão desenvolvidos usando esses scripts!

Divirta-se programando com o Digispark ATtiny85!

## FAQ

#### Questão 1 - Como preparar meu ambiente de desenvolvimento?

Instalar os drivers do arduino
https://github.com/digistump/DigistumpArduino/releases

Instalar a IDE do arduino
https://www.arduino.cc/en/main/software

Abra a IDE e vá para o menu File -> Preferences. Insira a URL abaixo no campo Additional Boards Manager URLs
http://digistump.com/package_digistump_index.json

Assim que concluído, vá para o menu Board -> Boards Manager. Clique no campo de pesquisa e digite Digistump AVR Boards. O pacote irá aparece abaixo e então clique no botão para instalar.

Antes de você iniciar qualquer programa é importante ir até o menu Tools -> Board. Navegue para baixo até que ver a opção Digispark (Default — 16.5mhz) e então a selecione.

Para precaução, vá até o menu Tools > Programmer e altere para a opação USBtinyISP

Passo-a-passo, originalmente em inglês, disponível no link abaixo:

https://digistump.com/wiki/digispark/tutorials/connecting

#### Questão 2 - Onde comprar o Digispark?

Sites da China 
https://pt.aliexpress.com/
https://shopee.com.br/

Sites no Brasil
https://www.kabum.com.br/
https://www.amazon.com.br/
https://www.mercadolivre.com.br/

Se você for de São Paulo e quiser dar um pulo na Rua Vitória do bairro Santa Ifigênia tem várias lojas de eletrônicos com preço bom.
https://www.mamuteeletronica.com.br/
https://www.saravati.com.br/
https://www.pontodaeletronica.com.br/


#### Questão 3 - Qual será o ambiente atacado e sua configuração básica de defesa?

Aqui abordaremos ataques em uma máquina com o windows 10 e com microsoft defender ativo e atualizado.



## Scripts 

- OlaMundo.ino - Digita Olá Mundo em um bloco de notas.
- TesteTecladoPtBr.ino - Digitando todas as teclas de um teclado no formato PtBr.
- ForkBomb - Digita um simples fork bomb, este código tem a função e a capacidade de se replicar indefinidamente até travar o PC.
- ForkBombPersistent - Cria um arquivo .bat com um simples fork bomb e registra na inicialização do windows.

## Configurando o teclado 

Utilizamos um include do script DigiKeyboardPtBr.h em todos scripts para configuração do teclado PtBr.


## Referência e Créditos

Links de autores e conteúdos utilizados como base para o desenvolvimento e estudos

 - [Gadotti](https://github.com/Gadotti/DigisparkScripts)
 - [CedArctic](https://github.com/CedArctic/DigiSpark-Scripts)
 - [m6sser](https://github.com/m6sser/Digispark_scripts)
 - [digistump](https://github.com/digistump/DigisparkArduinoIntegration)
 - [S1700](https://github.com/S1700/Digispark_scripts)
 - [elementalsouls](https://github.com/elementalsouls/DIGISPARK)
## Autor

- [@brunomlima](https://github.com/brunomlima)


## DISCLAIMER:

Este repositório destina-se exclusivamente a fins educacionais e de pesquisa. Os scripts disponibilizados aqui são fornecidos "no estado em que se encontram" e sem garantias de qualquer tipo, sejam expressas ou implícitas.

O criador deste repositório não se responsabiliza pelo uso indevido ou ilegal dos scripts presentes neste repositório. Os scripts são disponibilizados com a intenção de fornecer exemplos e facilitar o desenvolvimento de projetos utilizando o Digispark ATtiny85. No entanto, é responsabilidade do usuário garantir que o uso dos scripts esteja em conformidade com todas as leis e regulamentos aplicáveis.

Ao utilizar os scripts deste repositório, você concorda em assumir total responsabilidade pelos seus atos e isenta o criador do repositório de qualquer responsabilidade por danos, perdas ou consequências decorrentes do uso dos scripts.

Recomenda-se sempre obter as autorizações necessárias e agir de acordo com as leis e regulamentos locais ao utilizar esses scripts para quaisquer fins. Este repositório não encoraja o uso ilegal ou malicioso dos scripts.

Se tiver dúvidas sobre a legalidade do uso de qualquer script ou se precisar de orientações adicionais, é altamente recomendável consultar um profissional qualificado ou especialista no assunto.

Ao utilizar este repositório, você concorda com os termos deste disclaimer e assume total responsabilidade por suas ações.





