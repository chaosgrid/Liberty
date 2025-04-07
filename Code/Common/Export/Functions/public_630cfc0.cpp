#include "Common-PCH.h"

PROC_DECLARE(0x630cfc0, internal_630cfc0, public_630cfc0);
extern "C" NAKED register_t __cdecl internal_630cfc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a356c]
        mov dword ptr ds : [public_63fcf64], eax
        ret 
        UNREACHABLE_TRAP(0x630cfc0)
    }
}
