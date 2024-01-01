#include "errors.h"
#include <stdio.h>

/// @brief      Function to get a printable string from an enum error type
/// @param[in]  err     a valid error code for this module
/// @return     A printable C string corresponding to the error code input above, or NULL if an invalid error code
///             was passed in
const char *mymodule_error_str(mymodule_error_t err)
{
    const char *err_str = NULL;

    // Ensure error codes are within the valid array index range
    if (err >= MYMODULE_ERROR_COUNT)
    {
        goto done;
    }

    err_str = MYMODULE_ERROR_STRS[err];

done:
    return err_str;
}

// Let's just make some empty dummy functions to return some errors; fill these in as appropriate for your
// library module

mymodule_error_t mymodule_func1(void)
{
    return MYMODULE_ERROR_OK;
}

mymodule_error_t mymodule_func2(void)
{
    return MYMODULE_ERROR_INVARG;
}

mymodule_error_t mymodule_func3(void)
{
    return MYMODULE_ERROR_MYERROR;
}