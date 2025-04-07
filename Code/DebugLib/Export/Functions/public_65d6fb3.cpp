#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6fb3);

PROC_DECLARE(0x65d6fb3, internal_65d6fb3, public_65d6fb3);
extern "C" NAKED register_t __cdecl internal_65d6fb3()
{
    __asm
    {
        pop eax
        pop ecx
        xchg eax, dword ptr ss : [esp]
        jmp eax
        UNREACHABLE_TRAP(0x65d6fb3)
    }
}
