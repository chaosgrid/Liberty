#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c72e0);
CLANG_FORWARD_PROC_SYMBOL(public_4cf010);

PROC_DECLARE(0x4cf010, internal_4cf010, public_4cf010);
/* CHUNK of public_4cc870 */
extern "C" NAKED register_t __cdecl internal_4cf010()
{
    __asm
    {
        push ecx
        mov dword ptr ds : [ecx], offset public_5d6e30
        call public_4c72e0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4cf010)
    }
}
