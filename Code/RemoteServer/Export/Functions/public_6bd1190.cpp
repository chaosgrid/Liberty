#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd1190, internal_6bd1190, public_6bd1190);
extern "C" NAKED register_t __cdecl internal_6bd1190()
{
    __asm
    {
        mov word ptr ds : [public_6c138c0], 4
        mov byte ptr ds : [public_6c138c2], 1
        ret 
        UNREACHABLE_TRAP(0x6bd1190)
    }
}
