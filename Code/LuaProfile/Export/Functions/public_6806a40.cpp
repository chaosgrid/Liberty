#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a40);
CLANG_FORWARD_PROC_SYMBOL(public_6806a60);
CLANG_FORWARD_PROC_SYMBOL(public_6807a80);

PROC_DECLARE(0x6806a40, internal_6806a40, public_6806a40);
extern "C" NAKED register_t __cdecl internal_6806a40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6806a60
        push esi
        call public_6807a80
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6806a40)
    }
}
