#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b32330, internal_6b32330, public_6b32330);
extern "C" NAKED register_t __cdecl internal_6b32330()
{
    __asm
    {
        mov word ptr ds : [public_6b7389c], 3
        mov byte ptr ds : [public_6b7389e], 1
        ret 
        UNREACHABLE_TRAP(0x6b32330)
    }
}
