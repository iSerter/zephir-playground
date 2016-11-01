
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"
#include "kernel/array.h"


/**
 * Iserter\Utils\Collection
 *
 * @author Ilyas Serter <info@ilyasserter.com>
 * @date 01.11.2016
 */
ZEPHIR_INIT_CLASS(Iserter_Utils_Collection) {

	ZEPHIR_REGISTER_CLASS(Iserter\\Utils, Collection, iserter, utils_collection, iserter_utils_collection_method_entry, 0);

	zend_declare_property_null(iserter_utils_collection_ce, SL("_count"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(iserter_utils_collection_ce, SL("_data"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(iserter_utils_collection_ce, SL("_pointer"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	iserter_utils_collection_ce->create_object = zephir_init_properties_Iserter_Utils_Collection;

	zend_class_implements(iserter_utils_collection_ce TSRMLS_CC, 1, zend_ce_arrayaccess);
	zend_class_implements(iserter_utils_collection_ce TSRMLS_CC, 1, zend_ce_iterator);
	return SUCCESS;

}

PHP_METHOD(Iserter_Utils_Collection, __construct) {

	zval *data_param = NULL, *_0;
	zval *data = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &data_param);

	if (!data_param) {
		ZEPHIR_INIT_VAR(data);
		array_init(data);
	} else {
		zephir_get_arrval(data, data_param);
	}


	zephir_update_property_this(this_ptr, SL("_data"), data TSRMLS_CC);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, zephir_fast_count_int(data TSRMLS_CC));
	zephir_update_property_this(this_ptr, SL("_count"), _0 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Iserter_Utils_Collection, count) {

	

	RETURN_MEMBER(this_ptr, "_count");

}

PHP_METHOD(Iserter_Utils_Collection, push) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *item, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &item);



	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_data"), PH_NOISY_CC);
	ZEPHIR_MAKE_REF(_0);
	ZEPHIR_CALL_FUNCTION(NULL, "array_push", NULL, 1, _0, item);
	ZEPHIR_UNREF(_0);
	zephir_check_call_status();
	RETURN_ON_FAILURE(zephir_property_incr(this_ptr, SL("_count") TSRMLS_CC));
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Iserter_Utils_Collection, pull) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	RETURN_ON_FAILURE(zephir_property_decr(this_ptr, SL("_count") TSRMLS_CC));
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_data"), PH_NOISY_CC);
	ZEPHIR_MAKE_REF(_0);
	ZEPHIR_RETURN_CALL_FUNCTION("array_shift", NULL, 2, _0);
	ZEPHIR_UNREF(_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Iserter_Utils_Collection, pop) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	RETURN_ON_FAILURE(zephir_property_decr(this_ptr, SL("_count") TSRMLS_CC));
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_data"), PH_NOISY_CC);
	ZEPHIR_MAKE_REF(_0);
	ZEPHIR_RETURN_CALL_FUNCTION("array_pop", NULL, 3, _0);
	ZEPHIR_UNREF(_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Iserter_Utils_Collection, offsetSet) {

	zval *offset, *value;

	zephir_fetch_params(0, 2, 0, &offset, &value);



	zephir_update_property_array(this_ptr, SL("_data"), offset, value TSRMLS_CC);

}

PHP_METHOD(Iserter_Utils_Collection, offsetExists) {

	zval *offset, *_0;

	zephir_fetch_params(0, 1, 0, &offset);



	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_data"), PH_NOISY_CC);
	RETURN_BOOL(zephir_array_isset(_0, offset));

}

PHP_METHOD(Iserter_Utils_Collection, offsetUnset) {

	zval *offset, *_0;

	zephir_fetch_params(0, 1, 0, &offset);



	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_data"), PH_NOISY_CC);
	zephir_array_unset(&_0, offset, PH_SEPARATE);

}

PHP_METHOD(Iserter_Utils_Collection, offsetGet) {

	zval *offset, *_0, *_1, *_2;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &offset);



	ZEPHIR_INIT_VAR(_0);
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("_data"), PH_NOISY_CC);
	if (zephir_array_isset(_1, offset)) {
		_2 = zephir_fetch_nproperty_this(this_ptr, SL("_data"), PH_NOISY_CC);
		zephir_array_fetch(&_0, _2, offset, PH_NOISY, "iserter/utils/collection.zep", 71 TSRMLS_CC);
	} else {
		ZVAL_NULL(_0);
	}
	RETURN_CCTOR(_0);

}

PHP_METHOD(Iserter_Utils_Collection, rewind) {

	zval *_0;


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, 0);
	zephir_update_property_this(this_ptr, SL("_pointer"), _0 TSRMLS_CC);

}

PHP_METHOD(Iserter_Utils_Collection, current) {

	zval *_0, *_1, *_2;

	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_data"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_2);
	zephir_read_property_this(&_2, this_ptr, SL("_pointer"), PH_NOISY_CC);
	zephir_array_fetch(&_1, _0, _2, PH_NOISY | PH_READONLY, "iserter/utils/collection.zep", 87 TSRMLS_CC);
	RETURN_CTOR(_1);

}

PHP_METHOD(Iserter_Utils_Collection, key) {

	zval *_0, *_1, *_2;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("_pointer"), PH_NOISY_CC);
	_2 = zephir_fetch_nproperty_this(this_ptr, SL("_count"), PH_NOISY_CC);
	if (ZEPHIR_GE(_1, _2)) {
		ZVAL_NULL(_0);
	} else {
		zephir_read_property_this(&_0, this_ptr, SL("_pointer"), PH_NOISY_CC);
	}
	RETURN_CCTOR(_0);

}

PHP_METHOD(Iserter_Utils_Collection, next) {

	

	RETURN_ON_FAILURE(zephir_property_incr(this_ptr, SL("_pointer") TSRMLS_CC));

}

PHP_METHOD(Iserter_Utils_Collection, valid) {

	zval *_0, *_1;


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_pointer"), PH_NOISY_CC);
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("_count"), PH_NOISY_CC);
	RETURN_BOOL(ZEPHIR_LT(_0, _1));

}

zend_object_value zephir_init_properties_Iserter_Utils_Collection(zend_class_entry *class_type TSRMLS_DC) {

		zval *_0, *_1$$3;

		ZEPHIR_MM_GROW();
	
	{
		zval *this_ptr = NULL;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		_0 = zephir_fetch_nproperty_this(this_ptr, SL("_data"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(this_ptr, SL("_data"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJVAL_P(this_ptr);
	}

}

