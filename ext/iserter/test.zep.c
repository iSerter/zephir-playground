
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Iserter_Test) {

	ZEPHIR_REGISTER_CLASS(Iserter, Test, iserter, test, iserter_test_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Iserter_Test, hello) {

	

	php_printf("%s", "hello from iSerter");

}

