#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ad0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4231f0);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_423b90);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b806a);

#define public_423308 _public_423308
#define public_423321 _public_423321
#define public_423364 _public_423364
#define public_42337d _public_42337d
#define public_423464 _public_423464
#define public_423496 _public_423496
#define public_423523 _public_423523
#define public_4235ad _public_4235ad
#define public_423918 _public_423918
#define public_423923 _public_423923
#define public_423980 _public_423980
#define public_423a2a _public_423a2a
#define public_423a53 _public_423a53
#define public_423aea _public_423aea

PROC_DECLARE(0x4231f0, internal_4231f0, public_4231f0);
extern "C" NAKED register_t __cdecl internal_4231f0()
{
    __asm
    {
        sub esp, 0x184
        push ebx
        mov ebx, dword ptr ss : [esp+0x18C]
        push ebp
        push esi
        push edi
        lea edi, ds:[ebx+0x20]
        push edi
        lea esi, ds:[ebx+8]
        lea eax, ss:[esp+0x38]
        push esi
        push eax
        call public_423b60
        push edi
        lea ecx, ds:[ebx+0x14]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call public_423b60
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x54]
        add esp, 0x18
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        test ah, 5
        jnp public_423918
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        test ah, 5
        jnp public_423918
        fld dword ptr ds : [ebx+0x48]
        lea ecx, ss:[esp+0x18]
        fmul dword ptr ds : [ebx+0x44]
        fstp dword ptr ss : [esp+0x88]
        call public_410190
        fdivr dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fdiv dword ptr ss : [esp+0x24]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7500]
        fnstsw ax
        test ah, 5
        jp public_423308
        mov dword ptr ss : [esp+0x10], 0xBF800000
        jmp public_423321
        public_423308 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_423321
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_423321 : nop
        fld dword ptr ss : [esp+0x10]
        call public_5b806a
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x44]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x24]
        fadd st(0), st
        fdivp 
        fsubr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7500]
        fnstsw ax
        test ah, 5
        jp public_423364
        mov dword ptr ss : [esp+0x10], 0xBF800000
        jmp public_42337d
        public_423364 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_42337d
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_42337d : nop
        fld dword ptr ss : [esp+0x10]
        call public_5b806a
        fdivr dword ptr ss : [esp+0x14]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        fadd qword ptr ds : [public_5c89b8]
        call public_5b7ec0
        mov ebp, eax
        mov dword ptr ss : [esp+0x2C], ebp
        fild dword ptr ss : [esp+0x2C]
        fdivr dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x3C]
        fsubp 
        fstp dword ptr ss : [esp]
        push ecx
        fld dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x88]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x28]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_423923
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ds : [public_5c6d4c]
        lea esi, ss:[esp+0x180]
        push esi
        push 0
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        push 0xBE2
        call public_421dd0
        push 2
        push 2
        call public_4220c0
        mov esi, 1
        add esp, 0xC
        cmp ebp, esi
        mov dword ptr ss : [esp+0x14], esi
        jl public_423918
        add ebx, 0x2C
        cmp esi, ebp
        public_423464 : nop
        jne public_423496
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x100]
        push edi
        push ecx
        call public_423b30
        mov edx, dword ptr ss : [esp+0x108]
        mov eax, dword ptr ss : [esp+0x10C]
        mov ecx, dword ptr ss : [esp+0x110]
        add esp, 0xC
        jmp public_4235ad
        public_423496 : nop
        fild dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x7C]
        fmul dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c75e0]
        fst dword ptr ss : [esp+0x14]
        fsin 
        fstp dword ptr ss : [esp+0x10]
        call public_410190
        fdivr dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x7C]
        lea ecx, ss:[esp+0x108]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fcos 
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ecx
        fstp dword ptr ss : [esp+0xB0]
        call public_411d60
        mov eax, dword ptr ss : [esp+0x118]
        mov edx, dword ptr ss : [esp+0x114]
        mov ecx, dword ptr ss : [esp+0x11C]
        mov dword ptr ss : [esp+0xB8], eax
        mov eax, dword ptr ds : [public_6679d8]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0xA8], edx
        mov dword ptr ss : [esp+0xB0], ecx
        jne public_423523
        call public_5b73e0
        mov dword ptr ds : [public_6679d8], eax
        public_423523 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xA4]
        push ecx
        lea ecx, ss:[esp+0x160]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x160]
        push eax
        lea ecx, ss:[esp+0x128]
        push ecx
        call public_423b90
        lea edx, ss:[esp+0x12C]
        push edx
        lea eax, ss:[esp+0x148]
        push edi
        push eax
        call public_423b30
        mov ecx, dword ptr ss : [esp+0xA0]
        push ecx
        lea edx, ss:[esp+0x148]
        push edx
        call dword ptr ds : [public_5c60a4]
        push eax
        lea eax, ss:[esp+0x15C]
        push eax
        lea ecx, ss:[esp+0x13C]
        push ecx
        call public_423b30
        mov edx, dword ptr ss : [esp+0x140]
        mov eax, dword ptr ss : [esp+0x144]
        mov ecx, dword ptr ss : [esp+0x148]
        add esp, 0x2C
        public_4235ad : nop
        mov dword ptr ss : [esp+0x64], edx
        lea edx, ss:[esp+0x4C]
        push edx
        mov dword ptr ss : [esp+0x6C], eax
        lea eax, ss:[esp+0xB8]
        push ebx
        push eax
        mov dword ptr ss : [esp+0x78], ecx
        call public_423b60
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        call public_423b60
        fld dword ptr ss : [esp+0xD0]
        fmul dword ptr ss : [esp+0x58]
        add esp, 0xC
        fld dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x7C]
        fmul dword ptr ss : [esp+0xC0]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0xC0]
        fld dword ptr ss : [esp+0xC8]
        fmul dword ptr ss : [esp+0x4C]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC8]
        fmul dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0xC4]
        fmul dword ptr ss : [esp+0x54]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_422b80
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x158]
        push eax
        call public_423b60
        push 0x3F000000
        lea ecx, ss:[esp+0x160]
        push ecx
        lea edx, ss:[esp+0x158]
        push edx
        call public_411d60
        lea eax, ss:[esp+0x15C]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        lea edx, ss:[esp+0x78]
        push edx
        call public_423b30
        lea eax, ss:[esp+0x70]
        push eax
        lea ecx, ss:[esp+0x80]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        call public_423b60
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        add esp, 0x30
        fld dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x70]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x14]
        call public_410190
        fdivr dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x74]
        lea eax, ss:[esp+0x58]
        fmul st, st(1)
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        fstp dword ptr ss : [esp+0x7C]
        lea edx, ss:[esp+0xEC]
        fld dword ptr ss : [esp+0x80]
        push edx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x84]
        fstp st(0)
        call public_423b60
        fld dword ptr ss : [esp+0xF8]
        lea ecx, ss:[esp+0xD8]
        fmul dword ptr ds : [public_5c9800]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xF4]
        fmul dword ptr ds : [public_5c9800]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xF0]
        fmul dword ptr ds : [public_5c9800]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x78]
        sub esp, 0xC
        fmul dword ptr ds : [public_5c9800]
        lea ecx, ss:[esp+0xCC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ds : [public_5c9800]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ds : [public_5c9800]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x180]
        push eax
        call public_4220a0
        push 8
        call public_421670
        push 0
        push 0
        call public_421ca0
        lea ecx, ss:[esp+0xDC]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        lea eax, ss:[esp+0x108]
        push eax
        call public_423b30
        mov ecx, dword ptr ss : [esp+0x114]
        mov edx, dword ptr ss : [esp+0x110]
        mov eax, dword ptr ss : [esp+0x10C]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        lea ecx, ss:[esp+0xF0]
        push ecx
        lea edx, ss:[esp+0x8C]
        push edx
        lea eax, ss:[esp+0x110]
        push eax
        call public_423b30
        mov ecx, dword ptr ss : [esp+0x11C]
        mov edx, dword ptr ss : [esp+0x118]
        mov eax, dword ptr ss : [esp+0x114]
        push ecx
        push edx
        push eax
        call public_421cc0
        add esp, 0x48
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0xDC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x64]
        fsub dword ptr ss : [esp+0xD8]
        fstp dword ptr ss : [esp]
        push ecx
        fld dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0xA4]
        fsub dword ptr ss : [esp+0xD8]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0xA0]
        mov edx, dword ptr ss : [esp+0x9C]
        mov eax, dword ptr ss : [esp+0x98]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0x3F800000
        push 0
        call public_421ca0
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0xDC]
        add esp, 8
        lea ecx, ss:[esp+0x98]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0xD0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x64]
        fsub dword ptr ss : [esp+0xCC]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x94]
        mov edx, dword ptr ss : [esp+0x90]
        mov eax, dword ptr ss : [esp+0x8C]
        push ecx
        push edx
        push eax
        call public_421cc0
        add esp, 0xC
        call public_421690
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x6C]
        inc esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x14], esi
        jle public_423464
        public_423918 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x184
        ret 
        public_423923 : nop
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421ed0
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edx, dword ptr ds : [ebx+0x3C]
        mov eax, dword ptr ds : [ebx+0x38]
        push ecx
        push edx
        push eax
        call public_421ad0
        push 3
        call public_421670
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        push eax
        call public_421cc0
        mov esi, 1
        add esp, 0x24
        cmp ebp, esi
        mov dword ptr ss : [esp+0x14], esi
        jle public_423aea
        mov ebx, dword ptr ss : [esp+0x88]
        lea ebx, ds:[ebx]
        public_423980 : nop
        fild dword ptr ss : [esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x80]
        lea edx, ss:[esp+0x90]
        fmul dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c75e0]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0xA8]
        fsin 
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ss : [esp+0x80]
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ss : [esp+0x88]
        faddp 
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x84]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_411d60
        mov eax, dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0xB4], eax
        mov eax, dword ptr ds : [public_6679d8]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0xAC], ecx
        mov dword ptr ss : [esp+0xB0], edx
        jne public_423a2a
        call public_5b73e0
        mov dword ptr ds : [public_6679d8], eax
        public_423a2a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA4]
        push edx
        lea edx, ss:[esp+0x160]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_6679d8]
        test eax, eax
        jne public_423a53
        call public_5b73e0
        mov dword ptr ds : [public_6679d8], eax
        public_423a53 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        lea edx, ss:[esp+0x160]
        push edx
        lea edx, ss:[esp+0xA0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x98]
        fadd dword ptr ds : [edi]
        lea eax, ss:[esp+0x12C]
        push ebx
        push eax
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0xA4]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0xA8]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x38]
        call dword ptr ds : [public_5c60a4]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        push edx
        push eax
        call public_421cc0
        add esp, 0x14
        inc esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x14], esi
        jl public_423980
        public_423aea : nop
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        push eax
        call public_421cc0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x184
        jmp public_421690
        UNREACHABLE_TRAP(0x4231f0)
    }
}

#undef public_423308
#undef public_423321
#undef public_423364
#undef public_42337d
#undef public_423464
#undef public_423496
#undef public_423523
#undef public_4235ad
#undef public_423918
#undef public_423923
#undef public_423980
#undef public_423a2a
#undef public_423a53
#undef public_423aea
