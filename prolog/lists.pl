size([],0).
size([_|T],N):-size(T,N1), N is N1+1.

memberSHIP(X,[X|_]).
memberSHIP(X,[_|T]):-member(X,T).

sum_list([],0).
sum_list([H|T],N):-sumlist(T,N1),N is N1+H.
