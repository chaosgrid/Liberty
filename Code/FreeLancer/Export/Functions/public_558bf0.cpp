#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d6e0);
CLANG_FORWARD_PROC_SYMBOL(public_558bf0);

PROC_DECLARE(0x558bf0, internal_558bf0, public_558bf0);
extern "C" NAKED register_t __cdecl internal_558bf0()
{
    __asm
    {
        call public_42d6e0
        add eax, 2
        mov dword ptr ds : [public_6799e8], eax
        ret 
        UNREACHABLE_TRAP(0x558bf0)
    }
}
