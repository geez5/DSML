/*
<<<<<<< HEAD
 * Copyright 2019-2024 The OpenSSL Project Authors. All Rights Reserved.
=======
 * Copyright 2019-2021 The OpenSSL Project Authors. All Rights Reserved.
>>>>>>> 25dec95a0f993fff56110ca504bf289b413b0303
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_FIPS_NAMES_H
# define OPENSSL_FIPS_NAMES_H
# pragma once

# ifdef __cplusplus
extern "C" {
# endif

/*
 * Parameter names that the FIPS Provider defines
<<<<<<< HEAD
 * All parameters are of type: OSSL_PARAM_UTF8_STRING
 */

/* The following 4 Parameters are used for FIPS Self Testing */

/* The calculated MAC of the module file */
# define OSSL_PROV_FIPS_PARAM_MODULE_MAC      "module-mac"
/* The Version number for the fips install process */
# define OSSL_PROV_FIPS_PARAM_INSTALL_VERSION "install-version"
/* The calculated MAC of the install status indicator */
# define OSSL_PROV_FIPS_PARAM_INSTALL_MAC     "install-mac"
/* The install status indicator */
=======
 */

/*
 * The calculated MAC of the module file (Used for FIPS Self Testing)
 * Type: OSSL_PARAM_UTF8_STRING
 */
# define OSSL_PROV_FIPS_PARAM_MODULE_MAC      "module-mac"
/*
 * A version number for the fips install process (Used for FIPS Self Testing)
 * Type: OSSL_PARAM_UTF8_STRING
 */
# define OSSL_PROV_FIPS_PARAM_INSTALL_VERSION "install-version"
/*
 * The calculated MAC of the install status indicator (Used for FIPS Self Testing)
 * Type: OSSL_PARAM_UTF8_STRING
 */
# define OSSL_PROV_FIPS_PARAM_INSTALL_MAC     "install-mac"
/*
 * The install status indicator (Used for FIPS Self Testing)
 * Type: OSSL_PARAM_UTF8_STRING
 */
>>>>>>> 25dec95a0f993fff56110ca504bf289b413b0303
# define OSSL_PROV_FIPS_PARAM_INSTALL_STATUS  "install-status"

/*
 * A boolean that determines if the FIPS conditional test errors result in
 * the module entering an error state.
 * Type: OSSL_PARAM_UTF8_STRING
 */
# define OSSL_PROV_FIPS_PARAM_CONDITIONAL_ERRORS "conditional-errors"

<<<<<<< HEAD
/* The following are provided for backwards compatibility */
# define OSSL_PROV_FIPS_PARAM_SECURITY_CHECKS OSSL_PROV_PARAM_SECURITY_CHECKS
# define OSSL_PROV_FIPS_PARAM_TLS1_PRF_EMS_CHECK OSSL_PROV_PARAM_TLS1_PRF_EMS_CHECK
# define OSSL_PROV_FIPS_PARAM_DRBG_TRUNC_DIGEST OSSL_PROV_PARAM_DRBG_TRUNC_DIGEST
=======
/*
 * A boolean that determines if the runtime FIPS security checks are performed.
 * Type: OSSL_PARAM_UTF8_STRING
 */
# define OSSL_PROV_FIPS_PARAM_SECURITY_CHECKS "security-checks"
>>>>>>> 25dec95a0f993fff56110ca504bf289b413b0303

# ifdef __cplusplus
}
# endif

#endif /* OPENSSL_FIPS_NAMES_H */
