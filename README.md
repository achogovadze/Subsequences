If S and T are strings, we say that S is a subsequence of T if all of the letters of S appear in T in the
same relative order that they appear in S. For example, the string pin is a subsequence of the string
programming, and the string singe is a subsequence of springtime. However, steal is not a subsequence
of least, since the letters are in the wrong order, and i is not a subsequence of team because
there is no i in team. The empty string is a subsequence of every string, since all 0 characters of the
empty string appear in the same relative order in any arbitrary string. 
bool isSubsequence(string text, string subseq)
is function that accepts as input two strings and returns whether the second string is a subsequence of the first.
Solution is recursive and does not use any loops (e.g. while, for).