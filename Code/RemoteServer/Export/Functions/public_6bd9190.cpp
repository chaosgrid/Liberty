#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9190, internal_6bd9190, public_6bd9190);
extern "C" NAKED register_t __cdecl internal_6bd9190()
{
    __asm
    {
        mov word ptr ds : [public_6c13a40], 2
        mov byte ptr ds : [public_6c13a42], 1
        ret 
        UNREACHABLE_TRAP(0x6bd9190)
    }
}
