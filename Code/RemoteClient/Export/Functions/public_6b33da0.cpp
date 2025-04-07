#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b33da0, internal_6b33da0, public_6b33da0);
extern "C" NAKED register_t __cdecl internal_6b33da0()
{
    __asm
    {
        mov word ptr ds : [public_6b73908], 3
        mov byte ptr ds : [public_6b7390a], 1
        ret 
        UNREACHABLE_TRAP(0x6b33da0)
    }
}
