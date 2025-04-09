#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a2a0);

#define public_42a201 _public_42a201

PROC_DECLARE(0x42a1d0, internal_42a1d0, public_42a1d0);
extern "C" NAKED register_t __cdecl internal_42a1d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x5C]
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push edi
        mov ecx, esi
        call public_42a2a0
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        je public_42a201
        cmp esi, 0xFFFFFFFF
        je public_42a201
        pop edi
        mov eax, 1
        pop esi
        ret 8
        public_42a201 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x42a1d0)
    }
}

#undef public_42a201
