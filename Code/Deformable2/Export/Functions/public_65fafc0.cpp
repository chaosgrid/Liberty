#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fafc0);

#define public_65fafe3 _public_65fafe3
#define public_65faff7 _public_65faff7
#define public_65fb00c _public_65fb00c
#define public_65fb020 _public_65fb020

PROC_DECLARE(0x65fafc0, internal_65fafc0, public_65fafc0);
extern "C" NAKED register_t __cdecl internal_65fafc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x240]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+0x30], eax
        mov eax, dword ptr ds : [ecx+0x240]
        push ebx
        xor ebx, ebx
        test eax, eax
        jle public_65fb020
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        public_65fafe3 : nop
        mov dword ptr ds : [edx], 0
        mov esi, dword ptr ds : [ecx+0x244]
        xor eax, eax
        test esi, esi
        jle public_65fb00c
        mov esi, ebp
        public_65faff7 : nop
        fld dword ptr ds : [edi+eax*4]
        inc eax
        fmul dword ptr ds : [esi]
        add esi, 4
        fadd dword ptr ds : [edx]
        fstp dword ptr ds : [edx]
        cmp eax, dword ptr ds : [ecx+0x244]
        jl public_65faff7
        public_65fb00c : nop
        mov eax, dword ptr ds : [ecx+0x240]
        inc ebx
        add edx, 4
        add ebp, 0x30
        cmp ebx, eax
        jl public_65fafe3
        pop edi
        pop esi
        pop ebp
        public_65fb020 : nop
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65fafc0)
    }
}

#undef public_65fafe3
#undef public_65faff7
#undef public_65fb00c
#undef public_65fb020
