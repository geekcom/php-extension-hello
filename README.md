# Hello World - A PHP Unix Extension
_https://www.phpinternalsbook.com/index.html_

With docker and docker-compose installed run:

* `docker-compose up -d`

How to compile and test:

* `docker exec -it php phpize`
* `docker exec -it php ./configure`
* `docker exec -it php make`
* `docker exec -it php make test TESTS=tests/hello.phpt`
* `docker exec -it php make install`
* `docker exec -it php php -d extension=hello.so -r 'hello();'`


geekcom@php.net