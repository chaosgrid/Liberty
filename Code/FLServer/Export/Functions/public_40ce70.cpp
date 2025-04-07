#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ce70);

PROC_DECLARE(0x40ce70, internal_40ce70, public_40ce70);
extern "C" NAKED register_t __cdecl internal_40ce70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_42780c]
        push eax
        call dword ptr ds : [public_41b1a4]
        ret 
        UNREACHABLE_TRAP(0x40ce70)
    }
}
