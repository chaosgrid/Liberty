#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd1150, internal_6bd1150, public_6bd1150);
extern "C" NAKED register_t __cdecl internal_6bd1150()
{
    __asm
    {
        mov word ptr ds : [public_6c139d0], 2
        mov byte ptr ds : [public_6c139d2], 1
        ret 
        UNREACHABLE_TRAP(0x6bd1150)
    }
}
