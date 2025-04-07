#include "Common-PCH.h"

PROC_DECLARE(0x630b710, internal_630b710, public_630b710);
extern "C" NAKED register_t __cdecl internal_630b710()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a34bc]
        mov dword ptr ds : [public_63fcf54], eax
        ret 
        UNREACHABLE_TRAP(0x630b710)
    }
}
