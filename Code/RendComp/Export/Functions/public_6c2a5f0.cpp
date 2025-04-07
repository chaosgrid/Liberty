#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

PROC_DECLARE(0x6c2a5f0, internal_6c2a5f0, public_6c2a5f0);
extern "C" NAKED register_t __cdecl internal_6c2a5f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6c34ea0
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6c2a5f0)
    }
}
