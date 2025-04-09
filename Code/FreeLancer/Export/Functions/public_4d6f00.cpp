#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d6f00);
CLANG_FORWARD_PROC_SYMBOL(public_4d6f10);

PROC_DECLARE(0x4d6f00, internal_4d6f00, public_4d6f00);
extern "C" NAKED register_t __cdecl internal_4d6f00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_4d6f10
        ret 8
        UNREACHABLE_TRAP(0x4d6f00)
    }
}
