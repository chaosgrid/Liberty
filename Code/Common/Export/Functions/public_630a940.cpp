#include "Common-PCH.h"

PROC_DECLARE(0x630a940, internal_630a940, public_630a940);
extern "C" NAKED register_t __cdecl internal_630a940()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3480]
        mov dword ptr ds : [public_63fcf24], eax
        ret 
        UNREACHABLE_TRAP(0x630a940)
    }
}
