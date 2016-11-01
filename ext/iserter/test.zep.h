
extern zend_class_entry *iserter_test_ce;

ZEPHIR_INIT_CLASS(Iserter_Test);

PHP_METHOD(Iserter_Test, hello);

ZEPHIR_INIT_FUNCS(iserter_test_method_entry) {
	PHP_ME(Iserter_Test, hello, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
