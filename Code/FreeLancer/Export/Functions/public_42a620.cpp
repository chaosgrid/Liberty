#include "Freelancer-PCH.h"


#define public_42a63c _public_42a63c
#define public_42a655 _public_42a655
#define public_42a659 _public_42a659
#define public_42a688 _public_42a688
#define public_42a694 _public_42a694
#define public_42a6a7 _public_42a6a7

PROC_DECLARE(0x42a620, internal_42a620, public_42a620);
extern "C" NAKED register_t __cdecl internal_42a620()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push esi
        fcomp dword ptr ds : [public_5ca21c]
        mov esi, ecx
        fnstsw ax
        test ah, 5
        jp public_42a63c
        fld dword ptr ds : [public_5ca21c]
        jmp public_42a659
        public_42a63c : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5ca218]
        fnstsw ax
        test ah, 0x41
        jne public_42a655
        fld dword ptr ds : [public_5ca218]
        jmp public_42a659
        public_42a655 : nop
        fld dword ptr ss : [esp+8]
        public_42a659 : nop
        mov eax, dword ptr ds : [esi+0x30]
        fstp dword ptr ds : [esi+0x20]
        test eax, eax
        je public_42a6a7
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+8]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFD8F0
        jge public_42a688
        mov eax, 0xFFFFD8F0
        jmp public_42a694
        public_42a688 : nop
        cmp eax, 0x2710
        jle public_42a694
        mov eax, 0x2710
        public_42a694 : nop
        mov edx, dword ptr ds : [public_5c6d48]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [esi+0x30]
        push eax
        push ecx
        call dword ptr ds : [edx+0x34]
        public_42a6a7 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x42a620)
    }
}

#undef public_42a63c
#undef public_42a655
#undef public_42a659
#undef public_42a688
#undef public_42a694
#undef public_42a6a7
