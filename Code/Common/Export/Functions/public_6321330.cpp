#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_6321330);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_6321353 _public_6321353
#define public_6321374 _public_6321374
#define public_6321383 _public_6321383
#define public_6321390 _public_6321390
#define public_632139e _public_632139e

PROC_DECLARE(0x6321330, internal_6321330, public_6321330);
extern "C" NAKED register_t __cdecl internal_6321330()
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
        je public_6321353
        cmp dword ptr ds : [eax+0xC], ecx
        je public_6321374
        public_6321353 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_64018d8], eax
        public_6321374 : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6321383
        add eax, 0x10
        test eax, eax
        jne public_6321390
        public_6321383 : nop
        push ecx
        call public_6320290
        add esp, 4
        test eax, eax
        je public_632139e
        public_6321390 : nop
        mov edx, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov dword ptr ds : [eax+0x40], edx
        mov eax, ecx
        pop esi
        pop ecx
        ret 
        public_632139e : nop
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6321330)
    }
}

#undef public_6321353
#undef public_6321374
#undef public_6321383
#undef public_6321390
#undef public_632139e
