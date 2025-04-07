#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_6321a9b _public_6321a9b
#define public_6321ab8 _public_6321ab8
#define public_6321ac7 _public_6321ac7
#define public_6321ad8 _public_6321ad8
#define public_6321ae3 _public_6321ae3

PROC_DECLARE(0x6321a80, internal_6321a80, public_6321a80);
extern "C" NAKED register_t __cdecl internal_6321a80()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_64018d8]
        cmp dword ptr ds : [public_64018c8], eax
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], ecx
        je public_6321a9b
        cmp dword ptr ds : [eax+0xC], ecx
        je public_6321ab8
        public_6321a9b : nop
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp]
        mov dword ptr ds : [public_64018d8], eax
        public_6321ab8 : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6321ac7
        add eax, 0x10
        test eax, eax
        jne public_6321ad8
        public_6321ac7 : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        call public_6320290
        add esp, 4
        test eax, eax
        je public_6321ae3
        public_6321ad8 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], ecx
        xor eax, eax
        pop ecx
        ret 
        public_6321ae3 : nop
        mov eax, 0xFFFFFFFE
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6321a80)
    }
}

#undef public_6321a9b
#undef public_6321ab8
#undef public_6321ac7
#undef public_6321ad8
#undef public_6321ae3
