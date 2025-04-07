#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_6321720);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_632174d _public_632174d
#define public_632176e _public_632176e
#define public_632177d _public_632177d
#define public_632178c _public_632178c
#define public_63217a6 _public_63217a6
#define public_63217ad _public_63217ad

PROC_DECLARE(0x6321720, internal_6321720, public_6321720);
extern "C" NAKED register_t __cdecl internal_6321720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_64018d8]
        cmp dword ptr ds : [public_64018c8], eax
        push edi
        mov edi, 0xFFFFFFFE
        mov dword ptr ss : [esp+0x10], edx
        je public_632174d
        cmp dword ptr ds : [eax+0xC], edx
        je public_632176e
        public_632174d : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_64018d8], eax
        public_632176e : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_632177d
        lea ecx, ds:[eax+0x10]
        test ecx, ecx
        jne public_632178c
        public_632177d : nop
        push edx
        call public_6320290
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        je public_63217ad
        public_632178c : nop
        mov dl, byte ptr ss : [esp+0x14]
        xor eax, eax
        test dl, dl
        je public_63217a6
        mov edx, dword ptr ds : [ecx+8]
        test edx, edx
        je public_63217a6
        pop edi
        mov dword ptr ds : [esi], 0xFFFFFFFF
        pop esi
        ret 
        public_63217a6 : nop
        mov ecx, dword ptr ds : [ecx]
        pop edi
        mov dword ptr ds : [esi], ecx
        pop esi
        ret 
        public_63217ad : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6321720)
    }
}

#undef public_632174d
#undef public_632176e
#undef public_632177d
#undef public_632178c
#undef public_63217a6
#undef public_63217ad
