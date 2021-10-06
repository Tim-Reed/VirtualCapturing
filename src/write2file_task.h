#ifndef _WRITE2FILE_TASK_
#define _WRITE2FILE_TASK_
#include "error_code.h"

class Write2FileTask : public TObject {
    public:
        Write2FileTask();
        virtual ~Write2FileTask();
        TRetCode Init();
        TRetCode MainProcess();
        TRetCode Run();
}
#endif