#include "Common-PCH.h"

PROC_DECLARE(0x630e320, internal_630e320, public_630e320);
extern "C" NAKED register_t __cdecl internal_630e320()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a35e0]
        mov dword ptr ds : [public_63fcf80], eax
        ret 
        UNREACHABLE_TRAP(0x630e320)
    }
}
