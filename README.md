*This project has been created as part of the 42 curriculum by ymouafak*

## Description :
- In this project we dived into the world of sorting algorithms.
- you might say *how does push_swap make it interesting?*. Well we only were allowed to use certain moves in the sorting process.
- also you might add *what are we sorting?*
we are sorting what is called a stack of integers. that we will take care of filling it as the first step of this project aka parsing.
- in this project i used Turk algo just in case you were wondering.
- also as a bonus step we did make a checker program.
## Instruction :
#### - Compiling with make:
- Run *"make"* / *"make bonus"* if u want to compile also the bonus part.
#### - Testing the push_swap program:
- Run "$>ARG="< 3 / 100 / 500 random values>"; ./push_swap $ARG | ./checker_linux $ARG"
and replace the placeholder by random valid values. Check that the given checker program displays "OK" and that the size of the list of instructions is within the limit.
#### - Testing the checker program:
- Run "./checker < random values >". it will then take the operations you gave it as input. and check if they are valid for sorting the stack. if so it returns "OK" else it returns "KO"
## Resources:
- The first step was to get familiar with implementing stacks with linked lists . [Stack - Linked List Implementation](https://www.geeksforgeeks.org/dsa/implement-a-stack-using-singly-linked-list/)
- Turk algorithm: this algo was mainly explained to me by my peers. there was some sites where i used it to have a clue about the algo. like [Push_Swap Turk algorithm explained in 6 steps](https://pure-forest.medium.com/push-swap-turk-algorithm-explained-in-6-steps-4c6650a458c0)
- AI usage: as there is no concept that we have to dive deep into in this project. AI was used only for testing and generating scripts to test the number of operations if they are above the limit, also explaining some certain parts of the Turk algo.
