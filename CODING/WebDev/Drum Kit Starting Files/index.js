// higher order functions are functions which can take input of other functions as inputs

var numberofDrumbuttons = document.querySelectorAll(".drum").length;
for (var i = 0; i < numberofDrumbuttons; i++) {

//addEventListener(type, listener)  type  - A case sentitive string repr event type  || listner - callback
document.querySelectorAll(".drum")[i].addEventListener("click", function() {
     var buttonInnerHTML = this.innerHTML; 
    // alert("I got clicked !");
    // var audio = new Audio("sounds/tom-1.mp3"); // creating html audio element
    // audio.play(); 

    // this.style.color = "white";

    

        makeSound(buttonInnerHTML);
   })

};



document.addEventListener("keydown" , function(event) {
   makeSound(event.key);
   // switch statement - better than if else ladders
    /*  switch (express.) {
    case expression:
    break;

    default :
    }
    */
});
   function makeSound(key) {
   switch (key){
      case "w":
        var tom1 = new Audio("sounds/tom-1.mp3"); // creating html audio element
        tom1.play(); 
        break;

      case "a":
        var tom2 = new Audio("sounds/tom-2.mp3"); // creating html audio element
        tom2.play(); 
        break;
      case "s":
        var tom3 = new Audio("sounds/tom-3.mp3"); // creating html audio element
        tom3.play(); 
        break;
      case "d":
        var tom4 = new Audio("sounds/tom-4.mp3"); // creating html audio element
        tom4.play(); 
        break;
      case "j":
        var snare = new Audio("sounds/snare.mp3"); // creating html audio element
        snare.play(); 
        break;
      case "k":
        var crash = new Audio("sounds/crash.mp3"); // creating html audio element
        crash.play(); 
        break;
      case "l":
        var kick = new Audio("sounds/kick.mp3"); // creating html audio element
        kick.play(); 
        break;

        default: console.log(key);

   }
}



function buttonAnimation(currentKey) {

  var activeButton = document.querySelector("." + currentKey);

  if (activeButton) {   // Prevents error if wrong key pressed

    activeButton.classList.add("pressed");

    setTimeout(function () {
      activeButton.classList.remove("pressed");
    }, 100);  // 100ms animation

  }
}

