# Hello World - A PHP Unix Extension

With docker and docker-compose installed:

* `docker-compose up -d`
* `docker exec -it php74 bash`

How to compile and test:

* `phpize`
* `./configure`
* `make`
* `make test TESTS=tests/hello.phpt`
* `make install`
* `php -d extension=hello.so -r 'hello();'`


geekcom@php.net