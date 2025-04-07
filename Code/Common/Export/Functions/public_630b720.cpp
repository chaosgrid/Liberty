#include "Common-PCH.h"

PROC_DECLARE(0x630b720, internal_630b720, public_630b720);
extern "C" NAKED register_t __cdecl internal_630b720()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a34c0]
        mov dword ptr ds : [public_63fcf50], eax
        ret 
        UNREACHABLE_TRAP(0x630b720)
    }
}
