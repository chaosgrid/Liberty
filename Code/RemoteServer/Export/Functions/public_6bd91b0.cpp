#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd91b0, internal_6bd91b0, public_6bd91b0);
extern "C" NAKED register_t __cdecl internal_6bd91b0()
{
    __asm
    {
        mov word ptr ds : [public_6c13a3c], 3
        mov byte ptr ds : [public_6c13a3e], 1
        ret 
        UNREACHABLE_TRAP(0x6bd91b0)
    }
}
