#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6802510);
CLANG_FORWARD_PROC_SYMBOL(public_6805e70);
CLANG_FORWARD_PROC_SYMBOL(public_6805ee0);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

PROC_DECLARE(0x6809870, internal_6809870, public_6809870);
extern "C" NAKED register_t __cdecl internal_6809870()
{
    __asm
    {
        push esi
        push 1
        call public_6805ee0
        mov esi, eax
        push esi
        call public_6802420
        push 2
        call public_6805e70
        call public_680bdaa
        push eax
        call public_6802510
        push esi
        call public_6802420
        add esp, 0x14
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6809870)
    }
}
