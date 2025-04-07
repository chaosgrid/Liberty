#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630ce50);
CLANG_FORWARD_PROC_SYMBOL(public_630cec0);

PROC_DECLARE(0x6262de0, internal_6262de0, public_6262de0);
extern "C" NAKED register_t __cdecl internal_6262de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push eax
        mov esi, ecx
        call public_630ce50
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        push edx
        mov ecx, esi
        call public_630cec0
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6262de0)
    }
}
