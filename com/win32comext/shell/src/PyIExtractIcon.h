// This file declares the IExtractIcon Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIExtractIcon : public PyIUnknown {
   public:
    MAKE_PYCOM_CTOR(PyIExtractIcon);
    static IExtractIconA *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *Extract(PyObject *self, PyObject *args);
    static PyObject *GetIconLocation(PyObject *self, PyObject *args);

   protected:
    PyIExtractIcon(IUnknown *pdisp);
    ~PyIExtractIcon();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGExtractIcon : public PyGatewayBase, public IExtractIconA {
   protected:
    PyGExtractIcon(PyObject *instance) : PyGatewayBase(instance) { ; }
    PYGATEWAY_MAKE_SUPPORT2(PyGExtractIcon, IExtractIcon, IID_IExtractIcon, PyGatewayBase)

    // IExtractIconA
    STDMETHOD(Extract)(LPCSTR pszFile, UINT nIconIndex, HICON *phiconLarge, HICON *phiconSmall, UINT nIconSize);

    STDMETHOD(GetIconLocation)(UINT uFlags, LPSTR szIconFile, UINT cchMax, LPINT piIndex, UINT *pwFlags);
};
