#include "tapplication.h"
#include "error_code.h"

#include "recording_task.h"
#include "virtual_camera.h"
#include "write2file_task.h"

TApplication::TApplication()
{

}
virtual TApplication~TApplication()
{

}
TRetCode TApplication::Run()
{
    VirtualCamera virtualCam;
    RecordingTask recordingTask;
    Write2FileTask write2FileTask;
    recordingTask.Run();
    write2FileTask.Run();
    
    return NOT_IMPLEMENTED;
}