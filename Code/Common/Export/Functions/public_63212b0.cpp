#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_63212dd _public_63212dd
#define public_63212fe _public_63212fe
#define public_632130d _public_632130d
#define public_632131a _public_632131a
#define public_6321326 _public_6321326

PROC_DECLARE(0x63212b0, internal_63212b0, public_63212b0);
extern "C" NAKED register_t __cdecl internal_63212b0()
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
        je public_63212dd
        cmp dword ptr ds : [eax+0xC], ecx
        je public_63212fe
        public_63212dd : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_64018d8], eax
        public_63212fe : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_632130d
        add eax, 0x10
        test eax, eax
        jne public_632131a
        public_632130d : nop
        push ecx
        call public_6320290
        add esp, 4
        test eax, eax
        je public_6321326
        public_632131a : nop
        mov eax, dword ptr ds : [eax+0x40]
        xor ecx, ecx
        mov dword ptr ds : [esi], eax
        pop edi
        mov eax, ecx
        pop esi
        ret 
        public_6321326 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63212b0)
    }
}

#undef public_63212dd
#undef public_63212fe
#undef public_632130d
#undef public_632131a
#undef public_6321326
