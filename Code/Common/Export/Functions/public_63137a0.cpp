#include "Common-PCH.h"

PROC_DECLARE(0x63137a0, internal_63137a0, public_63137a0);
extern "C" NAKED register_t __cdecl internal_63137a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a37ac]
        mov dword ptr ds : [public_64012d4], eax
        ret 
        UNREACHABLE_TRAP(0x63137a0)
    }
}
