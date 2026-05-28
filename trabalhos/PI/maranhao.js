let carro;
let x=10;
let condicao = false;
function preload() {

    
  carro= loadImage('GIF/carro.gif');
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
    
}
function draw() {

  
   background(135, 206, 235);
 fill(255, 223, 0);
 circle(700, 100, 100);


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

}
