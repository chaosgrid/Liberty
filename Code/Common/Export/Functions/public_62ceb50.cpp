#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62b3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d5760);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a10);
CLANG_FORWARD_PROC_SYMBOL(public_62d7510);
CLANG_FORWARD_PROC_SYMBOL(public_62ecd90);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62ceb6c _public_62ceb6c
#define public_62ceb9c _public_62ceb9c
#define public_62ceb9e _public_62ceb9e
#define public_62cebbf _public_62cebbf
#define public_62cebc1 _public_62cebc1
#define public_62cebed _public_62cebed
#define public_62cec09 _public_62cec09
#define public_62cec0d _public_62cec0d
#define public_62cec1b _public_62cec1b
#define public_62cec44 _public_62cec44
#define public_62cec6a _public_62cec6a
#define public_62cec6c _public_62cec6c
#define public_62ced01 _public_62ced01
#define public_62ced1a _public_62ced1a
#define public_62ced2c _public_62ced2c
#define public_62ceda1 _public_62ceda1
#define public_62cedba _public_62cedba

PROC_DECLARE(0x62ceb50, internal_62ceb50, public_62ceb50);
extern "C" NAKED register_t __cdecl internal_62ceb50()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        push edi
        jne public_62ceb6c
        pop edi
        mov eax, 3
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_62ceb6c : nop
        mov ebx, dword ptr ds : [esi+0x174]
        test ebx, ebx
        lea ebp, ds:[esi+0x174]
        je public_62cec0d
        add ebx, 0xFFFFFFF8
        test ebx, ebx
        je public_62cec0d
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ceb9c
        lea ecx, ds:[eax-8]
        jmp public_62ceb9e
        public_62ceb9c : nop
        xor ecx, ecx
        public_62ceb9e : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62cebbf
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62cebbf
        mov ecx, eax
        jmp public_62cebc1
        public_62cebbf : nop
        xor ecx, ecx
        public_62cebc1 : nop
        mov edi, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [public_6399408]
        fld dword ptr ds : [edi+0x100]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62cebed
        fstp st(0)
        call public_62b3040
        fdiv dword ptr ds : [edi+0x100]
        public_62cebed : nop
        fcomp qword ptr ds : [public_639fa50]
        fnstsw ax
        test ah, 0x41
        je public_62cec1b
        cmp dword ptr ss : [ebp], 0
        je public_62cec09
        push 0
        mov ecx, ebp
        call public_6341610
        public_62cec09 : nop
        mov byte ptr ss : [ebp+8], 0
        public_62cec0d : nop
        pop edi
        mov eax, 2
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_62cec1b : nop
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x1579]
        add edi, 0x14FC
        test al, al
        jne public_62cec44
        mov ecx, dword ptr ds : [edi+0x84]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[edi+8]
        push eax
        call dword ptr ds : [edx+0x88]
        mov byte ptr ds : [edi+0x7D], 1
        public_62cec44 : nop
        mov ecx, dword ptr ds : [edi+8]
        and ecx, 0x10000
        or ecx, 0x20000
        jne public_62ced2c
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62cec6a
        lea ebp, ds:[eax-8]
        jmp public_62cec6c
        public_62cec6a : nop
        xor ebp, ebp
        public_62cec6c : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx]
        mov edi, eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        mov edx, 0x5F3759DF
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fcomp dword ptr ds : [esi+0x168]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62ced01
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x2C]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x24]
        push ebx
        add ecx, 0x1498
        call public_62ecd90
        test al, al
        je public_62cedba
        public_62ced01 : nop
        mov eax, dword ptr ds : [esi+0x174]
        test eax, eax
        lea edi, ds:[esi+0x174]
        je public_62ced1a
        push 0
        mov ecx, edi
        call public_6341610
        public_62ced1a : nop
        mov byte ptr ds : [edi+8], 0
        pop edi
        mov eax, 2
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_62ced2c : nop
        lea edi, ds:[esi+0x2C]
        push ebx
        mov ecx, edi
        call public_62d5760
        push 1
        mov ecx, edi
        call public_62d5a10
        mov ecx, dword ptr ds : [esi+0x168]
        push ecx
        mov ecx, edi
        call public_62a66b0
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        cmp eax, 1
        jne public_62ceda1
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        lea edi, ds:[esi+0xA4]
        push ebx
        mov ecx, edi
        call public_62d7510
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+4]
        cmp eax, 1
        jne public_62cedba
        mov ecx, dword ptr ds : [esi+0x24]
        push ebx
        add ecx, 0x1498
        call public_62ecd90
        test al, al
        je public_62cedba
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        pop ecx
        ret 
        public_62ceda1 : nop
        lea edi, ds:[esi+0xA4]
        push ebx
        mov ecx, edi
        call public_62d7510
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        public_62cedba : nop
        pop edi
        mov eax, 1
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ceb50)
    }
}

#undef public_62ceb6c
#undef public_62ceb9c
#undef public_62ceb9e
#undef public_62cebbf
#undef public_62cebc1
#undef public_62cebed
#undef public_62cec09
#undef public_62cec0d
#undef public_62cec1b
#undef public_62cec44
#undef public_62cec6a
#undef public_62cec6c
#undef public_62ced01
#undef public_62ced1a
#undef public_62ced2c
#undef public_62ceda1
#undef public_62cedba
