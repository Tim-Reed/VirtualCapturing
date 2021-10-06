#ifndef _TAPPLICATION_
#define _TAPPLICATION_
#include "tobject.h"

class TApplication : public TObject {
    TApplication();
    virtual ~TApplication()
    TRetCode Run();
}
#endif