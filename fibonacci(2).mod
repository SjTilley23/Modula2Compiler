MODULE FibDemo;

VAR
  i, n : INTEGER;
  fib : ARRAY [0 .. 19] OF INTEGER;

BEGIN
  WRITE("How many terms? ");
  READ(n);

  fib[0] := 0;
  fib[1] := 1;

  FOR i := 2 TO n - 1 DO
    fib[i] := fib[i - 1] + fib[i - 2]
  END;

  FOR i := 0 TO n - 1 DO
    WRITE(fib[i]);
    WRITELN
  END
END FibDemo.
