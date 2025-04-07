#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c310a0);

PROC_DECLARE(0x6c310a0, internal_6c310a0, public_6c310a0);
extern "C" NAKED register_t __cdecl internal_6c310a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        add esi, 0x14
        mov ecx, 6
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c310a0)
    }
}
