#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62bce70);
CLANG_FORWARD_PROC_SYMBOL(public_62bcf70);
CLANG_FORWARD_PROC_SYMBOL(public_62bcfa0);

#define public_62bc8b0 _public_62bc8b0
#define public_62bc946 _public_62bc946
#define public_62bc94d _public_62bc94d
#define public_62bc94f _public_62bc94f
#define public_62bc95e _public_62bc95e
#define public_62bc990 _public_62bc990
#define public_62bc9b3 _public_62bc9b3
#define public_62bc9c0 _public_62bc9c0
#define public_62bc9cd _public_62bc9cd
#define public_62bc9d0 _public_62bc9d0
#define public_62bc9e1 _public_62bc9e1
#define public_62bc9f0 _public_62bc9f0
#define public_62bca2f _public_62bca2f
#define public_62bca3c _public_62bca3c
#define public_62bca40 _public_62bca40
#define public_62bca4f _public_62bca4f
#define public_62bca51 _public_62bca51
#define public_62bca85 _public_62bca85
#define public_62bca93 _public_62bca93
#define public_62bcaaa _public_62bcaaa
#define public_62bcab8 _public_62bcab8
#define public_62bcadf _public_62bcadf
#define public_62bcae5 _public_62bcae5
#define public_62bcaf2 _public_62bcaf2
#define public_62bcaf5 _public_62bcaf5
#define public_62bcafc _public_62bcafc
#define public_62bcb00 _public_62bcb00
#define public_62bcb06 _public_62bcb06
#define public_62bcb1f _public_62bcb1f
#define public_62bcb2c _public_62bcb2c

PROC_DECLARE(0x62bc890, internal_62bc890, public_62bc890);
extern "C" NAKED register_t __cdecl internal_62bc890()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_62bc95e
        mov ebx, dword ptr ss : [esp+0x30]
        nop 
        public_62bc8b0 : nop
        mov esi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_62bc94f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        fld dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], eax
        fsub dword ptr ss : [esp+0x28]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x30], edx
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x2C], ecx
        fld dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x20]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi]
        fmul dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [edx+0x30]
        fsubr dword ptr ss : [esp+0x30]
        fcom dword ptr ds : [public_6399408]
        fst dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bc946
        mov dword ptr ds : [esi+4], 0
        jmp public_62bc94d
        public_62bc946 : nop
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [esi+4]
        public_62bc94d : nop
        fstp st(0)
        public_62bc94f : nop
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 4
        cmp edi, eax
        jne public_62bc8b0
        public_62bc95e : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        mov ebp, dword ptr ss : [ebp+8]
        mov eax, ebx
        sub eax, ebp
        sar eax, 2
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x30], ebx
        jg public_62bc9e1
        cmp ebp, ebx
        je public_62bcb2c
        lea esi, ss:[ebp+4]
        cmp esi, ebx
        je public_62bcb2c
        mov edi, dword ptr ss : [esp+0x30]
        nop 
        lea esp, ss:[esp]
        public_62bc990 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [eax+4]
        fnstsw ax
        test ah, 5
        jnp public_62bc9b3
        push edi
        push ecx
        push esi
        call public_62bcf70
        mov ebx, dword ptr ss : [esp+0x3C]
        add esp, 0xC
        jmp public_62bc9d0
        public_62bc9b3 : nop
        cmp ebp, esi
        mov eax, esi
        je public_62bc9cd
        lea esp, ss:[esp]
        public_62bc9c0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebp
        mov dword ptr ds : [eax+4], edx
        jne public_62bc9c0
        public_62bc9cd : nop
        mov dword ptr ss : [ebp], ecx
        public_62bc9d0 : nop
        add esi, 4
        cmp esi, ebx
        jne public_62bc990
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        public_62bc9e1 : nop
        cmp eax, 0x10
        mov edi, ebp
        jle public_62bcaaa
        lea esp, ss:[esp]
        public_62bc9f0 : nop
        mov ecx, dword ptr ds : [edi]
        fld dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ebx-4]
        mov eax, ebx
        sub eax, edi
        sar eax, 2
        cdq 
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr ds : [edi+eax*4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 5
        jp public_62bca2f
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jnp public_62bca4f
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bca3c
        mov eax, esi
        jmp public_62bca51
        public_62bca2f : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bca40
        public_62bca3c : nop
        mov eax, ecx
        jmp public_62bca51
        public_62bca40 : nop
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        mov eax, esi
        jnp public_62bca51
        public_62bca4f : nop
        mov eax, edx
        public_62bca51 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push eax
        push ebx
        push edi
        call public_62bcfa0
        mov esi, eax
        mov edx, ebx
        sub edx, esi
        sub eax, edi
        add esp, 0x10
        and edx, 0xFFFFFFFC
        and eax, 0xFFFFFFFC
        cmp edx, eax
        push 0
        jg public_62bca85
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        push ebx
        push esi
        call public_62bce70
        mov ebx, esi
        jmp public_62bca93
        public_62bca85 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        push esi
        push edi
        call public_62bce70
        mov edi, esi
        public_62bca93 : nop
        mov eax, ebx
        sub eax, edi
        and eax, 0xFFFFFFFC
        add esp, 0x10
        cmp eax, 0x40
        jg public_62bc9f0
        mov ebx, dword ptr ss : [esp+0x30]
        public_62bcaaa : nop
        lea esi, ss:[ebp+0x40]
        cmp ebp, esi
        je public_62bcafc
        lea edi, ss:[ebp+4]
        cmp edi, esi
        je public_62bcafc
        public_62bcab8 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 5
        jnp public_62bcadf
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        push ecx
        push edi
        call public_62bcf70
        mov ebx, dword ptr ss : [esp+0x3C]
        add esp, 0xC
        jmp public_62bcaf5
        public_62bcadf : nop
        cmp ebp, edi
        mov eax, edi
        je public_62bcaf2
        public_62bcae5 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebp
        mov dword ptr ds : [eax+4], edx
        jne public_62bcae5
        public_62bcaf2 : nop
        mov dword ptr ss : [ebp], ecx
        public_62bcaf5 : nop
        add edi, 4
        cmp edi, esi
        jne public_62bcab8
        public_62bcafc : nop
        cmp esi, ebx
        je public_62bcb2c
        public_62bcb00 : nop
        mov ebx, dword ptr ds : [esi]
        mov edi, esi
        mov ecx, esi
        public_62bcb06 : nop
        mov edx, dword ptr ds : [ecx-4]
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [edx+4]
        sub ecx, 4
        fnstsw ax
        test ah, 5
        jp public_62bcb1f
        mov dword ptr ds : [edi], edx
        mov edi, ecx
        jmp public_62bcb06
        public_62bcb1f : nop
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 4
        cmp esi, eax
        mov dword ptr ds : [edi], ebx
        jne public_62bcb00
        public_62bcb2c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x62bc890)
    }
}

#undef public_62bc8b0
#undef public_62bc946
#undef public_62bc94d
#undef public_62bc94f
#undef public_62bc95e
#undef public_62bc990
#undef public_62bc9b3
#undef public_62bc9c0
#undef public_62bc9cd
#undef public_62bc9d0
#undef public_62bc9e1
#undef public_62bc9f0
#undef public_62bca2f
#undef public_62bca3c
#undef public_62bca40
#undef public_62bca4f
#undef public_62bca51
#undef public_62bca85
#undef public_62bca93
#undef public_62bcaaa
#undef public_62bcab8
#undef public_62bcadf
#undef public_62bcae5
#undef public_62bcaf2
#undef public_62bcaf5
#undef public_62bcafc
#undef public_62bcb00
#undef public_62bcb06
#undef public_62bcb1f
#undef public_62bcb2c
