#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_62b17b0);
CLANG_FORWARD_PROC_SYMBOL(public_62c1660);
CLANG_FORWARD_PROC_SYMBOL(public_62c1880);
CLANG_FORWARD_PROC_SYMBOL(public_62c2350);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fbc);

#define public_62c1a0b _public_62c1a0b
#define public_62c1a0d _public_62c1a0d
#define public_62c1a8a _public_62c1a8a
#define public_62c1a8c _public_62c1a8c
#define public_62c1ac5 _public_62c1ac5
#define public_62c1b38 _public_62c1b38
#define public_62c1b74 _public_62c1b74
#define public_62c1b98 _public_62c1b98
#define public_62c1bdf _public_62c1bdf
#define public_62c1bf5 _public_62c1bf5
#define public_62c1c14 _public_62c1c14
#define public_62c1c5f _public_62c1c5f
#define public_62c1c61 _public_62c1c61
#define public_62c1c79 _public_62c1c79
#define public_62c1c7b _public_62c1c7b
#define public_62c1c88 _public_62c1c88
#define public_62c1ca6 _public_62c1ca6
#define public_62c1cbf _public_62c1cbf
#define public_62c1ce0 _public_62c1ce0
#define public_62c1ce2 _public_62c1ce2
#define public_62c1cf9 _public_62c1cf9
#define public_62c1cfb _public_62c1cfb
#define public_62c1da9 _public_62c1da9
#define public_62c1dba _public_62c1dba
#define public_62c1dcc _public_62c1dcc
#define public_62c1dce _public_62c1dce
#define public_62c1def _public_62c1def
#define public_62c1df1 _public_62c1df1
#define public_62c1e0f _public_62c1e0f
#define public_62c1e20 _public_62c1e20
#define public_62c1e2c _public_62c1e2c
#define public_62c1e2e _public_62c1e2e
#define public_62c1e4e _public_62c1e4e
#define public_62c1e50 _public_62c1e50
#define public_62c1e6f _public_62c1e6f
#define public_62c1e71 _public_62c1e71
#define public_62c1e7e _public_62c1e7e
#define public_62c1e99 _public_62c1e99
#define public_62c1ede _public_62c1ede
#define public_62c1f03 _public_62c1f03
#define public_62c1f05 _public_62c1f05
#define public_62c2034 _public_62c2034
#define public_62c2067 _public_62c2067
#define public_62c2094 _public_62c2094
#define public_62c209e _public_62c209e
#define public_62c2174 _public_62c2174
#define public_62c21a3 _public_62c21a3
#define public_62c21f2 _public_62c21f2
#define public_62c2293 _public_62c2293
#define public_62c229f _public_62c229f
#define public_62c22a1 _public_62c22a1
#define public_62c22ca _public_62c22ca
#define public_62c22d6 _public_62c22d6
#define public_62c22d8 _public_62c22d8

PROC_DECLARE(0x62c19d0, internal_62c19d0, public_62c19d0);
extern "C" NAKED register_t __cdecl internal_62c19d0()
{
    __asm
    {
        sub esp, 0xF0
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        push esi
        push edi
        je public_62c1bdf
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c1bdf
        cmp dword ptr ss : [ebp+0x90], 5
        je public_62c1bdf
        mov ecx, dword ptr ss : [ebp+0x18]
        test ecx, ecx
        je public_62c1a0b
        add ecx, 0xFFFFFFF8
        jmp public_62c1a0d
        public_62c1a0b : nop
        xor ecx, ecx
        public_62c1a0d : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x7C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x104]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        lea ecx, ss:[esp+0xD0]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [ebp+0xE8]
        fstp dword ptr ss : [ebp+0xE8]
        call public_62748a0
        cmp dword ptr ss : [ebp+0x90], 4
        mov dword ptr ss : [esp+0xFC], 0
        mov dword ptr ss : [esp+0xF8], 0
        mov dword ptr ss : [esp+0xF4], 0
        mov dword ptr ss : [esp+0x40], 0
        jne public_62c1bf5
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_62c1a8a
        lea ecx, ds:[eax-8]
        jmp public_62c1a8c
        public_62c1a8a : nop
        xor ecx, ecx
        public_62c1a8c : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        fld dword ptr ss : [ebp+0xF4]
        fcomp dword ptr ds : [public_6399408]
        mov esi, eax
        lea ebx, ss:[ebp+0x9C]
        mov ecx, 0xC
        mov edi, ebx
        fnstsw ax
        mov dword ptr ss : [esp+0x3C], ebx
        rep movsd
        test ah, 0x44
        jp public_62c1ac5
        mov ecx, dword ptr ss : [ebp+0xEC]
        mov dword ptr ss : [ebp+0xF4], ecx
        public_62c1ac5 : nop
        mov al, byte ptr ss : [ebp+0x94]
        test al, al
        je public_62c1b98
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x78], 0x3F800000
        fmul qword ptr ds : [public_639f460]
        mov dword ptr ss : [esp+0x68], 0x3F800000
        mov dword ptr ss : [esp+0x58], 0x3F800000
        mov dword ptr ss : [esp+0x74], 0
        fld st(0)
        mov dword ptr ss : [esp+0x70], 0
        fcos 
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x5C], 0
        lea eax, ss:[esp+0x60]
        mov ecx, 3
        fstp dword ptr ss : [esp+0x18]
        fsin 
        public_62c1b38 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62c1b38
        mov eax, dword ptr ds : [public_63fc504]
        fstp st(0)
        test eax, eax
        jne public_62c1b74
        call public_6391cf0
        mov dword ptr ds : [public_63fc504], eax
        public_62c1b74 : nop
        mov edx, dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ss:[esp+0xB4]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0xAC]
        mov edi, ebx
        rep movsd
        public_62c1b98 : nop
        fld dword ptr ss : [ebp+0xF4]
        fld dword ptr ss : [ebp+0xF0]
        fmul qword ptr ds : [public_639f458]
        fsubp 
        fmul dword ptr ss : [esp+0x10]
        fsubr dword ptr ss : [ebp+0xEC]
        fst dword ptr ss : [ebp+0xEC]
        fcomp dword ptr ss : [ebp+0xF0]
        fnstsw ax
        test ah, 0x41
        jp public_62c1c14
        mov edx, dword ptr ss : [ebp+0xF0]
        mov dword ptr ss : [ebp+0xEC], edx
        mov dword ptr ss : [ebp+0x90], 5
        public_62c1bdf : nop
        mov ecx, ebp
        push 0
        call public_62c2350
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xF0
        ret 8
        public_62c1bf5 : nop
        lea eax, ss:[ebp+0x9C]
        push eax
        mov dword ptr ss : [esp+0x40], eax
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[ebp+0x5C]
        push ecx
        lea edx, ss:[ebp+0x28]
        push edx
        mov ecx, ebp
        call public_62c1660
        public_62c1c14 : nop
        mov ecx, dword ptr ss : [ebp+0x5C]
        test ecx, ecx
        je public_62c1ca6
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        call dword ptr ds : [eax+0x40]
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x44
        jnp public_62c1ca6
        fld dword ptr ss : [esp+0x40]
        fcomp qword ptr ds : [public_639df88]
        fnstsw ax
        test ah, 1
        jne public_62c1ca6
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_62c1c5f
        lea ecx, ds:[eax-8]
        jmp public_62c1c61
        public_62c1c5f : nop
        xor ecx, ecx
        public_62c1c61 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_62c1c88
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_62c1c79
        add eax, 0xFFFFFFF8
        jmp public_62c1c7b
        public_62c1c79 : nop
        xor eax, eax
        public_62c1c7b : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push 0
        push 1
        call dword ptr ds : [edx+0x6C]
        public_62c1c88 : nop
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x94], 1
        mov dword ptr ss : [ebp+0x90], 4
        pop ebp
        pop ebx
        add esp, 0xF0
        ret 8
        public_62c1ca6 : nop
        mov eax, dword ptr ss : [ebp+0x90]
        cmp eax, 1
        je public_62c1cbf
        cmp eax, 2
        je public_62c1cbf
        cmp eax, 3
        jne public_62c2034
        public_62c1cbf : nop
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 1
        jne public_62c1dba
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_62c1ce0
        lea ecx, ds:[eax-8]
        jmp public_62c1ce2
        public_62c1ce0 : nop
        xor ecx, ecx
        public_62c1ce2 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62c1cf9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_62c1cfb
        public_62c1cf9 : nop
        xor eax, eax
        public_62c1cfb : nop
        mov ebx, dword ptr ds : [eax+0xAC]
        test ebx, ebx
        je public_62c1dba
        mov ecx, dword ptr ss : [ebp+0x5C]
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x96]
        lea esi, ss:[ebp+0x5C]
        mov dword ptr ss : [esp+0x44], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x48]
        push eax
        call dword ptr ds : [edx+0x130]
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        lea edi, ss:[ebp+0x28]
        mov ecx, 0xD
        rep movsd
        je public_62c1da9
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+4]
        lea esi, ss:[ebp+0x5C]
        push esi
        push eax
        mov ecx, ebp
        call public_62c1880
        fld dword ptr ss : [esp+0x40]
        fld qword ptr ds : [public_6399410]
        call public_6391fbc
        fstp dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [ebp+0x90]
        mov edi, 3
        cmp eax, edi
        je public_62c1dba
        mov ecx, dword ptr ss : [esp+0x44]
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x96]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [edx+0x130]
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_62c1dba
        mov dword ptr ss : [ebp+0x90], edi
        jmp public_62c1dba
        public_62c1da9 : nop
        mov dword ptr ss : [ebp+0x5C], 0
        mov dword ptr ss : [ebp+0x90], 4
        public_62c1dba : nop
        mov eax, dword ptr ss : [ebp+0x18]
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], esi
        je public_62c1dcc
        lea ecx, ds:[eax-8]
        jmp public_62c1dce
        public_62c1dcc : nop
        xor ecx, ecx
        public_62c1dce : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0xB0]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, esi
        je public_62c1e20
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, esi
        je public_62c1def
        add eax, 0xFFFFFFF8
        jmp public_62c1df1
        public_62c1def : nop
        xor eax, eax
        public_62c1df1 : nop
        cmp ecx, eax
        je public_62c1e20
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, esi
        je public_62c1e0f
        mov edx, dword ptr ds : [eax-8]
        lea ecx, ds:[eax-8]
        lea eax, ss:[esp+0x48]
        push eax
        call dword ptr ds : [edx+0xAC]
        jmp public_62c1e7e
        public_62c1e0f : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x48]
        push eax
        call dword ptr ds : [edx+0xAC]
        jmp public_62c1e7e
        public_62c1e20 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, esi
        je public_62c1e2c
        lea ecx, ds:[eax-8]
        jmp public_62c1e2e
        public_62c1e2c : nop
        xor ecx, ecx
        public_62c1e2e : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_62c1ede
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, esi
        mov dword ptr ss : [esp+0x28], esi
        je public_62c1e4e
        lea ecx, ds:[eax-8]
        jmp public_62c1e50
        public_62c1e4e : nop
        xor ecx, ecx
        public_62c1e50 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+0xB8]
        cmp dword ptr ss : [esp+0x28], esi
        je public_62c1ede
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, esi
        je public_62c1e6f
        lea ecx, ds:[eax-8]
        jmp public_62c1e71
        public_62c1e6f : nop
        xor ecx, ecx
        public_62c1e71 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x48]
        push eax
        call dword ptr ds : [edx+0xB4]
        public_62c1e7e : nop
        mov eax, dword ptr ds : [public_63fc504]
        cmp eax, esi
        mov dword ptr ss : [esp+0x50], 0
        jne public_62c1e99
        call public_6391cf0
        mov dword ptr ds : [public_63fc504], eax
        public_62c1e99 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [ebp+0xC0]
        fstp dword ptr ss : [ebp+0xC0]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [ebp+0xC4]
        fstp dword ptr ss : [ebp+0xC4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [ebp+0xC8]
        fstp dword ptr ss : [ebp+0xC8]
        public_62c1ede : nop
        call public_6303220
        test al, al
        jne public_62c2034
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, esi
        je public_62c2034
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, esi
        je public_62c1f03
        add eax, 0xFFFFFFF8
        jmp public_62c1f05
        public_62c1f03 : nop
        xor eax, eax
        public_62c1f05 : nop
        cmp ecx, eax
        je public_62c2034
        lea edx, ss:[esp+0x17]
        mov byte ptr ss : [esp+0x17], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x134]
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        jne public_62c2034
        fld dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x34], 0
        fld dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x30], 0
        fstp dword ptr ss : [esp+0x50]
        fxch 
        mov dword ptr ss : [esp+0x2C], 0
        fchs 
        mov dword ptr ss : [esp+0x38], 0
        mov eax, dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x50]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x2C], ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        call public_6347e60
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi]
        faddp 
        fchs 
        fld dword ptr ss : [esp+0xA0]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0xA8]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0xA4]
        faddp 
        fadd st, st(1)
        fcomp qword ptr ds : [public_639f450]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62c2034
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x90], 4
        pop ebp
        pop ebx
        add esp, 0xF0
        ret 8
        public_62c2034 : nop
        mov eax, dword ptr ss : [ebp+0x90]
        dec eax
        je public_62c2067
        dec eax
        je public_62c2094
        dec eax
        jne public_62c209e
        fld dword ptr ds : [public_639f3cc]
        fdivr qword ptr ds : [public_639f448]
        fsubr dword ptr ds : [public_639a1d0]
        fmul dword ptr ss : [esp+0x40]
        fsubr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [ebp+0xEC]
        jmp public_62c209e
        public_62c2067 : nop
        fld dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_639f440]
        fadd dword ptr ss : [ebp+0xEC]
        fst dword ptr ss : [ebp+0xEC]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 1
        jne public_62c209e
        mov dword ptr ss : [ebp+0x90], 2
        public_62c2094 : nop
        mov dword ptr ss : [ebp+0xEC], 0x3F800000
        public_62c209e : nop
        fld dword ptr ds : [public_639f3cc]
        mov esi, dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [ebp+0xEC]
        lea ebx, ss:[ebp+0xC0]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+0x14]
        fld dword ptr ds : [esi+0x20]
        fstp dword ptr ss : [esp+0x50]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        fchs 
        fld dword ptr ss : [esp+0x50]
        fchs 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fxch st(2)
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fxch 
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [ebx]
        fstp dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [ebx+4]
        fstp dword ptr ds : [ebx+4]
        fld st(0)
        fadd dword ptr ds : [ebx+8]
        fstp dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [ebp+0xCC]
        fstp dword ptr ss : [ebp+0xCC]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [ebp+0xD0]
        fstp dword ptr ss : [ebp+0xD0]
        fadd dword ptr ss : [ebp+0xD4]
        fstp dword ptr ss : [ebp+0xD4]
        mov eax, dword ptr ss : [ebp+0x90]
        cmp eax, 1
        jne public_62c2293
        fld dword ptr ss : [ebp+0xE8]
        fcomp qword ptr ds : [public_639f438]
        fnstsw ax
        test ah, 5
        jp public_62c2293
        mov eax, dword ptr ds : [public_63fc504]
        test eax, eax
        jne public_62c2174
        call public_6391cf0
        mov dword ptr ds : [public_63fc504], eax
        public_62c2174 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        fld dword ptr ss : [ebp+0xE8]
        fmul qword ptr ds : [public_639e0e8]
        mov eax, dword ptr ds : [public_63fc504]
        test eax, eax
        fstp dword ptr ss : [esp+0x10]
        jne public_62c21a3
        call public_6391cf0
        mov dword ptr ds : [public_63fc504], eax
        public_62c21a3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[ebp+0xD8]
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [public_63fc504]
        test eax, eax
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], edx
        jne public_62c21f2
        call public_6391cf0
        mov dword ptr ds : [public_63fc504], eax
        public_62c21f2 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0xB0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        fld dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x3C]
        mov ecx, 9
        lea esi, ss:[esp+0xAC]
        rep movsd
        fmul dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x34]
        mov eax, ebx
        fld dword ptr ss : [esp+0x10]
        fsubr qword ptr ds : [public_6399410]
        fld st(0)
        fmul dword ptr ss : [ebp+0xCC]
        fld st(1)
        fmul dword ptr ss : [ebp+0xD0]
        fstp dword ptr ss : [esp+0x4C]
        fxch 
        fmul dword ptr ss : [ebp+0xD4]
        fstp dword ptr ss : [esp+0x50]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fadd st, st(1)
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        fstp st(0)
        mov dword ptr ds : [eax+4], edx
        fstp st(0)
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], ecx
        public_62c2293 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_62c229f
        lea ecx, ds:[eax-8]
        jmp public_62c22a1
        public_62c229f : nop
        xor ecx, ecx
        public_62c22a1 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62c22ca
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62c22ca
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        mov ecx, eax
        call public_62b17b0
        public_62c22ca : nop
        mov ebp, dword ptr ss : [ebp+0x18]
        test ebp, ebp
        je public_62c22d6
        lea ecx, ss:[ebp-8]
        jmp public_62c22d8
        public_62c22d6 : nop
        xor ecx, ecx
        public_62c22d8 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        mov edx, dword ptr ds : [eax]
        push 1
        push esi
        push ebx
        mov ecx, eax
        call dword ptr ds : [edx+0x7C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xF0
        ret 8
        UNREACHABLE_TRAP(0x62c19d0)
    }
}

#undef public_62c1a0b
#undef public_62c1a0d
#undef public_62c1a8a
#undef public_62c1a8c
#undef public_62c1ac5
#undef public_62c1b38
#undef public_62c1b74
#undef public_62c1b98
#undef public_62c1bdf
#undef public_62c1bf5
#undef public_62c1c14
#undef public_62c1c5f
#undef public_62c1c61
#undef public_62c1c79
#undef public_62c1c7b
#undef public_62c1c88
#undef public_62c1ca6
#undef public_62c1cbf
#undef public_62c1ce0
#undef public_62c1ce2
#undef public_62c1cf9
#undef public_62c1cfb
#undef public_62c1da9
#undef public_62c1dba
#undef public_62c1dcc
#undef public_62c1dce
#undef public_62c1def
#undef public_62c1df1
#undef public_62c1e0f
#undef public_62c1e20
#undef public_62c1e2c
#undef public_62c1e2e
#undef public_62c1e4e
#undef public_62c1e50
#undef public_62c1e6f
#undef public_62c1e71
#undef public_62c1e7e
#undef public_62c1e99
#undef public_62c1ede
#undef public_62c1f03
#undef public_62c1f05
#undef public_62c2034
#undef public_62c2067
#undef public_62c2094
#undef public_62c209e
#undef public_62c2174
#undef public_62c21a3
#undef public_62c21f2
#undef public_62c2293
#undef public_62c229f
#undef public_62c22a1
#undef public_62c22ca
#undef public_62c22d6
#undef public_62c22d8
