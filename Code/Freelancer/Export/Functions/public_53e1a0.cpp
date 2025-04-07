#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_53e1d3 _public_53e1d3

PROC_DECLARE(0x53e1a0, internal_53e1a0, public_53e1a0);
extern "C" NAKED register_t __cdecl internal_53e1a0()
{
    __asm
    {
        push esi
        call public_54baf0
        mov esi, eax
        test esi, esi
        je public_53e1d3
        mov eax, dword ptr ss : [esp+0xC]
        push 0
        push eax
        call public_5416c0
        mov edx, dword ptr ds : [esi+4]
        add esp, 8
        add esi, 4
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        public_53e1d3 : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x53e1a0)
    }
}

#undef public_53e1d3
