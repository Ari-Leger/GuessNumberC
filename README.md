# GuessNumberC
**Algorithm**
main (): 
    make a 20-character array userName
    make an integer called guesser
    make an integer called correct, and have it generate a random number 1-100
    make an integer called turns and start it at 0 
    make an integer called KeepGoing start true.
    
    
    Generate an internal number 1-100, and set that number to correct. 
    prompt user to insert their name.
    greet the user - "Hello -User-, Want to play a game?"
    
  while keepGoing = true:
    increment turns
    ask user to answer say a number 1-100
    if number > correct:
      tell them "too high"
    else number < correct
      tell them "too low"
    else number = correct
      tell them "you win!"
      set keepGoing = FALSE

  Evaluate the performance. 
    if turns < 7:
      tell them "Wow! good job!"
    else turns > 7: 
      tell them "Yikes, that is not good."
    else turns = 7 
      tell them "that average. not bad"
