#define PY_SSIZE_T_CLEAN
#include <Python.h>

static struct PyModuleDef _distorm3_module = {
    PyModuleDef_HEAD_INIT,
    "_distorm3",
    NULL,
    -1,
    NULL,
};

PyMODINIT_FUNC
PyInit__distorm3(void)
{
    PyObject *m;

    m = PyModule_Create(&_distorm3_module);
    if (m == NULL)
        return NULL;

    return m;
}
