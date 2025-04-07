#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d24280);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d24298 _public_6d24298
#define public_6d242af _public_6d242af
#define public_6d242ca _public_6d242ca
#define public_6d242f3 _public_6d242f3

PROC_DECLARE(0x6d24280, internal_6d24280, public_6d24280);
extern "C" NAKED register_t __cdecl internal_6d24280()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d24298
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, ecx
        jbe public_6d242ca
        public_6d24298 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xC
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0xC], 0xC
        jae public_6d242af
        lea eax, ss:[esp+0xC]
        public_6d242af : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d242ca : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0xC
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        pop esi
        je public_6d242f3
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], offset public_6d68f94
        ret 
        public_6d242f3 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d24280)
    }
}

#undef public_6d24298
#undef public_6d242af
#undef public_6d242ca
#undef public_6d242f3
