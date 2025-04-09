#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4f80);

PROC_DECLARE(0x437520, internal_437520, public_437520);
extern "C" NAKED register_t __cdecl internal_437520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_4c4f80
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x437520)
    }
}
