/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Daniel Rodrigues <geekcom@php.net>                           |
   +----------------------------------------------------------------------+
*/

#include <php.h>
#include "hello.h"

zend_function_entry hello_functions[] = {
        PHP_FE(hello, NULL)
        { NULL, NULL, NULL }
};

zend_module_entry hello_module_entry = {
        STANDARD_MODULE_HEADER,
        HELLO_EXTNAME,
        hello_functions,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        HELLO_VERSION,
        STANDARD_MODULE_PROPERTIES
};

ZEND_GET_MODULE(hello)

PHP_FUNCTION(hello) {
        php_printf("Hello World! (from our extension)\n");
}
