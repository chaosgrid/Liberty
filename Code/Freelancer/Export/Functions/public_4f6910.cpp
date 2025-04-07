#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421050);

PROC_DECLARE(0x4f6910, internal_4f6910, public_4f6910);
extern "C" NAKED register_t __cdecl internal_4f6910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        add ecx, 4
        call public_421050
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x4f6910)
    }
}
