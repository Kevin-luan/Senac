// =====================================================
// VARIÁVEIS
// =====================================================

// GIF do carro
let carro;

// Imagem dos coqueiros
let coqueiro;

// GIF da pessoa nadando
let nadar;

// Imagem da nuvem
let nuvem;

// imagem par a plca para ir pra outra cidade 

let placa1;
let con = 0;


// =====================================================
// CONTROLE DA ANIMAÇÃO
// =====================================================

// Movimento das linhas da pista
let x = 10;

// Controle de velocidade
let condicao = false;

// Controle tela praia
let decerCarro = false;


// =====================================================
// CONTROLE DAS NUVENS
// =====================================================

let nuvem1 = false;
let nuvem2 = false;
let nuvem3 = false;


// =====================================================
// POSIÇÃO DOS TEXTOS
// =====================================================

let textoY = 100;
let textoY2 = 100;
let textoY3 = 100;


// =====================================================
// PRELOAD
// Carrega imagens
// =====================================================

function preload() {

  carro = loadImage('GIF/carro.gif');

  coqueiro = loadImage('img/imgParaCanva/coqueiro.png');

  nadar = loadImage('GIF/nadar.gif');

  nuvem = loadImage('img/imgParaCanva/nuvem.png');


  placa1 = loadImage('img/imgParaCanva/placa1.png');

}


// =====================================================
// SETUP
// =====================================================

function setup() {

  createCanvas(800, 600);

}


// =====================================================
// CLICK DO MOUSE
// =====================================================

function mouseClicked() {

  // =========================
  // VELOCIDADE
  // =========================

  if (
    mouseX > 30 && mouseX < 180 &&
    mouseY > 300 && mouseY < 400
  ) {

    condicao = true;

  }


  // =========================
  // IR PRAIA
  // =========================

  if (
    mouseX > 650 && mouseX < 750 &&
    mouseY > 550 && mouseY < 570
  ) {

    decerCarro = true;

  }


  // =========================
  // VOLTAR
  // =========================

  if (
    mouseX > 100 && mouseX < 150 &&
    mouseY > 550 && mouseY < 570
  ) {

    decerCarro = false;

  }


  // =========================
  // NUVEM 1
  // =========================

  if (
    mouseX > 50 && mouseX < 150 &&
    mouseY > 10 && mouseY < 110
  ) {

    nuvem1 = true;

  }


  // =========================
  // NUVEM 2
  // =========================

  if (
    mouseX > 300 && mouseX < 400 &&
    mouseY > 10 && mouseY < 110
  ) {

    nuvem2 = true;

  }


  // =========================
  // NUVEM 3
  // =========================

  if (
    mouseX > 600 && mouseX < 700 &&
    mouseY > 10 && mouseY < 110
  ) {

    nuvem3 = true;

  }

}


// =====================================================
// DRAW
// =====================================================

function draw() {

  // =========================
  // CÉU
  // =========================

  background(135, 206, 235);


  // =========================
  // SOL
  // =========================

  fill(255, 223, 0);

  circle(700, 100, 100);


  // =========================
  // MAR
  // =========================

  stroke(255);

  fill(0, 119, 190);

  rect(0, 250, width, 200);


  // =========================
  // AREIA
  // =========================

  fill(245, 222, 179);

  rect(0, 300, 800, 100);
  image(placa1, 30, 300, 180, 100);
  fill(255);
  textSize(20);

  text("Amazonas", 65, 330);



  // =========================
  // RUA
  // =========================

  fill(128, 128, 128);

  rect(0, 400, 800, 400);


  // =========================
  // LINHAS DA PISTA
  // =========================

  for (let i = 0; i < 10; i++) {

    let pos = (x + i * 120) % 800;

    line(pos, 500, pos + 80, 500);

  }


  // =========================
  // VELOCIDADE DA RUA
  // =========================

  if (condicao == true) {
    x += 10;

    setTimeout(() => {

      window.location.href = "amazonas.html";

    }, 10000);


  } else {

    x += 3;

  }

  image(placa1, 30, 500, 180, 100);

  fill(255);
  textSize(20);

  text("   Bahia", 65, 550);

  if (mouseX > 30 && mouseX < 210 && mouseY > 500 && mouseY < 600) {

    text("Mouse em cima da placa!", 300, 100);
    setTimeout(() => {
      window.location.href = "/Trabalho_PI_parteKauan/Trabalho%20PI/Trabalho%20PI/pagina_BA.html";
    }, 5000);
    x += 10;
  }


  // =========================
  // CARRO
  // =========================

  image(carro, 500, 400, 100, 100);


  // =========================
  // BOTÃO PRAIA
  // =========================

  fill(255, 223, 0);

  rect(650, 550, 80, 20);

  textSize(12);

  fill(255);

  text("Ir para praia", 660, 565);


  // =====================================================
  // TELA PRAIA
  // =====================================================

  if (decerCarro == true) {

    // =========================
    // FUNDO PRAIA
    // =========================

    background(135, 206, 235);

    fill(255, 223, 0);

    circle(700, 100, 100);


    // =========================
    // MAR
    // =========================

    stroke(255);

    fill(0, 119, 190);

    rect(0, 250, width, 300);


    // =========================
    // AREIA
    // =========================

    fill(245, 222, 179);

    rect(0, 400, 800, 500);


    // =========================
    // COQUEIROS
    // =========================

    image(coqueiro, 50, 380, 200, 200);

    image(coqueiro, 580, 380, 200, 200);


    // =========================
    // BOTÃO VOLTAR
    // =========================

    fill(255, 223, 0);

    rect(100, 550, 50, 20);

    textSize(12);

    fill(255);

    text("Voltar", 110, 565);


    // =========================
    // NADADOR
    // =========================

    image(nadar, 500, 250, 100, 100);


    // =====================================================
    // NUVEM 1
    // =====================================================

    image(nuvem, 50, 10, 100, 100);

    if (nuvem1 == true) {

      textSize(20);

      fill(0);

      text(
        "Os Lençóis Maranhenses possuem\nlagoas entre as dunas!",
        100,
        textoY
      );

      // Faz texto cair
      textoY += 0.52;

      // Para animação
      if (textoY > 300) {

        nuvem1 = false;

      }

    }


    // =====================================================
    // NUVEM 2
    // =====================================================

    image(nuvem, 300, 10, 100, 100);

    if (nuvem2 == true) {

      textSize(20);

      fill(0);

      text(
        "A culinária maranhense mistura culturas\nindígenas e africanas!",
        300,
        textoY2
      );

      textoY2 += 0.52;

      if (textoY2 > 300) {

        nuvem2 = false;

      }

    }


    // =====================================================
    // NUVEM 3
    // =====================================================

    image(nuvem, 600, 10, 100, 100);

    if (nuvem3 == true) {

      textSize(20);

      fill(0);

      text(
        "O Maranhão fica\nna região Nordeste\ndo Brasil!",
        600,
        textoY3
      );

      textoY3 += 0.52;

      if (textoY3 > 300) {

        nuvem3 = false;

      }

    }

  }

}