let carro;
let coqueiro;
let x=10;
let condicao = false;
let decerCarro = false;
let nadar;
function preload() {

    
  carro= loadImage('GIF/carro.gif');
  coqueiro = loadImage('img/imgParaCanva/coqueiro.png');
  nadar = loadImage('GIF/nadar.gif');
}


function setup() {
  createCanvas(800, 600);

}
function mouseClicked() {
if (mouseX < 250) {
   condicao = true;
  }else if (mouseX > 250) {
 condicao = false;
  }
  if(mouseX >650 && mouseX <750 && mouseY > 550 && mouseY <570){

    decerCarro = true;
  }
   if(mouseX >100 && mouseX <150 && mouseY > 550 && mouseY <570){

    decerCarro = false;
  }



   
}
function draw() {

  
   background(135, 206, 235);
 fill(255, 223, 0);
 circle(700, 100, 100);


 // ir para praia


 // mar
 stroke(255);  
  fill(0, 119, 190);
 rect(0, 250, width, 200)

// areia 

   fill(245, 222, 179);
 rect(0, 300, 800, 100)


 // rua 

    fill(128, 128, 128);
     rect(0, 400, 800, 400)

   // linhas da pista
    if (condicao == false) {
  for (let i = 0; i < 10; i++) {

    let pos = (x + i * 120) % 800;

    line(pos, 500, pos + 80, 500);
  }
 
    x += 3;

   
     // carro

 image(carro, 500, 400, 100, 100);
  
}

else{
     for (let i = 0; i < 10; i++) {

    let pos = (x + i * 120) % 800;

    line(pos, 500, pos + 80, 500);
  }
 
    x += 10;

   
     // carro

 image(carro, 500, 400, 100, 100);
    
}
 fill(255, 223, 0);
 rect(650, 550, 80, 20);
 textSize(12);
 fill(255);
 text("Ir para praia", 660, 565);
 fill(255, 223, 0);
  rect(100, 550, 50, 20);

      //======================= ir para praia    ============================= 
 if(decerCarro == true){
  background(135, 206, 235);
  fill(255, 223, 0);
 circle(700, 100, 100);
   // mar
 stroke(255);  
  fill(0, 119, 190);
 rect(0, 250, width, 300)

// areia 

   fill(245, 222, 179);
 rect(0, 400, 800, 500);
 image(coqueiro, 50, 380, 200, 200);
  image(coqueiro, 580, 380, 200, 200);
  fill(255, 223, 0);
  rect(100, 550, 50, 20);
  textSize(12);
 fill(255);
 text("Voltar", 110, 565);
  image(nadar, 500, 250, 100, 100);
 }
}
