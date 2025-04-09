#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579380);
CLANG_FORWARD_PROC_SYMBOL(public_59dad0);

PROC_DECLARE(0x579380, internal_579380, public_579380);
/* CHUNK of public_43d6d0 */
extern "C" NAKED register_t __cdecl internal_579380()
{
    __asm
    {
        push ecx
        mov dword ptr ds : [ecx], offset public_5cb554
        call public_59dad0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x579380)
    }
}
