#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f54f10);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f30);

PROC_DECLARE(0x6f54f10, internal_6f54f10, public_6f54f10);
extern "C" NAKED register_t __cdecl internal_6f54f10()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6f54f30
        push edi
        mov esi, eax
        call public_6f54f30
        add esp, 8
        shl esi, 0x10
        pop edi
        or eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54f10)
    }
}
