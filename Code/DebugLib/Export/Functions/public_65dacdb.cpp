#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dacdb);
CLANG_FORWARD_PROC_SYMBOL(public_65dacfc);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);

PROC_DECLARE(0x65dacdb, internal_65dacdb, public_65dacdb);
extern "C" NAKED register_t __cdecl internal_65dacdb()
{
    __asm
    {
        push esi
        push 0xB
        call public_65dceab
        push dword ptr ss : [esp+0xC]
        call public_65dacfc
        push 0xB
        mov esi, eax
        call public_65dcf0c
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dacdb)
    }
}
