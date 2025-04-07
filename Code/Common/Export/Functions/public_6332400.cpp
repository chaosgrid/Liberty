#include "Common-PCH.h"

PROC_DECLARE(0x6332400, internal_6332400, public_6332400);
extern "C" NAKED register_t __cdecl internal_6332400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a4958]
        mov dword ptr ds : [public_640a758], eax
        ret 
        UNREACHABLE_TRAP(0x6332400)
    }
}
