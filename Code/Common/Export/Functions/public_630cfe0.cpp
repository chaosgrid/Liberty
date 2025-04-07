#include "Common-PCH.h"

PROC_DECLARE(0x630cfe0, internal_630cfe0, public_630cfe0);
extern "C" NAKED register_t __cdecl internal_630cfe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3570]
        mov dword ptr ds : [public_63fcf5c], eax
        ret 
        UNREACHABLE_TRAP(0x630cfe0)
    }
}
