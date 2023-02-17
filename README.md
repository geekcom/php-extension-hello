# Hello World - A PHP Unix Extension

With docker and docker-compose installed:

* `docker-compose up -d`
* `docker exec -it php82 bash`

How to compile and test:

* `docker exec -it php82 phpize`
* `docker exec -it php82 ./configure`
* `docker exec -it php82 make`
* `docker exec -it php82 make test TESTS=tests/hello.phpt`
* `docker exec -it php82 make install`
* `docker exec -it php82 php -d extension=hello.so -r 'hello();'`


geekcom@php.net