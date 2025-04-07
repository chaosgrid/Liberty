#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6808f80);
CLANG_FORWARD_PROC_SYMBOL(public_6808fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6809360);

PROC_DECLARE(0x6808f80, internal_6808f80, public_6808f80);
extern "C" NAKED register_t __cdecl internal_6808f80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6809360
        push eax
        push esi
        call public_6808fa0
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808f80)
    }
}
