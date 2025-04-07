#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66277c0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

PROC_DECLARE(0x66277c0, internal_66277c0, public_66277c0);
extern "C" NAKED register_t __cdecl internal_66277c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_66281d0
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x66277c0)
    }
}
