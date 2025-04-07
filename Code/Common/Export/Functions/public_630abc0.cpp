#include "Common-PCH.h"

PROC_DECLARE(0x630abc0, internal_630abc0, public_630abc0);
extern "C" NAKED register_t __cdecl internal_630abc0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_63fcf28], eax
        mov dword ptr ds : [public_63fcf2c], eax
        ret 
        UNREACHABLE_TRAP(0x630abc0)
    }
}
