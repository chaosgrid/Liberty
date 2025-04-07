#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e1c90);
CLANG_FORWARD_PROC_SYMBOL(public_62e4ea0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5850);
CLANG_FORWARD_PROC_SYMBOL(public_62e58f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b70);
CLANG_FORWARD_PROC_SYMBOL(public_62e6010);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6150);
CLANG_FORWARD_PROC_SYMBOL(public_62e8850);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

#define public_62d5d1a _public_62d5d1a
#define public_62d5d1c _public_62d5d1c
#define public_62d5d46 _public_62d5d46
#define public_62d5de5 _public_62d5de5
#define public_62d5de7 _public_62d5de7
#define public_62d5df6 _public_62d5df6
#define public_62d5e02 _public_62d5e02
#define public_62d5e04 _public_62d5e04
#define public_62d5e80 _public_62d5e80
#define public_62d5e8b _public_62d5e8b
#define public_62d5eb7 _public_62d5eb7
#define public_62d5eb9 _public_62d5eb9
#define public_62d5f02 _public_62d5f02
#define public_62d5f2c _public_62d5f2c
#define public_62d5f3f _public_62d5f3f
#define public_62d5f41 _public_62d5f41
#define public_62d5f80 _public_62d5f80
#define public_62d6036 _public_62d6036
#define public_62d6057 _public_62d6057
#define public_62d6072 _public_62d6072
#define public_62d609c _public_62d609c
#define public_62d60d5 _public_62d60d5
#define public_62d60e1 _public_62d60e1
#define public_62d60e3 _public_62d60e3
#define public_62d6172 _public_62d6172
#define public_62d61da _public_62d61da
#define public_62d61f5 _public_62d61f5
#define public_62d62a3 _public_62d62a3
#define public_62d62a5 _public_62d62a5
#define public_62d62b9 _public_62d62b9
#define public_62d62d9 _public_62d62d9
#define public_62d6312 _public_62d6312
#define public_62d6314 _public_62d6314
#define public_62d635a _public_62d635a
#define public_62d6362 _public_62d6362
#define public_62d6388 _public_62d6388
#define public_62d639e _public_62d639e
#define public_62d63d3 _public_62d63d3
#define public_62d63d5 _public_62d63d5
#define public_62d63e0 _public_62d63e0
#define public_62d63e6 _public_62d63e6
#define public_62d6436 _public_62d6436
#define public_62d6438 _public_62d6438
#define public_62d6481 _public_62d6481
#define public_62d6483 _public_62d6483
#define public_62d64f7 _public_62d64f7
#define public_62d651f _public_62d651f
#define public_62d6528 _public_62d6528

PROC_DECLARE(0x62d5ce0, internal_62d5ce0, public_62d5ce0);
extern "C" NAKED register_t __cdecl internal_62d5ce0()
{
    __asm
    {
        sub esp, 0x64
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi+0x3D], 0
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d6528
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62d6528
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_62d6528
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        push ebx
        push ebp
        push edi
        je public_62d5d1a
        lea ebp, ds:[eax-8]
        jmp public_62d5d1c
        public_62d5d1a : nop
        xor ebp, ebp
        public_62d5d1c : nop
        mov edi, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62d5d46
        mov ecx, dword ptr ds : [edi+0x84]
        lea edx, ds:[edi+0xC]
        push edx
        lea edx, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62d5d46 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax]
        fld dword ptr ds : [edi+0x14]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x10]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi+0xC]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x38]
        mov edx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x38]
        mov al, byte ptr ds : [esi+0x38]
        fld dword ptr ss : [esp+0x3C]
        mov byte ptr ss : [esp+0x12], 0
        fmul dword ptr ss : [esp+0x3C]
        mov byte ptr ss : [esp+0x13], 0
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fst dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        sar ecx, 1
        sub edx, ecx
        test al, al
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        je public_62d5df6
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d5de5
        lea ecx, ds:[eax-8]
        jmp public_62d5de7
        public_62d5de5 : nop
        xor ecx, ecx
        public_62d5de7 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x13]
        push edx
        lea edx, ss:[esp+0x16]
        push edx
        call dword ptr ds : [eax+0x5C]
        public_62d5df6 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d5e02
        lea ecx, ds:[eax-8]
        jmp public_62d5e04
        public_62d5e02 : nop
        xor ecx, ecx
        public_62d5e04 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x5C]
        push edx
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        fld st(0)
        lea edx, ss:[esp+0x5C]
        fmul st, st(1)
        push edx
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
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        je public_62d5e80
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_62d5e80
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        push 4
        push ebp
        push eax
        jmp public_62d5e8b
        public_62d5e80 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        push 1
        push ebp
        push ecx
        public_62d5e8b : nop
        call public_62e5b70
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x28]
        add esp, 0xC
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62d6072
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d5eb7
        add eax, 0xFFFFFFF8
        jmp public_62d5eb9
        public_62d5eb7 : nop
        xor eax, eax
        public_62d5eb9 : nop
        push eax
        lea edx, ss:[esp+0x3C]
        push edx
        call public_62e60e0
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0x1C]
        add esp, 8
        fmul qword ptr ds : [public_63a04a0]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62d5f02
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        jmp public_62d6057
        public_62d5f02 : nop
        mov edi, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62d5f2c
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d5f2c : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ss : [esp+0x28], ecx
        je public_62d5f3f
        add eax, 0xFFFFFFF8
        jmp public_62d5f41
        public_62d5f3f : nop
        xor eax, eax
        public_62d5f41 : nop
        push eax
        call public_62e6010
        fadd dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edi+0x157A]
        fadd dword ptr ss : [esp+0x18]
        add edi, 0x14FC
        add esp, 4
        test al, al
        fstp dword ptr ss : [esp+0x14]
        jne public_62d5f80
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d5f80 : nop
        fld dword ptr ds : [edi+0x14]
        lea ecx, ss:[esp+0x5C]
        fsub dword ptr ss : [esp+0x40]
        push ecx
        fld dword ptr ds : [edi+0x10]
        lea edx, ss:[esp+0x6C]
        fsub dword ptr ss : [esp+0x40]
        push edx
        fld dword ptr ds : [edi+0xC]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x6C]
        call public_62e1680
        fld dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [esi+8]
        fmul dword ptr ds : [eax]
        add edi, 0x14FC
        add esp, 8
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ecx
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x34], edx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x34]
        mov al, byte ptr ds : [edi+0x7E]
        test al, al
        jne public_62d6036
        mov ecx, dword ptr ds : [edi+0x84]
        lea edx, ds:[edi+0xC]
        push edx
        lea edx, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62d6036 : nop
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [edi+0xC]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [edi+0x10]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [edi+0x14]
        fstp dword ptr ss : [esp+0x34]
        public_62d6057 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        lea ebx, ds:[esi+0x1C]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_62d60d5
        public_62d6072 : nop
        mov edi, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62d609c
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d609c : nop
        fld dword ptr ds : [esi+0x1C]
        lea ebx, ds:[esi+0x1C]
        fsub dword ptr ds : [edi+0xC]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x44]
        fsub dword ptr ds : [edi+0x10]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [edi+0x14]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], edx
        fstp dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x34], eax
        public_62d60d5 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d60e1
        add eax, 0xFFFFFFF8
        jmp public_62d60e3
        public_62d60e1 : nop
        xor eax, eax
        public_62d60e3 : nop
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_62e6150
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x68]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x58]
        faddp 
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x54]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_62d6172
        fld dword ptr ds : [esi+0x28]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_62d6172
        mov dword ptr ss : [esp+0x14], 0x3F800000
        jmp public_62d62d9
        public_62d6172 : nop
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        call public_62e1680
        push eax
        lea edx, ss:[esp+0x5C]
        push edx
        call public_62e1630
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        mov al, byte ptr ss : [esp+0x22]
        fld dword ptr ss : [esp+0x44]
        add esp, 0x10
        test al, al
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fsqrt 
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        je public_62d61da
        mov eax, dword ptr ds : [esi+4]
        push 4
        push 0x3F800000
        push eax
        call public_62e5af0
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edi, 4
        mov dword ptr ds : [esi+0x2C], ecx
        jmp public_62d61f5
        public_62d61da : nop
        mov edx, dword ptr ds : [esi+4]
        push 1
        push 0x3F800000
        push edx
        call public_62e5af0
        mov eax, dword ptr ds : [esi+0x50]
        mov edi, 1
        mov dword ptr ds : [esi+0x2C], eax
        public_62d61f5 : nop
        fstp st(0)
        add esp, 0xC
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x30], 0
        fabs 
        fld dword ptr ds : [esi+0x54]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62d62b9
        fld dword ptr ss : [esp+0x14]
        fdiv dword ptr ds : [esi+0x2C]
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_62d62a5
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_62d62a5
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62d62a5
        mov ecx, dword ptr ds : [esi+4]
        push edi
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push ebp
        push 0
        push ecx
        call public_62e5850
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push edx
        push ebp
        push 0
        push eax
        call public_62e58f0
        fst dword ptr ds : [esi+0x2C]
        fld dword ptr ss : [esp+0x3C]
        add esp, 0x28
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_62d62a3
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_62d62a5
        mov dword ptr ds : [esi+0x30], 0
        jmp public_62d62a5
        public_62d62a3 : nop
        fstp st(0)
        public_62d62a5 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x40]
        fnstsw ax
        test ah, 5
        jp public_62d62b9
        mov ecx, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [esi+0x30], ecx
        public_62d62b9 : nop
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+0x30]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62d62d9
        mov dword ptr ss : [esp+0x14], 0
        public_62d62d9 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_62d6312
        fld dword ptr ss : [esp+0x1C]
        mov edi, 2
        fcomp dword ptr ds : [public_63a0468]
        fnstsw ax
        test ah, 0x41
        jne public_62d6314
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a0468]
        fnstsw ax
        test ah, 5
        jp public_62d6314
        mov dword ptr ss : [esp+0x14], 0x3F4CCCCD
        jmp public_62d6314
        public_62d6312 : nop
        xor edi, edi
        public_62d6314 : nop
        mov edx, dword ptr ds : [esi+4]
        push ebx
        push edx
        call public_62e1c90
        fcomp dword ptr ds : [esi+0x34]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62d6362
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        push ebx
        push eax
        call public_62e4ea0
        fcomp dword ptr ds : [public_639b22c]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62d6362
        cmp edi, 2
        jne public_62d635a
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        push ecx
        jmp public_62d63e6
        public_62d635a : nop
        push edi
        push 0
        jmp public_62d63e6
        public_62d6362 : nop
        mov al, byte ptr ds : [esi+0x3C]
        test al, al
        je public_62d6388
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [esi+0x58]
        fnstsw ax
        test ah, 0x41
        jne public_62d6388
        mov byte ptr ds : [esi+0x3D], 1
        mov dword ptr ss : [esp+0x14], 0x3F99999A
        mov edi, 2
        public_62d6388 : nop
        mov al, byte ptr ds : [esi+0x3B]
        test al, al
        jne public_62d639e
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x34
        call public_62e8850
        test al, al
        je public_62d63d3
        public_62d639e : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62d63e0
        test edi, edi
        jne public_62d63e0
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a0498]
        fnstsw ax
        test ah, 0x41
        jne public_62d63d3
        push 1
        jmp public_62d63d5
        public_62d63d3 : nop
        push 0
        public_62d63d5 : nop
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        call public_62e9120
        public_62d63e0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        push eax
        public_62d63e6 : nop
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        call public_62e89a0
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        test byte ptr ds : [edx+0x214], 1
        pop edi
        pop ebp
        pop ebx
        jne public_62d651f
        mov al, byte ptr ds : [esi+0x3A]
        test al, al
        je public_62d651f
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        je public_62d6436
        lea ecx, ds:[eax-8]
        jmp public_62d6438
        public_62d6436 : nop
        xor ecx, ecx
        public_62d6438 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x2C]
        push edx
        call dword ptr ds : [eax+0x54]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_639d20c]
        fnstsw ax
        test ah, 0x41
        jne public_62d64f7
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d6481
        lea ecx, ds:[eax-8]
        jmp public_62d6483
        public_62d6481 : nop
        xor ecx, ecx
        public_62d6483 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        push 3
        push edx
        call dword ptr ds : [eax+0xD8]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        push 3
        push edx
        call dword ptr ds : [eax+0xD4]
        fstp dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        call public_62e1680
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x18]
        add esp, 8
        fmul dword ptr ds : [eax+4]
        lea ecx, ds:[esi+4]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax]
        lea eax, ss:[esp+0x50]
        push eax
        fstp dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        xor eax, eax
        pop esi
        add esp, 0x64
        ret 4
        public_62d64f7 : nop
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        call public_62e8ce0
        public_62d651f : nop
        xor eax, eax
        pop esi
        add esp, 0x64
        ret 4
        public_62d6528 : nop
        mov eax, 3
        pop esi
        add esp, 0x64
        ret 4
        UNREACHABLE_TRAP(0x62d5ce0)
    }
}

#undef public_62d5d1a
#undef public_62d5d1c
#undef public_62d5d46
#undef public_62d5de5
#undef public_62d5de7
#undef public_62d5df6
#undef public_62d5e02
#undef public_62d5e04
#undef public_62d5e80
#undef public_62d5e8b
#undef public_62d5eb7
#undef public_62d5eb9
#undef public_62d5f02
#undef public_62d5f2c
#undef public_62d5f3f
#undef public_62d5f41
#undef public_62d5f80
#undef public_62d6036
#undef public_62d6057
#undef public_62d6072
#undef public_62d609c
#undef public_62d60d5
#undef public_62d60e1
#undef public_62d60e3
#undef public_62d6172
#undef public_62d61da
#undef public_62d61f5
#undef public_62d62a3
#undef public_62d62a5
#undef public_62d62b9
#undef public_62d62d9
#undef public_62d6312
#undef public_62d6314
#undef public_62d635a
#undef public_62d6362
#undef public_62d6388
#undef public_62d639e
#undef public_62d63d3
#undef public_62d63d5
#undef public_62d63e0
#undef public_62d63e6
#undef public_62d6436
#undef public_62d6438
#undef public_62d6481
#undef public_62d6483
#undef public_62d64f7
#undef public_62d651f
#undef public_62d6528
