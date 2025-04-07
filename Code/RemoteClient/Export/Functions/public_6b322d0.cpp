#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b322d0, internal_6b322d0, public_6b322d0);
extern "C" NAKED register_t __cdecl internal_6b322d0()
{
    __asm
    {
        mov word ptr ds : [public_6b738e8], 0
        mov byte ptr ds : [public_6b738ea], 1
        ret 
        UNREACHABLE_TRAP(0x6b322d0)
    }
}
