
extern zend_class_entry *iserter_utils_collection_ce;

ZEPHIR_INIT_CLASS(Iserter_Utils_Collection);

PHP_METHOD(Iserter_Utils_Collection, __construct);
PHP_METHOD(Iserter_Utils_Collection, count);
PHP_METHOD(Iserter_Utils_Collection, push);
PHP_METHOD(Iserter_Utils_Collection, pull);
PHP_METHOD(Iserter_Utils_Collection, pop);
PHP_METHOD(Iserter_Utils_Collection, offsetSet);
PHP_METHOD(Iserter_Utils_Collection, offsetExists);
PHP_METHOD(Iserter_Utils_Collection, offsetUnset);
PHP_METHOD(Iserter_Utils_Collection, offsetGet);
PHP_METHOD(Iserter_Utils_Collection, rewind);
PHP_METHOD(Iserter_Utils_Collection, current);
PHP_METHOD(Iserter_Utils_Collection, key);
PHP_METHOD(Iserter_Utils_Collection, next);
PHP_METHOD(Iserter_Utils_Collection, valid);
zend_object_value zephir_init_properties_Iserter_Utils_Collection(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_iserter_utils_collection___construct, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, data, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_iserter_utils_collection_push, 0, 0, 1)
	ZEND_ARG_INFO(0, item)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_iserter_utils_collection_offsetset, 0, 0, 2)
	ZEND_ARG_INFO(0, offset)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_iserter_utils_collection_offsetexists, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_iserter_utils_collection_offsetunset, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_iserter_utils_collection_offsetget, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(iserter_utils_collection_method_entry) {
	PHP_ME(Iserter_Utils_Collection, __construct, arginfo_iserter_utils_collection___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Iserter_Utils_Collection, count, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, push, arginfo_iserter_utils_collection_push, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, pull, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, pop, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, offsetSet, arginfo_iserter_utils_collection_offsetset, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, offsetExists, arginfo_iserter_utils_collection_offsetexists, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, offsetUnset, arginfo_iserter_utils_collection_offsetunset, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, offsetGet, arginfo_iserter_utils_collection_offsetget, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, rewind, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, current, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, key, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, next, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Iserter_Utils_Collection, valid, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
