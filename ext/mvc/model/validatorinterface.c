
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2012 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "phalcon.h"

#include "kernel/main.h"

/**
 * Phalcon\Mvc\Model\ValidatorInterface initializer
 */
PHALCON_INIT_CLASS(Phalcon_Mvc_Model_ValidatorInterface){

	PHALCON_REGISTER_CLASS(Phalcon\\Mvc\\Model, ValidatorInterface, mvc_model_validatorinterface, phalcon_mvc_model_validatorinterface_method_entry, ZEND_ACC_INTERFACE);

	return SUCCESS;
}

PHP_METHOD(Phalcon_Mvc_Model_ValidatorInterface, getMessages){ }

PHP_METHOD(Phalcon_Mvc_Model_ValidatorInterface, validate){ }

