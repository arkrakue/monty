[
    This Brainfuck program reads two digits from stdin,
    multiplies them, and prints the result followed by a new line.
]

> Read first digit from stdin
,
> Set up loop to subtract 48 from first digit
>++++++[<-------->-]
> Read second digit from stdin
,
< Set up loop to multiply first and second digits
[
    >[>+>+<<-]>>[<<+>>-]
    >>>++++++++++
    <<[->+>-[>+>>]>[+[-<+>]>+>>]<<<<<<]
    >[-]>>[<<+>>-]<[>+<-]<-
]
> Print result
>>.[-]
<< Set up loop to add 10 to fourth cell
[
    >>+>+<<<-
    >>>[<<<+>>>-]
    <<++++++++++
]
< Print newline character
<[->-[>+>>]>[+[-<+>]>+>>]<<<<<]>[-]+>>[<<->>-]<<[<+>-]<.

