#include "FreeLancer-PCH.h"


#define public_5b48a4 _public_5b48a4
#define public_5b48c0 _public_5b48c0
#define public_5b48c2 _public_5b48c2
#define public_5b48da _public_5b48da
#define public_5b48dc _public_5b48dc
#define public_5b48f4 _public_5b48f4
#define public_5b48f6 _public_5b48f6
#define public_5b490e _public_5b490e
#define public_5b4910 _public_5b4910
#define public_5b4957 _public_5b4957
#define public_5b497a _public_5b497a
#define public_5b4986 _public_5b4986
#define public_5b498c _public_5b498c
#define public_5b49a6 _public_5b49a6

PROC_DECLARE(0x5b4870, internal_5b4870, public_5b4870);
extern "C" NAKED register_t __cdecl internal_5b4870()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_5c6de0]
        push ebx
        push esi
        push edi
        lea edx, ss:[esp+0xC]
        push edx
        xor esi, esi
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 3
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        jl public_5b48a4
        mov eax, dword ptr ss : [esp+0xC]
        and eax, 0xFFF00000
        cmp eax, 0x1100000
        sbb esi, esi
        neg esi
        public_5b48a4 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5d5068]
        fnstsw ax
        test ah, 0x41
        jne public_5b48c0
        test esi, esi
        jne public_5b48c0
        mov edi, 1
        jmp public_5b48c2
        public_5b48c0 : nop
        xor edi, edi
        public_5b48c2 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        jne public_5b48da
        mov ebx, 1
        jmp public_5b48dc
        public_5b48da : nop
        xor ebx, ebx
        public_5b48dc : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5e7028]
        fnstsw ax
        test ah, 0x41
        jne public_5b48f4
        mov ecx, 1
        jmp public_5b48f6
        public_5b48f4 : nop
        xor ecx, ecx
        public_5b48f6 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5c9858]
        fnstsw ax
        test ah, 0x41
        jne public_5b490e
        mov esi, 1
        jmp public_5b4910
        public_5b490e : nop
        xor esi, esi
        public_5b4910 : nop
        mov eax, dword ptr ds : [public_5c6d38]
        mov edx, dword ptr ds : [eax]
        test edx, edx
        je public_5b4957
        mov eax, edx
        lea edx, ss:[esp+0x14]
        push edx
        push 0
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ds : [public_5c6d38]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], esi
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 2
        push eax
        call dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push eax
        call dword ptr ds : [ecx+0x30]
        public_5b4957 : nop
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        je public_5b497a
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        test edi, edi
        setne dl
        dec edx
        and edx, 0x80
        push edx
        push 4
        push eax
        call dword ptr ds : [ecx+0xC]
        public_5b497a : nop
        test edi, edi
        je public_5b4986
        fld dword ptr ds : [public_5c75dc]
        jmp public_5b498c
        public_5b4986 : nop
        fld dword ptr ds : [public_5c7474]
        public_5b498c : nop
        mov eax, dword ptr ds : [public_5c6de0]
        fstp dword ptr ds : [public_67ed14]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_5b49a6
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 4
        push eax
        call dword ptr ds : [ecx+0x14]
        public_5b49a6 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5b4870)
    }
}

#undef public_5b48a4
#undef public_5b48c0
#undef public_5b48c2
#undef public_5b48da
#undef public_5b48dc
#undef public_5b48f4
#undef public_5b48f6
#undef public_5b490e
#undef public_5b4910
#undef public_5b4957
#undef public_5b497a
#undef public_5b4986
#undef public_5b498c
#undef public_5b49a6
