#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7b50);

PROC_DECLARE(0x5133f0, internal_5133f0, public_5133f0);
extern "C" NAKED register_t __cdecl internal_5133f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_4f7b50
        ret 8
        UNREACHABLE_TRAP(0x5133f0)
    }
}
