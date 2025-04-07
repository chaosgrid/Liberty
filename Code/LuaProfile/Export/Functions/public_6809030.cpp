#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6809030);
CLANG_FORWARD_PROC_SYMBOL(public_6809050);

PROC_DECLARE(0x6809030, internal_6809030, public_6809030);
extern "C" NAKED register_t __cdecl internal_6809030()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6809050
        push edi
        mov esi, eax
        call public_6809050
        add esp, 8
        shl esi, 8
        pop edi
        or eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6809030)
    }
}
