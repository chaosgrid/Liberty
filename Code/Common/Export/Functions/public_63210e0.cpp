#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_63210e0);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_6321103 _public_6321103
#define public_6321124 _public_6321124
#define public_6321133 _public_6321133
#define public_6321140 _public_6321140
#define public_632114e _public_632114e

PROC_DECLARE(0x63210e0, internal_63210e0, public_63210e0);
extern "C" NAKED register_t __cdecl internal_63210e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_64018d8]
        cmp dword ptr ds : [public_64018c8], eax
        push esi
        mov esi, 0xFFFFFFFE
        mov dword ptr ss : [esp+0xC], ecx
        je public_6321103
        cmp dword ptr ds : [eax+0xC], ecx
        je public_6321124
        public_6321103 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_64018d8], eax
        public_6321124 : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6321133
        add eax, 0x10
        test eax, eax
        jne public_6321140
        public_6321133 : nop
        push ecx
        call public_6320290
        add esp, 4
        test eax, eax
        je public_632114e
        public_6321140 : nop
        mov edx, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov dword ptr ds : [eax+0x74], edx
        mov eax, ecx
        pop esi
        pop ecx
        ret 
        public_632114e : nop
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63210e0)
    }
}

#undef public_6321103
#undef public_6321124
#undef public_6321133
#undef public_6321140
#undef public_632114e
