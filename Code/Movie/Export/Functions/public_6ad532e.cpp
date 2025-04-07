#include "Movie-PCH.h"

PROC_DECLARE(0x6ad532e, internal_6ad532e, public_6ad532e);
extern "C" NAKED register_t __cdecl internal_6ad532e()
{
    __asm
    {
        push dword ptr ds : [public_6ae1094]
        call dword ptr ds : [public_6ada0b4]
        ret 
        UNREACHABLE_TRAP(0x6ad532e)
    }
}
