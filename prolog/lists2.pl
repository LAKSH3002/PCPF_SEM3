sizer([],0).
sizer([_|T],N):- size(T,N1),N is N1+1.

sumlist1([],0).
sumlist1([H|T],N):-sumlist(T,N1),N is N1+H.

members(X,[X|_]).
members(X,[_|Y]):-member(X,Y).

is_sortedL([]).
is_sortedL([_]).
is_sortedL([X,Y|T]):-X=<y,is_sorted([Y|T]).

append1([],L2,L2).
append1([H|T],L2,[H|L3]):-append(T,L2,L3).

