let global_var = 1,
  counter = 0;
function getRandom() {
  counter = 0;
  global_var = Math.floor(Math.random() * 100);
  // console.log(global_var);
}

function Bool(flag) {
  document.getElementById("num").value = "";
  document.getElementById("num").disabled = flag;
  document.getElementById("submit").disabled = flag;
}
function guess() {
  let number = Number(document.getElementById("num").value);
  let answer = document.getElementById("answer");
  let range = document.getElementById("range");
  let previous_guess = document.getElementById("previous_guess");
  if (number > 100 && number < 0) return;
  counter++;
  if (counter == 1) {
    previous_guess.innerHTML += "Previous guess : ";
  }
  // console.log(typeof number, typeof global_var);
  if (number === global_var) {
    Bool(true);
    document.getElementById("num").value = 0;
    answer.innerHTML = "Congratulations! You Pick the right answer.";
    answer.style.color = "green";
    range.innerHTML = "";
    document.getElementById("restartGame").style.display = "block";
  } else if (counter == 10) {
    alert("Chances are done!");
    Bool(true);
    answer.innerHTML = "You  Lose the Game!!";
    answer.style.color = "red";
    range.innerHTML = "";
    document.getElementById("restartGame").style.display = "block";
  } else {
    answer.innerHTML = "You pick the wrong answer";
    answer.style.color = "red";
    if (number < global_var) range.innerHTML = "The value is low";
    else range.innerHTML = "The value is high";
  }
  previous_guess.innerHTML += String(number) + " ";
}

function restart() {
  let answer = document.getElementById("answer");
  answer.innerHTML = "";
  getRandom();
  let previous_guess = document.getElementById("previous_guess");
  previous_guess.innerHTML = " ";
  document.getElementById("restartGame").style.display = "none";
  Bool(false);
}
