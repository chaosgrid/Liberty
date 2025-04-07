#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57c3a);
CLANG_FORWARD_PROC_SYMBOL(public_6d584cd);

PROC_DECLARE(0x6d584cd, internal_6d584cd, public_6d584cd);
extern "C" NAKED register_t __cdecl internal_6d584cd()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push 0
        push esi
        push edi
        call public_6d57c3a
        push dword ptr ds : [edi+0x28]
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        push dword ptr ds : [edi+0x24]
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        push edi
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        add esp, 0x24
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d584cd)
    }
}
