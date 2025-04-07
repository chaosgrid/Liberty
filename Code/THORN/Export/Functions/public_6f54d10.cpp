#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52770);
CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54d10);

#define public_6f54d3e _public_6f54d3e

PROC_DECLARE(0x6f54d10, internal_6f54d10, public_6f54d10);
extern "C" NAKED register_t __cdecl internal_6f54d10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        jle public_6f54d3e
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, esi
        neg eax
        push eax
        push ecx
        push 0x1D
        push edi
        call public_6f52dd0
        mov edx, dword ptr ds : [edi+8]
        push esi
        push edx
        call public_6f52770
        add esp, 0x18
        pop edi
        public_6f54d3e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54d10)
    }
}

#undef public_6f54d3e
