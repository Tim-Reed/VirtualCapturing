#ifndef _VIRTUAL_CAMERA_
#define _VIRTUAL_CAMERA_
#include "error_code.h"
class VirtualCamera : public TObject{
    public:
        VirtualCamera();
        virtual ~VirtualCamera();
        TRetCode Open();
        TRetCode Close();
        TRetCode SetFrameSize(int width, int height);
        TRetCode Captue();
    private:
        unsigned char *buff;
}

#endif