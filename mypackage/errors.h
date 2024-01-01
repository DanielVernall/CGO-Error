#ifndef ERRORS_H_
#define ERRORS_H_

/// @brief Error codes for library "mymodule"
typedef enum mymodule_error_e
{
    /// No error
    MYMODULE_ERROR_OK = 0,

    /// Invalid arguments (ex: NULL pointer where a valid pointer is required)
    MYMODULE_ERROR_INVARG,

    /// Out of memory (RAM)
    MYMODULE_ERROR_NOMEM,

    /// Make up your error codes as you see fit
    MYMODULE_ERROR_MYERROR,

    // etc etc

    /// Total # of errors in this list (NOT AN ACTUAL ERROR CODE);
    /// NOTE: that for this to work, it assumes your first error code is value 0 and you let it naturally
    /// increment from there, as is done above, without explicitly altering any error values above
    MYMODULE_ERROR_COUNT,
} mymodule_error_t;

// Array of strings to map enum error types to printable strings
// - see important NOTE above!
const char *const MYMODULE_ERROR_STRS[] =
    {
        "MYMODULE_ERROR_OK",
        "MYMODULE_ERROR_INVARG",
        "MYMODULE_ERROR_NOMEM",
        "MYMODULE_ERROR_MYERROR",
};

// To get a printable error string
const char *mymodule_error_str(mymodule_error_t err);

// Other functions in mymodule
mymodule_error_t mymodule_func1(void);
mymodule_error_t mymodule_func2(void);
mymodule_error_t mymodule_func3(void);

#endif