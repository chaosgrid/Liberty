#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b32310, internal_6b32310, public_6b32310);
extern "C" NAKED register_t __cdecl internal_6b32310()
{
    __asm
    {
        mov word ptr ds : [public_6b738ec], 2
        mov byte ptr ds : [public_6b738ee], 1
        ret 
        UNREACHABLE_TRAP(0x6b32310)
    }
}
