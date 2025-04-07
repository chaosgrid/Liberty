#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd91d0, internal_6bd91d0, public_6bd91d0);
extern "C" NAKED register_t __cdecl internal_6bd91d0()
{
    __asm
    {
        mov word ptr ds : [public_6c13a38], 4
        mov byte ptr ds : [public_6c13a3a], 1
        ret 
        UNREACHABLE_TRAP(0x6bd91d0)
    }
}
