#include "RP8-PCH.h"


#define public_6d15687 _public_6d15687
#define public_6d1569d _public_6d1569d
#define public_6d156c2 _public_6d156c2
#define public_6d156dc _public_6d156dc
#define public_6d156f6 _public_6d156f6
#define public_6d15710 _public_6d15710
#define public_6d1574f _public_6d1574f

PROC_DECLARE(0x6d1560c, internal_6d1560c, public_6d1560c);
extern "C" NAKED register_t __cdecl internal_6d1560c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x60C
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x194], 0xFFFFFFFF
        jne public_6d15687
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x60C]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x60C], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x60C]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x60C], ecx
/*FIXUP push offset public_6d6ab18 @0x6d1565a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ab18
        push 0x12FC
/*FIXUP push offset public_6d6ab50 @0x6d15664*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ab50
/*FIXUP push offset public_6d6ab9c @0x6d15669*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ab9c
        mov edx, dword ptr ss : [ebp-0x60C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d1574f
        public_6d15687 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0x3EC], 0
        jne public_6d1569d
        mov eax, 0xFFFFFFFD
        jmp public_6d1574f
        public_6d1569d : nop
        cmp dword ptr ss : [ebp+0xC], 7
        je public_6d156c2
        lea edx, ss:[ebp-0x608]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x11C]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x11C]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x4C]
        public_6d156c2 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 1
        test edx, edx
        je public_6d156dc
        mov ecx, 0x80
        mov esi, dword ptr ss : [ebp+0x10]
        lea edi, ss:[ebp-0x608]
        rep movsd
        public_6d156dc : nop
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 2
        test eax, eax
        je public_6d156f6
        mov ecx, 0x80
        mov esi, dword ptr ss : [ebp+0x10]
        lea edi, ss:[ebp-0x408]
        rep movsd
        public_6d156f6 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 4
        test ecx, ecx
        je public_6d15710
        mov ecx, 0x80
        mov esi, dword ptr ss : [ebp+0x10]
        lea edi, ss:[ebp-0x208]
        rep movsd
        public_6d15710 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [edx+0x170]
        shr al, 1
        and al, 1
        xor ecx, ecx
        mov cl, al
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov dword ptr ss : [ebp-4], ecx
        lea edx, ss:[ebp-0x608]
        push edx
        mov eax, dword ptr ss : [ebp-4]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x11C]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x11C]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x48]
        xor eax, eax
        public_6d1574f : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d1560c)
    }
}

#undef public_6d15687
#undef public_6d1569d
#undef public_6d156c2
#undef public_6d156dc
#undef public_6d156f6
#undef public_6d15710
#undef public_6d1574f
