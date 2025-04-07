#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2c610);
CLANG_FORWARD_PROC_SYMBOL(public_6c2c630);
CLANG_FORWARD_PROC_SYMBOL(public_6c31ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c32040);
CLANG_FORWARD_PROC_SYMBOL(public_6c33090);
CLANG_FORWARD_PROC_SYMBOL(public_6c330b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c33100);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34e60);

#define public_6c32aa5 _public_6c32aa5
#define public_6c32ad9 _public_6c32ad9
#define public_6c32b5a _public_6c32b5a
#define public_6c32b6b _public_6c32b6b
#define public_6c32b71 _public_6c32b71
#define public_6c32ba5 _public_6c32ba5
#define public_6c32be8 _public_6c32be8
#define public_6c32c7d _public_6c32c7d
#define public_6c32cc9 _public_6c32cc9
#define public_6c32d13 _public_6c32d13
#define public_6c32d28 _public_6c32d28
#define public_6c32d63 _public_6c32d63
#define public_6c32d76 _public_6c32d76
#define public_6c32dc1 _public_6c32dc1
#define public_6c32e07 _public_6c32e07
#define public_6c32e0f _public_6c32e0f
#define public_6c32e3e _public_6c32e3e
#define public_6c32e9b _public_6c32e9b
#define public_6c32ea9 _public_6c32ea9
#define public_6c32eb1 _public_6c32eb1
#define public_6c32ee5 _public_6c32ee5
#define public_6c32ef7 _public_6c32ef7
#define public_6c32f14 _public_6c32f14
#define public_6c32f77 _public_6c32f77
#define public_6c32f79 _public_6c32f79
#define public_6c32fbc _public_6c32fbc
#define public_6c32fca _public_6c32fca
#define public_6c32fd5 _public_6c32fd5
#define public_6c33006 _public_6c33006
#define public_6c33044 _public_6c33044
#define public_6c3304d _public_6c3304d
#define public_6c33055 _public_6c33055
#define public_6c33075 _public_6c33075

PROC_DECLARE(0x6c32a80, internal_6c32a80, public_6c32a80);
extern "C" NAKED register_t __cdecl internal_6c32a80()
{
    __asm
    {
        fld dword ptr ss : [esp+0x10]
        sub esp, 0x1AC
        fcomp dword ptr ds : [public_6c36320]
        fnstsw ax
        test ah, 5
        jp public_6c32aa5
        mov eax, 1
        add esp, 0x1AC
        ret 0x1C
        public_6c32aa5 : nop
        mov edx, dword ptr ss : [esp+0x1B8]
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, dword ptr ss : [esp+0x1D4]
        test esi, esi
        mov ebp, eax
        jne public_6c32ad9
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        jmp public_6c32b71
        public_6c32ad9 : nop
        fld dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x18]
        fld dword ptr ds : [esi+0x14]
        fld dword ptr ds : [esi+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi+0x10]
        fld dword ptr ds : [esi+0x1C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [esi]
        fld dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+0x18]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x24]
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jnp public_6c32b5a
        lea ecx, ss:[esp+0x24]
        public_6c32b5a : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_6c32b6b
        lea ecx, ss:[esp+0x1C]
        public_6c32b6b : nop
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], eax
        public_6c32b71 : nop
        test esi, esi
        mov ebx, dword ptr ss : [esp+0x1D0]
        mov dword ptr ss : [esp+0x18], esi
        je public_6c32d28
        test bl, 0x40
        jne public_6c32d28
        test bl, 0x10
        je public_6c32be8
        mov eax, dword ptr ds : [public_6c37d48]
        test eax, eax
        jne public_6c32ba5
        call public_6c34e60
        mov dword ptr ds : [public_6c37d48], eax
        public_6c32ba5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, 9
        lea edi, ss:[esp+0x6C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x90], eax
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x98], edx
        lea esi, ss:[esp+0x6C]
        and ebx, 0xFFFFFFEF
        public_6c32be8 : nop
        test bl, 0x20
        lea edi, ss:[esp+0x9C]
        mov ecx, 0xC
        rep movsd
        je public_6c32d13
        lea eax, ss:[ebp+0x24]
        push eax
        lea ecx, ss:[esp+0x40]
        push ebp
        push ecx
        call public_6c33100
        add esp, 0xC
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x40]
        call public_6c33090
        lea eax, ss:[esp+0x6C]
        push eax
        mov ecx, ebp
        call public_6c330b0
        mov edx, dword ptr ss : [esp+0x2C]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, 9
        lea edi, ss:[esp+0xCC]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0xF0], ecx
        push 0
        lea ecx, ss:[esp+0x130]
        mov dword ptr ss : [esp+0xF8], edx
        mov dword ptr ss : [esp+0xFC], eax
        call public_6c2c630
        mov eax, dword ptr ds : [public_6c37d48]
        test eax, eax
        jne public_6c32c7d
        call public_6c34e60
        mov dword ptr ds : [public_6c37d48], eax
        public_6c32c7d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x9C]
        push edx
        push ebp
        lea edx, ss:[esp+0x134]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x12C]
        push eax
        lea ecx, ss:[esp+0x160]
        call public_6c2c610
        push 0
        lea ecx, ss:[esp+0x100]
        call public_6c2c630
        mov eax, dword ptr ds : [public_6c37d48]
        test eax, eax
        jne public_6c32cc9
        call public_6c34e60
        mov dword ptr ds : [public_6c37d48], eax
        public_6c32cc9 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xCC]
        push edx
        lea edx, ss:[esp+0x160]
        push edx
        lea edx, ss:[esp+0x104]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0xFC]
        push eax
        lea ecx, ss:[esp+0x190]
        call public_6c2c610
        mov ecx, 0xC
        lea esi, ss:[esp+0x18C]
        lea edi, ss:[esp+0x9C]
        rep movsd
        and ebx, 0xFFFFFFDF
        public_6c32d13 : nop
        or ebx, 0x40
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x1D0], ebx
        mov dword ptr ss : [esp+0x18], ecx
        public_6c32d28 : nop
        mov eax, dword ptr ds : [public_6c37d4c]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x60]
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1D0]
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0x88]
        fld dword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_6c367e0]
        fnstsw ax
        test ah, 5
        jp public_6c32d63
        mov dword ptr ss : [esp+0x34], 0x3F800000
        public_6c32d63 : nop
        mov eax, dword ptr ds : [public_6c37d48]
        test eax, eax
        jne public_6c32d76
        call public_6c34e60
        mov dword ptr ds : [public_6c37d48], eax
        public_6c32d76 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x60]
        push ecx
        push ebp
        lea ecx, ss:[esp+0x50]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x48]
        mov edi, dword ptr ss : [esp+0x1C4]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ds : [edi]
        push edi
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        call dword ptr ds : [edx+0x40]
        mov esi, eax
        mov eax, dword ptr ds : [public_6c37d48]
        test eax, eax
        jne public_6c32dc1
        call public_6c34e60
        mov dword ptr ds : [public_6c37d48], eax
        public_6c32dc1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        push esi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6c36320]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x54], eax
        fnstsw ax
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x5C], edx
        test ah, 5
        jp public_6c32e07
        fld dword ptr ss : [esp+0x30]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        jmp public_6c32e0f
        public_6c32e07 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x24], eax
        public_6c32e0f : nop
        test bh, 1
        jne public_6c32e9b
        fld dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [edi]
        fmul dword ptr ss : [esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x58]
        fstp dword ptr ss : [esp]
        push edx
        push edi
        call dword ptr ds : [ecx+0x3C]
        mov ebp, eax
        cmp ebp, 3
        mov dword ptr ss : [esp+0x10], ebp
        jl public_6c32fd5
        public_6c32e3e : nop
        mov edx, dword ptr ss : [esp+0x1C8]
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x38], eax
        je public_6c32fd5
        mov ecx, dword ptr ds : [public_6c37d4c]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x3C]
        mov ebx, dword ptr ss : [esp+0x1C0]
        lea eax, ss:[esp+0x38]
        lea esi, ds:[ebx+4]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_6c32ea9
        mov ecx, dword ptr ss : [esp+0x38]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c32ea9
        lea eax, ss:[esp+0x20]
        jmp public_6c32eb1
        public_6c32e9b : nop
        mov dword ptr ss : [esp+0x10], 4
        mov ebp, dword ptr ss : [esp+0x10]
        jmp public_6c32e3e
        public_6c32ea9 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6c32eb1 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov ebx, dword ptr ss : [esp+0x1D0]
        je public_6c32fd5
        lea ebp, ds:[eax+0x10]
        mov al, bl
        test al, al
        jns public_6c32ee5
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [ebp+4]
        jge public_6c32fbc
        mov edx, dword ptr ss : [ebp]
        lea esi, ds:[edx+eax*8]
        jmp public_6c32f79
        public_6c32ee5 : nop
        test al, 8
        jne public_6c32ef7
        push 0
        mov ecx, ebp
        call public_6c31ff0
        jmp public_6c32f77
        public_6c32ef7 : nop
        mov al, byte ptr ss : [ebp+0xC]
        test al, al
        je public_6c32f14
        mov edx, dword ptr ss : [esp+0x1C8]
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xDC]
        public_6c32f14 : nop
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x18]
        fstp st(0)
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+0x14]
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        sub eax, dword ptr ds : [ecx]
        inc eax
        cdq 
        sub eax, edx
        mov edx, dword ptr ds : [edi]
        sar eax, 1
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push edi
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x14]
        push edi
        call dword ptr ds : [eax+0x20]
        fmul dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x1D0]
        push ecx
        fdivr dword ptr ss : [esp+0x24]
        mov ecx, ebp
        and ebx, 0xFFFFFFF7
        fdiv dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x1D0]
        fstp dword ptr ss : [esp]
        call public_6c32040
        public_6c32f77 : nop
        mov esi, eax
        public_6c32f79 : nop
        test esi, esi
        je public_6c32fbc
        mov edx, dword ptr ss : [ebp]
        mov ecx, esi
        sub ecx, edx
        sar ecx, 3
        mov dword ptr ss : [ebp+8], ecx
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x1C8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push ebp
        push eax
        call dword ptr ds : [edx+0x44]
        mov ecx, dword ptr ss : [esp+0x1D8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi]
        push ebx
        push ebp
        push ecx
        push edi
        push eax
        call dword ptr ds : [edx+0x40]
        jmp public_6c32fca
        public_6c32fbc : nop
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [esp+0x10], 1
        public_6c32fca : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x1D0]
        public_6c32fd5 : nop
        test bh, 0x20
        jne public_6c33075
        mov edx, dword ptr ss : [esp+0x1C8]
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6c33075
        mov ebx, dword ptr ss : [esp+0x1CC]
        public_6c33006 : nop
        mov edx, dword ptr ss : [esp+0x1D8]
        mov eax, dword ptr ss : [esp+0x1C0]
        mov ecx, dword ptr ds : [eax]
        push edx
        push dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1D8]
        push edx
        push ebx
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0x1C]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6c33055
        mov dword ptr ss : [esp+0x20], 3
        lea eax, ss:[esp+0x14]
        jl public_6c33044
        lea eax, ss:[esp+0x10]
        public_6c33044 : nop
        cmp dword ptr ds : [eax], 3
        jle public_6c3304d
        lea eax, ss:[esp+0x20]
        public_6c3304d : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        public_6c33055 : nop
        mov edx, dword ptr ss : [esp+0x1C8]
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_6c33006
        public_6c33075 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x1AC
        ret 0x1C
        UNREACHABLE_TRAP(0x6c32a80)
    }
}

#undef public_6c32aa5
#undef public_6c32ad9
#undef public_6c32b5a
#undef public_6c32b6b
#undef public_6c32b71
#undef public_6c32ba5
#undef public_6c32be8
#undef public_6c32c7d
#undef public_6c32cc9
#undef public_6c32d13
#undef public_6c32d28
#undef public_6c32d63
#undef public_6c32d76
#undef public_6c32dc1
#undef public_6c32e07
#undef public_6c32e0f
#undef public_6c32e3e
#undef public_6c32e9b
#undef public_6c32ea9
#undef public_6c32eb1
#undef public_6c32ee5
#undef public_6c32ef7
#undef public_6c32f14
#undef public_6c32f77
#undef public_6c32f79
#undef public_6c32fbc
#undef public_6c32fca
#undef public_6c32fd5
#undef public_6c33006
#undef public_6c33044
#undef public_6c3304d
#undef public_6c33055
#undef public_6c33075
