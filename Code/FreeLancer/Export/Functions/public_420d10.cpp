#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);

PROC_DECLARE(0x420d10, internal_420d10, public_420d10);
extern "C" NAKED register_t __cdecl internal_420d10()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5c9694
        ret 
        UNREACHABLE_TRAP(0x420d10)
    }
}
