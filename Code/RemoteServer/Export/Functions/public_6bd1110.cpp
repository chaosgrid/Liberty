#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd1110, internal_6bd1110, public_6bd1110);
extern "C" NAKED register_t __cdecl internal_6bd1110()
{
    __asm
    {
        mov word ptr ds : [public_6c138c4], 0
        mov byte ptr ds : [public_6c138c6], 1
        ret 
        UNREACHABLE_TRAP(0x6bd1110)
    }
}
