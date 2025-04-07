#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6809010);
CLANG_FORWARD_PROC_SYMBOL(public_6809030);

PROC_DECLARE(0x6809010, internal_6809010, public_6809010);
extern "C" NAKED register_t __cdecl internal_6809010()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6809030
        push edi
        mov esi, eax
        call public_6809030
        add esp, 8
        shl esi, 0x10
        pop edi
        or eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6809010)
    }
}
