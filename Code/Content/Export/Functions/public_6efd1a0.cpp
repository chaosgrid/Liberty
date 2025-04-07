#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efd1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6efd1cc _public_6efd1cc
#define public_6efd1d4 _public_6efd1d4
#define public_6efd1e0 _public_6efd1e0

PROC_DECLARE(0x6efd1a0, internal_6efd1a0, public_6efd1a0);
extern "C" NAKED register_t __cdecl internal_6efd1a0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_6fcf38c
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fcf390]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6efd1cc
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6efd1cc
        lea eax, ss:[esp+0xC]
        jmp public_6efd1d4
        public_6efd1cc : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6efd1d4 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_6efd1e0
        add eax, 0x10
        pop ecx
        ret 
        public_6efd1e0 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6efd1a0)
    }
}

#undef public_6efd1cc
#undef public_6efd1d4
#undef public_6efd1e0
