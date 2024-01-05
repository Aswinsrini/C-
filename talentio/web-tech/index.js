let global_var = 1;
function getRandom() {
  global_var = Math.floor(Math.random() * 100);
  console.log(global_var);
}

function guess() {
  let number = Number(document.getElementById("num").value);
  let answer = document.getElementById("answer");
  let range = document.getElementById("range");

  if (number == global_var) {
    document.getElementById("num").disabled = true;
    document.getElementById("submit").disabled = true;
    answer.innerHTML = "Congratulations! You Pick the right answer.";
    answer.style.color = "green";
    range.innerHTML = "";

    let button = document.createElement("button");
    button.innerText = "Restart Game!";
    button.id = "Game";
  } else {
    answer.innerHTML = "You pick the worng answer";
    answer.style.color = "red";
    if (number < global_var) range.innerHTML = "The value is low";
    else range.innerHTML = "The value is high";
  }
  let previous_guess = document.getElementById("previous-guess");
  previous_guess.innerHTML += String(number) + " ";
}
