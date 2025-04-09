#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d9470);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4d8dd0 _public_4d8dd0
#define public_4d8dd2 _public_4d8dd2
#define public_4d8de4 _public_4d8de4
#define public_4d8df7 _public_4d8df7
#define public_4d8e0e _public_4d8e0e

PROC_DECLARE(0x4d8da0, internal_4d8da0, public_4d8da0);
extern "C" NAKED register_t __cdecl internal_4d8da0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x26
        push esi
        mov esi, ecx
        jne public_4d8e0e
        call public_54baf0
        test eax, eax
        je public_4d8e0e
        add eax, 0xC
        test eax, eax
        je public_4d8dd0
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4d8dd0
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_4d8dd2
        public_4d8dd0 : nop
        xor ecx, ecx
        public_4d8dd2 : nop
        call dword ptr ds : [public_5c62e8]
        mov edx, dword ptr ss : [esp+0xC]
        xor eax, eax
        lea ecx, ds:[esi+0x334]
        public_4d8de4 : nop
        cmp dword ptr ds : [ecx], edx
        je public_4d8df7
        inc eax
        add ecx, 4
        cmp eax, 4
        jl public_4d8de4
        xor eax, eax
        pop esi
        ret 0xC
        public_4d8df7 : nop
        mov edx, dword ptr ds : [esi+0x348]
        imul eax, 0x148
        add eax, edx
        push eax
        lea ecx, ds:[esi-0x38]
        call public_4d9470
        public_4d8e0e : nop
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4d8da0)
    }
}

#undef public_4d8dd0
#undef public_4d8dd2
#undef public_4d8de4
#undef public_4d8df7
#undef public_4d8e0e
