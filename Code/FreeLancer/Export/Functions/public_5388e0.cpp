#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5388e0);
CLANG_FORWARD_PROC_SYMBOL(public_5afe60);

#define public_538912 _public_538912
#define public_538915 _public_538915
#define public_538925 _public_538925
#define public_53893c _public_53893c
#define public_538945 _public_538945
#define public_53894c _public_53894c
#define public_53895b _public_53895b
#define public_538976 _public_538976
#define public_53897d _public_53897d
#define public_538984 _public_538984
#define public_538990 _public_538990
#define public_538992 _public_538992
#define public_5389d3 _public_5389d3
#define public_538a0e _public_538a0e
#define public_538a14 _public_538a14
#define public_538a24 _public_538a24
#define public_538a2c _public_538a2c

PROC_DECLARE(0x5388e0, internal_5388e0, public_5388e0);
extern "C" NAKED register_t __cdecl internal_5388e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        push edi
        je public_538925
        mov ebx, dword ptr ds : [esi]
        lea edi, ds:[eax+0x38]
        mov ecx, edi
        call public_5afe60
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_538912
        mov dword ptr ds : [ecx], eax
        jmp public_538915
        public_538912 : nop
        mov dword ptr ds : [edi+4], eax
        public_538915 : nop
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+8], 0
        public_538925 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], edi
        mov eax, dword ptr ds : [edi+0x3C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_53893c
        mov ebx, dword ptr ds : [eax+8]
        jmp public_53895b
        public_53893c : nop
        mov eax, dword ptr ds : [edi+4]
        xor ecx, ecx
        test eax, eax
        je public_53894c
        public_538945 : nop
        mov eax, dword ptr ds : [eax]
        inc ecx
        test eax, eax
        jne public_538945
        public_53894c : nop
        shl ecx, 4
        push ecx
        call dword ptr ds : [public_5c71cc]
        add esp, 4
        mov ebx, eax
        public_53895b : nop
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[edi+0x38]
        call public_43cf80
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi], ebx
        mov eax, dword ptr ds : [eax+4]
        xor ecx, ecx
        test eax, eax
        je public_53897d
        public_538976 : nop
        mov eax, dword ptr ds : [eax]
        inc ecx
        test eax, eax
        jne public_538976
        public_53897d : nop
        xor edx, edx
        mov dword ptr ds : [esi+4], ecx
        xor eax, eax
        public_538984 : nop
        test edx, edx
        jne public_538990
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+4]
        jmp public_538992
        public_538990 : nop
        mov edx, dword ptr ds : [edx]
        public_538992 : nop
        test edx, edx
        je public_5389d3
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edx+8]
        mov ebx, dword ptr ds : [edi]
        add ecx, eax
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ebx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ecx+0xC], edi
        mov ecx, dword ptr ds : [esi]
        fmul dword ptr ds : [ecx+eax]
        add ecx, eax
        fstp dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+ecx+8]
        fmul dword ptr ds : [ecx]
        add eax, 0x10
        fstp dword ptr ds : [ecx]
        jmp public_538984
        public_5389d3 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edx
        shl ecx, 4
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0xC], 0
        fld dword ptr ds : [ecx+edi-0x10]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jp public_538a0e
        pop edi
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        pop esi
        pop ebx
        ret 0x14
        public_538a0e : nop
        xor ecx, ecx
        test edx, edx
        jle public_538a2c
        public_538a14 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        jp public_538a24
        mov dword ptr ds : [esi+0xC], ecx
        public_538a24 : nop
        inc ecx
        add edi, 0x10
        cmp ecx, edx
        jl public_538a14
        public_538a2c : nop
        pop edi
        pop esi
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x5388e0)
    }
}

#undef public_538912
#undef public_538915
#undef public_538925
#undef public_53893c
#undef public_538945
#undef public_53894c
#undef public_53895b
#undef public_538976
#undef public_53897d
#undef public_538984
#undef public_538990
#undef public_538992
#undef public_5389d3
#undef public_538a0e
#undef public_538a14
#undef public_538a24
#undef public_538a2c
