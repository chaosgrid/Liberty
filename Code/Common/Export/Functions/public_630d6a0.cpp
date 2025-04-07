#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d6c0);

PROC_DECLARE(0x630d6a0, internal_630d6a0, public_630d6a0);
extern "C" NAKED register_t __cdecl internal_630d6a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_630d6c0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630d6a0)
    }
}
