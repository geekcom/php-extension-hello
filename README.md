# Hello World - A PHP Unix Extension

How to compile and test:

* phpize
* `./configure --with-php-config=/usr/local/bin/php-config`
* make
* make install
* `php -d extension=hello.so -r 'hello();'`


geekcom@php.net