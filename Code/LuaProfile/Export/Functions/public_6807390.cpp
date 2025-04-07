#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806990);
CLANG_FORWARD_PROC_SYMBOL(public_6807390);
CLANG_FORWARD_PROC_SYMBOL(public_68073b0);

PROC_DECLARE(0x6807390, internal_6807390, public_6807390);
extern "C" NAKED register_t __cdecl internal_6807390()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xFFFFFFFF
        push esi
        call public_6806990
        push esi
        call public_68073b0
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807390)
    }
}
