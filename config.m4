PHP_ARG_ENABLE([hello],
  [Whether to enable the Hello extension],
  [ --enable-hello Enable Hello])

if test "$HELLO" != "no"; then
  PHP_NEW_EXTENSION(hello, hello.c, $ext_shared)
fi
