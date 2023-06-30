
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

Instalar a IDE do arduino em português do Brasil (Versão 2.1.0)
https://www.arduino.cc/en/main/software

Abra a IDE e vá para o menu Arquivo -> Prefererências. 
Insira a URL abaixo no campo URLs do Gerenciador de Placas Adicionais
https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json

Assim que concluído, vá para o menu Ferramentas -> Placa -> Gerenciador de placas.. ou (Ctrl + Shift + B). 
Clique no campo de pesquisa e digite Digistump AVR Boards. O pacote irá aparece abaixo e então clique no botão para instalar.

Antes de você iniciar qualquer programa é importante ir até o menu Ferramentas -> Placa -> Digistump AVR Board 
Selecione a opção Digispark (Default — 16.5mhz).

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

Aqui abordaremos ataques em uma máquina com o Sistema Operacional Windows 10 Pro 64bit e com Microsoft Defender ativo e atualizado.



## Scripts 

- [OlaMundo.ino](https://github.com/brunomlima/Digispark/tree/main/OlaMundo) - Digita Olá Mundo em um bloco de notas.
- [TesteTecladoPtBr.ino](https://github.com/brunomlima/Digispark/tree/TesteTecladoPtBr) - Digitando todas as teclas de um teclado no formato PtBr.
- [ForkBomb.ino](https://github.com/brunomlima/Digispark/tree/ForkBomb) - Digita um simples fork bomb, este código tem a função e a capacidade de se replicar indefinidamente até travar o PC.
- [ForkBombPersistent.ino](https://github.com/brunomlima/Digispark/tree/ForkBombPersistent) - Cria um arquivo .bat com um simples fork bomb e registra na inicialização do windows, na sequência executa um fork bomb. Atenção: caso você tenha executado este script sem querer na sua máquina, siga o passo a passo descrito no script RemoveForkBomPersistent.
- [RemoveForkBombPersistent.ino](https://github.com/brunomlima/Digispark/tree/RemoveForkBombPersistent) - Remover da inicialização o arquivo .bat do fork bomb. Atenção :  Para que você consiga executar o script, primeiro desabilite o fork da inicialização do Windows, seguindo esse passo a passo - digite: ctrl + shift + esc, clique na aba inicializar, botão direito no fork e escolha a opção desabilitar, tudo pronto para executar o script.
- [DesconfiguraMouse.ino](https://github.com/brunomlima/Digispark/tree/DesconfiguraMouse) - Abre as Propriedades do Mouse, alterna botões primários e secundários, altera a velocidade do clique duplo para lenta, exibe trilhas de ponteiro,a velocidade do ponteiro para a configuração mais baixa possível, aumenta o incremento de rolagem vertical para 100 linhas.
- [PegadinhaIconeNaoFunciona.ino](https://github.com/brunomlima/Digispark/tree/PegadinhaIconeNaoFunciona) - Captura de tela da área de trabalho, define-a como papel de parede e oculta os ícones da área de trabalho.
- [BackDoorBlanka.ino](https://github.com/brunomlima/Digispark/tree/BackDoorBlanka) - Cria uma conta com privilégios de administrador com o nome blanka e passwd Ping@123. Também oculta a tela de login e
ativa a área de trabalho remota para ser acessível a partir de um local remoto.
- DownloadScriptOlaMundo - Este script efetua download e executa o script ScriptOlaMundo.ps1 publicado no https://gist.githubusercontent.com isso irá apresentar na tela do powershell uma mensagem  "Hello, World!".
- DesabilitaWindowsDefender - Este script abre o powersheel como administrador, desabilita o windows defender e o firewall.
- [ReverseShell.ino](https://github.com/brunomlima/Digispark/tree/ReverseShell) - Este script efetua download e executa o script ReverseShell.ps1 publicado no https://gist.githubusercontent.com isso irá abrir o reverse shell na máquina da vítima.
Obs.: Uma melhoria que pode ser implementada neste script seria utilizar o https://ngrok.com/ para acessar a máquina da vítima na internet e registrar na inicialização do windows o script ReverseShell.ps1.
Atenção: Da máquina hacker para a máquina da vítima que estiverem na mesma rede (Exemplo: 192.168.1.104:4444) devemos utilizar os comandos abaixo
    ```
    cd c:\Hacker\netcat-win32-1.12 
    nc.exe -lvnp 4444
    ```
    Não tem o NETCAT? Baixe aqui [eternallybored](https://eternallybored.org/misc/netcat/)

- [BackDoorSSHWin10.ino](https://github.com/brunomlima/Digispark/tree/BackDoorSSHWin10) - Este script efetua download e executa o script Install-OpenSSH.ps1 publicado no https://gist.githubusercontent.com isso irá instalar e configurar o Open SSH na máquina da vítima e será possível acessar remotamente na mesma rede via programa putty.
Obs.: Uma melhoria que pode ser implementada nos script Install-OpenSSH.ps1 é a alteração da porta padrão 21 para ex: 2121 e configurar usuario e chave publica enviando essas informações por e-mail.

    Não tem o PUTTY? Baixe aqui [putty](https://www.putty.org/)

- InstallSKGBr.ino - Este script efetua o download e a instalação do software SKGBr, para saber mais acesse [SKGBr](https://github.com/brunomlima/SKGBr)

## Configurando o teclado brasileiro

Utilizamos um include do script DigiKeyboardPtBr.h em todos scripts para configuração do teclado PtBr.


## Referência e Créditos

Links de autores e conteúdos utilizados como base para o desenvolvimento e estudos

 - [Gadotti](https://github.com/Gadotti/DigisparkScripts)
 - [CedArctic](https://github.com/CedArctic/DigiSpark-Scripts)
 - [m6sser](https://github.com/m6sser/Digispark_scripts)
 - [digistump](https://github.com/digistump/DigisparkArduinoIntegration)
 - [S1700](https://github.com/S1700/Digispark_scripts)
 - [elementalsouls](https://github.com/elementalsouls/DIGISPARK)
 - [extide](https://github.com/extide/Install-OpenSSH/blob/main/Install-OpenSSH.ps1#L129)
 
## Autor

- [@brunomlima](https://github.com/brunomlima)


## DISCLAIMER:

Este repositório destina-se exclusivamente a fins educacionais e de pesquisa. Os scripts disponibilizados aqui são fornecidos "no estado em que se encontram" e sem garantias de qualquer tipo, sejam expressas ou implícitas.

O criador deste repositório não se responsabiliza pelo uso indevido ou ilegal dos scripts presentes neste repositório. Os scripts são disponibilizados com a intenção de fornecer exemplos e facilitar o desenvolvimento de projetos utilizando o Digispark ATtiny85. No entanto, é responsabilidade do usuário garantir que o uso dos scripts esteja em conformidade com todas as leis e regulamentos aplicáveis.

Ao utilizar os scripts deste repositório, você concorda em assumir total responsabilidade pelos seus atos e isenta o criador do repositório de qualquer responsabilidade por danos, perdas ou consequências decorrentes do uso dos scripts.

Recomenda-se sempre obter as autorizações necessárias e agir de acordo com as leis e regulamentos locais ao utilizar esses scripts para quaisquer fins. Este repositório não encoraja o uso ilegal ou malicioso dos scripts.

Se tiver dúvidas sobre a legalidade do uso de qualquer script ou se precisar de orientações adicionais, é altamente recomendável consultar um profissional qualificado ou especialista no assunto.

Ao utilizar este repositório, você concorda com os termos deste disclaimer e assume total responsabilidade por suas ações.





