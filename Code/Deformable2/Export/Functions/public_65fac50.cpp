#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fac50);

#define public_65fac90 _public_65fac90
#define public_65faca0 _public_65faca0
#define public_65facb7 _public_65facb7
#define public_65faccf _public_65faccf

PROC_DECLARE(0x65fac50, internal_65fac50, public_65fac50);
extern "C" NAKED register_t __cdecl internal_65fac50()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x240]
        mov dword ptr ss : [ebp+0x240], eax
        mov ecx, dword ptr ds : [esi+0x244]
        mov dword ptr ss : [ebp+0x244], ecx
        mov eax, dword ptr ds : [esi+0x240]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        jle public_65faccf
        mov edx, dword ptr ds : [esi+0x244]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push edi
        public_65fac90 : nop
        xor ecx, ecx
        test edx, edx
        jle public_65facb7
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, esi
        mov eax, ebp
        sub edi, edx
        public_65faca0 : nop
        fld dword ptr ds : [ebx+ecx*4]
        inc ecx
        fmul dword ptr ds : [edi+eax]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov edx, dword ptr ds : [esi+0x244]
        cmp ecx, edx
        jl public_65faca0
        public_65facb7 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x240]
        inc eax
        add ebp, 0x30
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_65fac90
        pop edi
        pop ebx
        public_65faccf : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65fac50)
    }
}

#undef public_65fac90
#undef public_65faca0
#undef public_65facb7
#undef public_65faccf
