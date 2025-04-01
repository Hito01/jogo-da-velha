<h1>
  Jogo da Velha Desenvolvido na <i></i>Linguagem de Programação em C</i>
</h1>

<p>
  O jogo foi desenvolvido baseando-me no livro que estou estudando: <em><b>&ldquo;C Completo Total&rdquo;</b>.</em>
</p>

<p>
  Mesmo sendo algo baseado resolvi implementar certos comportamentos que no código original não tinha. Uma das coisas que resolvi fazer, já que no código original todo o comportamento é feito dentro de um único arquivo, porém, decidi que tinha que <i>particionar o código, ou seja, as funções todas pus dentro de um arquivo de cabeçalho chamado &ldquo;jogar.h&rdquo;</i>. O arquivo vocês poderão encontrar entre os arquivos que compõem esse <b>repositório.</b>
</p>

<p>
  <b>Outra coisa que resolvi acrescentar:</b>
<ol>
  <li>
    No código original, apenas era permitido o usuário jogar com o <b>Computador</b>
  </li>
  <h4>
    Incrementos feitos por mim:
  </h4>
  <ul>
    <li>Acrescentei o <b>Menu de opções.</b> Neste Menu de opções é dada a oportunidade ao usuário de escolher se quer jogar com o <b>Computador</b>;
    </li>
    <li>
      É dada a possibilidade, também, ao usuário escolher se quer jogar com um outro <u><b>Jogador</b>;
    </li>
  <li>
    E a 3ª, e última, possibilidade é a de o usuário <b>Encerrar o jogo</b>.
  </li>
</ol>
</p>

<h2>Outras coisas que faltam implementar</h2>

<ul>
  <li>
  Quando é determinado o vencedor ou o perdedor, dar a chance ao Jogador se ele quer ou não continuar.
  </li>
</ul>

<p>
  <em>Já estamos trabalhando nesta funcionalidade. A propósito, se vocês abrirem e notarem bem, perceberão que já existe uma função que trata deste assunto. O nome da função é: </em> <code>carry_on_play();</code>. Cujo seu esqueleto é: <code>char carry_on_play(void);</code>.
</p>

<p>Implementaremos esta funcionalidade dentro em breve!</p>

<p>Um bom dia de código para vocês!</p>
