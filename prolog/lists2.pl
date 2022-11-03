// to find out the number of elements in the list.
sizer([],0).
sizer([_|T],N):- size(T,N1),N is N1+1.

// To sum the elements of the list.
sumlist1([],0).
sumlist1([H|T],N):-sumlist(T,N1),N is N1+H.

// to check if any number is a member of the list or not
members(X,[X|_]).
members(X,[_|Y]):-member(X,Y).

// to check if a given list is sorted or not
is_sortedL([]).
is_sortedL([_]).
is_sortedL([X,Y|T]):-X=<y,is_sorted([Y|T]).

// to joint two lists.
append1([],L2,L2).
append1([H|T],L2,[H|L3]):-append(T,L2,L3).

