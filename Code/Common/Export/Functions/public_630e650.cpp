#include "Common-PCH.h"

PROC_DECLARE(0x630e650, internal_630e650, public_630e650);
extern "C" NAKED register_t __cdecl internal_630e650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a35ec]
        mov dword ptr ds : [public_63fcf84], eax
        ret 
        UNREACHABLE_TRAP(0x630e650)
    }
}
