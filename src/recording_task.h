#ifndef _RECORDING_TASK_
#define _RECORDING_TASK_
#include "error_code.h"
class RecordingTask : public TObject {
    public:
        RecordingTask();
        virtual ~RecordingTask();
        TRetCode Init();
        TRetCode MainProcess();
        TRetCode Run();

}

#endif