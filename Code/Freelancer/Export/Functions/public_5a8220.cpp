#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aa9c0);

PROC_DECLARE(0x5a8220, internal_5a8220, public_5a8220);
extern "C" NAKED register_t __cdecl internal_5a8220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, offset public_67e7b8
        call public_5aa9c0
        ret 8
        UNREACHABLE_TRAP(0x5a8220)
    }
}
