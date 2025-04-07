#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f54f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f50);

PROC_DECLARE(0x6f54f30, internal_6f54f30, public_6f54f30);
extern "C" NAKED register_t __cdecl internal_6f54f30()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6f54f50
        push edi
        mov esi, eax
        call public_6f54f50
        add esp, 8
        shl esi, 8
        pop edi
        or eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54f30)
    }
}
