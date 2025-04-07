#include "Common-PCH.h"

PROC_DECLARE(0x6334ab0, internal_6334ab0, public_6334ab0);
extern "C" NAKED register_t __cdecl internal_6334ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a4ab0]
        mov dword ptr ds : [public_658a9a4], eax
        ret 
        UNREACHABLE_TRAP(0x6334ab0)
    }
}
