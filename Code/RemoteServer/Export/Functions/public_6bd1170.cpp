#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd1170, internal_6bd1170, public_6bd1170);
extern "C" NAKED register_t __cdecl internal_6bd1170()
{
    __asm
    {
        mov word ptr ds : [public_6c138bc], 3
        mov byte ptr ds : [public_6c138be], 1
        ret 
        UNREACHABLE_TRAP(0x6bd1170)
    }
}
