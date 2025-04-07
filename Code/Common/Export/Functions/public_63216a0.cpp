#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_63216a0);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_63216cd _public_63216cd
#define public_63216ee _public_63216ee
#define public_63216fd _public_63216fd
#define public_632170a _public_632170a
#define public_6321716 _public_6321716

PROC_DECLARE(0x63216a0, internal_63216a0, public_63216a0);
extern "C" NAKED register_t __cdecl internal_63216a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_64018d8]
        cmp dword ptr ds : [public_64018c8], eax
        push edi
        mov edi, 0xFFFFFFFE
        mov dword ptr ss : [esp+0x10], ecx
        je public_63216cd
        cmp dword ptr ds : [eax+0xC], ecx
        je public_63216ee
        public_63216cd : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_64018d8], eax
        public_63216ee : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_63216fd
        add eax, 0x10
        test eax, eax
        jne public_632170a
        public_63216fd : nop
        push ecx
        call public_6320290
        add esp, 4
        test eax, eax
        je public_6321716
        public_632170a : nop
        mov eax, dword ptr ds : [eax+0x74]
        xor ecx, ecx
        mov dword ptr ds : [esi], eax
        pop edi
        mov eax, ecx
        pop esi
        ret 
        public_6321716 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63216a0)
    }
}

#undef public_63216cd
#undef public_63216ee
#undef public_63216fd
#undef public_632170a
#undef public_6321716
