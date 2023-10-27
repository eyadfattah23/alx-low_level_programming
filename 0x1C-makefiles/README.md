# 0x1C. C - Makefiles

## documentation:

https://www.gnu.org/software/make/manual/html_node/

## easy tutorial:

https://www.youtube.com/watch?v=yWLkyN_Satk

## main syntax:

```makefile
	targets : prerequisites(depedencies)
	recipe(action)
```

$@ is used as the output file, which represents the target of the rule (the object file)

$@ automatic variable as the first dependency in the compilation command

%.o: %.c: This line is a pattern rule that defines how to build any object file ending with .o from the corresponding source file ending with .c. It uses a wildcard pattern % to match any file name.
