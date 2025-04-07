#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410280);
CLANG_FORWARD_PROC_SYMBOL(public_410960);
CLANG_FORWARD_PROC_SYMBOL(public_411350);
CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_41a390);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_4cbf40);
CLANG_FORWARD_PROC_SYMBOL(public_4d7270);
CLANG_FORWARD_PROC_SYMBOL(public_507ea0);
CLANG_FORWARD_PROC_SYMBOL(public_521fa0);
CLANG_FORWARD_PROC_SYMBOL(public_537f40);
CLANG_FORWARD_PROC_SYMBOL(public_54e130);

#define public_54e290 _public_54e290
#define public_54e39b _public_54e39b
#define public_54e3b3 _public_54e3b3
#define public_54e474 _public_54e474
#define public_54e48c _public_54e48c
#define public_54e530 _public_54e530
#define public_54e548 _public_54e548
#define public_54e613 _public_54e613
#define public_54e62b _public_54e62b
#define public_54e6f7 _public_54e6f7
#define public_54e70f _public_54e70f
#define public_54e767 _public_54e767
#define public_54e778 _public_54e778
#define public_54e78b _public_54e78b
#define public_54e791 _public_54e791
#define public_54e7a8 _public_54e7a8
#define public_54e7ae _public_54e7ae
#define public_54e7c6 _public_54e7c6
#define public_54e7cc _public_54e7cc
#define public_54e7e4 _public_54e7e4
#define public_54e7ea _public_54e7ea
#define public_54e802 _public_54e802
#define public_54e808 _public_54e808
#define public_54e820 _public_54e820
#define public_54e826 _public_54e826
#define public_54e847 _public_54e847
#define public_54e84d _public_54e84d
#define public_54e864 _public_54e864
#define public_54e86a _public_54e86a
#define public_54e882 _public_54e882
#define public_54e888 _public_54e888
#define public_54e8a5 _public_54e8a5
#define public_54e8ab _public_54e8ab
#define public_54e8c2 _public_54e8c2
#define public_54e8c8 _public_54e8c8
#define public_54e8e0 _public_54e8e0
#define public_54e8e6 _public_54e8e6

PROC_DECLARE(0x54e130, internal_54e130, public_54e130);
extern "C" NAKED register_t __cdecl internal_54e130()
{
    __asm
    {
        sub esp, 0x15C
        mov eax, dword ptr ss : [esp+0x160]
        push ebx
        push ebp
        push esi
        push edi
        push 0
        push 0x42C80000
        push eax
        mov edi, ecx
        lea ecx, ss:[esp+0x138]
        push 0x10
        push ecx
        call public_537f40
        lea edx, ss:[esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0x50], eax
        call public_410280
        movzx eax, byte ptr ss : [esp+0x30]
        movzx ecx, byte ptr ss : [esp+0x31]
        mov esi, dword ptr ss : [esp+0x19C]
        movzx edx, byte ptr ss : [esp+0x32]
        mov dword ptr ss : [esp+0x2C], eax
        add esp, 0x14
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, esi
        fstp dword ptr ds : [esi]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ds : [esi+4]
        fild dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [esi+8]
        fld dword ptr ds : [edi+0x70]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp]
        call public_507ea0
        fld dword ptr ds : [edi+0x60]
        fmul dword ptr ds : [esi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x5C]
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi+0x58]
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [edi+0x6C]
        fmul dword ptr ds : [esi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x68]
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [edi+0x64]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebx, esi
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx+4], ecx
        mov ebp, dword ptr ss : [esp+0x188]
        mov dword ptr ds : [ebx+8], edx
        mov ebx, dword ptr ss : [esp+0x190]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov ebx, dword ptr ss : [esp+0x18C]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov ebx, ebp
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov ebx, dword ptr ss : [esp+0x180]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        xor eax, eax
        cmp ecx, eax
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_54e778
        mov ebx, dword ptr ss : [esp+0x174]
        nop 
        lea esp, ss:[esp]
        public_54e290 : nop
        mov edx, dword ptr ss : [esp+0x34]
        cmp edx, dword ptr ds : [edi+0x48]
        jge public_54e778
        mov ecx, dword ptr ss : [esp+eax*4+0x12C]
        cmp dword ptr ds : [ecx+0xB0], 3
        jne public_54e767
        lea eax, ss:[esp+0x28]
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x178]
        lea eax, ss:[esp+0x24]
        push eax
        push edx
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        call public_410960
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [edi+0x54]
        sub esp, 0xC
        lea ecx, ss:[esp+0x54]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edi+0x50]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edi+0x4C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ds : [public_6140a8]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x50]
        push ecx
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x180]
        mov dword ptr ss : [esp+0x30], ecx
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0xE0]
        push ecx
        mov dword ptr ss : [esp+0x3C], edx
        call public_411d60
        lea edx, ss:[esp+0xE4]
        push edx
        lea eax, ss:[esp+0x88]
        push ebx
        push eax
        call public_423b30
        add esp, 0x18
        lea ecx, ss:[esp+0x78]
        call public_41a390
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        call public_4cbf40
        fld dword ptr ds : [public_6140ac]
        fchs 
        add esp, 8
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_54e39b
        fstp st(0)
        mov dword ptr ss : [esp+0x10], 0
        jmp public_54e3b3
        public_54e39b : nop
        fadd dword ptr ds : [public_6140ac]
        fld dword ptr ds : [public_6140ac]
        fadd dword ptr ds : [public_5c75dc]
        fdivp 
        fstp dword ptr ss : [esp+0x10]
        public_54e3b3 : nop
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, esi
        call public_4d7270
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0xC8]
        push eax
        call public_411d60
        add esp, 0xC
        lea ecx, ss:[esp+0xC0]
        push ecx
        mov ecx, esi
        call public_4d7270
        mov ecx, dword ptr ss : [esp+0x17C]
        lea edx, ss:[esp+0x120]
        push edx
        call public_411350
        fld dword ptr ds : [public_6140a8]
        push ecx
        lea eax, ss:[esp+0x124]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0xB0]
        push ecx
        call public_411d60
        lea edx, ss:[esp+0xB4]
        push edx
        lea eax, ss:[esp+0xA0]
        push ebx
        push eax
        call public_423b30
        add esp, 0x18
        lea ecx, ss:[esp+0x90]
        call public_41a390
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x94]
        push edx
        call public_4cbf40
        fld dword ptr ds : [public_6140ac]
        fchs 
        add esp, 8
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_54e474
        fstp st(0)
        mov dword ptr ss : [esp+0x10], 0
        jmp public_54e48c
        public_54e474 : nop
        fadd dword ptr ds : [public_6140ac]
        fld dword ptr ds : [public_6140ac]
        fadd dword ptr ds : [public_5c75dc]
        fdivp 
        fstp dword ptr ss : [esp+0x10]
        public_54e48c : nop
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, ebp
        call public_4d7270
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x110]
        push eax
        call public_411d60
        add esp, 0xC
        lea ecx, ss:[esp+0x108]
        push ecx
        mov ecx, ebp
        call public_4d7270
        fld dword ptr ds : [public_6140a8]
        mov edx, dword ptr ss : [esp+0x178]
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+0xF8]
        push eax
        call public_411d60
        lea ecx, ss:[esp+0xFC]
        push ecx
        lea edx, ss:[esp+0x7C]
        push ebx
        push edx
        call public_423b30
        add esp, 0x18
        lea ecx, ss:[esp+0x6C]
        call public_41a390
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        call public_4cbf40
        fld dword ptr ds : [public_6140ac]
        fchs 
        add esp, 8
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_54e530
        fstp st(0)
        mov dword ptr ss : [esp+0x10], 0
        jmp public_54e548
        public_54e530 : nop
        fadd dword ptr ds : [public_6140ac]
        fld dword ptr ds : [public_6140ac]
        fadd dword ptr ds : [public_5c75dc]
        fdivp 
        fstp dword ptr ss : [esp+0x10]
        public_54e548 : nop
        mov ecx, dword ptr ss : [esp+0x18C]
        lea edx, ss:[esp+0x3C]
        push edx
        call public_4d7270
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0xBC]
        push edx
        call public_411d60
        mov ecx, dword ptr ss : [esp+0x198]
        add esp, 0xC
        lea eax, ss:[esp+0xB4]
        push eax
        call public_4d7270
        lea ecx, ss:[esp+0xCC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x17C]
        call public_411350
        fld dword ptr ds : [public_6140a8]
        push ecx
        lea edx, ss:[esp+0xD0]
        fstp dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+0xEC]
        push eax
        call public_411d60
        lea ecx, ss:[esp+0xF0]
        push ecx
        lea edx, ss:[esp+0x94]
        push ebx
        push edx
        call public_423b30
        add esp, 0x18
        lea ecx, ss:[esp+0x84]
        call public_41a390
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x88]
        push ecx
        call public_4cbf40
        fld dword ptr ds : [public_6140ac]
        fchs 
        add esp, 8
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_54e613
        fstp st(0)
        mov dword ptr ss : [esp+0x10], 0
        jmp public_54e62b
        public_54e613 : nop
        fadd dword ptr ds : [public_6140ac]
        fld dword ptr ds : [public_6140ac]
        fadd dword ptr ds : [public_5c75dc]
        fdivp 
        fstp dword ptr ss : [esp+0x10]
        public_54e62b : nop
        mov ecx, dword ptr ss : [esp+0x190]
        lea edx, ss:[esp+0x3C]
        push edx
        call public_4d7270
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x104]
        push edx
        call public_411d60
        mov ecx, dword ptr ss : [esp+0x19C]
        add esp, 0xC
        lea eax, ss:[esp+0xFC]
        push eax
        call public_4d7270
        fld dword ptr ds : [public_6140a8]
        push ecx
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp]
        push ecx
        lea edx, ss:[esp+0x11C]
        push edx
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        call public_411d60
        lea eax, ss:[esp+0x120]
        push eax
        lea ecx, ss:[esp+0xAC]
        push ebx
        push ecx
        call public_423b30
        add esp, 0x18
        lea ecx, ss:[esp+0x9C]
        call public_41a390
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0xA0]
        push eax
        call public_4cbf40
        fld dword ptr ds : [public_6140ac]
        fchs 
        add esp, 8
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_54e6f7
        fstp st(0)
        mov dword ptr ss : [esp+0x10], 0
        jmp public_54e70f
        public_54e6f7 : nop
        fadd dword ptr ds : [public_6140ac]
        fld dword ptr ds : [public_6140ac]
        fadd dword ptr ds : [public_5c75dc]
        fdivp 
        fstp dword ptr ss : [esp+0x10]
        public_54e70f : nop
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        call public_4d7270
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        call public_411d60
        fld dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x18C]
        fadd dword ptr ds : [eax]
        add esp, 0xC
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x34]
        inc eax
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x14]
        public_54e767 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_54e290
        public_54e778 : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e78b
        fld dword ptr ds : [esi]
        jmp public_54e791
        public_54e78b : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e791 : nop
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e7a8
        fld dword ptr ds : [esi+4]
        jmp public_54e7ae
        public_54e7a8 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e7ae : nop
        fstp dword ptr ds : [esi+4]
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e7c6
        fld dword ptr ds : [esi+8]
        jmp public_54e7cc
        public_54e7c6 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e7cc : nop
        fstp dword ptr ds : [esi+8]
        fld dword ptr ss : [ebp]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e7e4
        fld dword ptr ss : [ebp]
        jmp public_54e7ea
        public_54e7e4 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e7ea : nop
        fstp dword ptr ss : [ebp]
        fld dword ptr ss : [ebp+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e802
        fld dword ptr ss : [ebp+4]
        jmp public_54e808
        public_54e802 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e808 : nop
        fstp dword ptr ss : [ebp+4]
        fld dword ptr ss : [ebp+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e820
        fld dword ptr ss : [ebp+8]
        jmp public_54e826
        public_54e820 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e826 : nop
        mov ecx, dword ptr ss : [esp+0x18C]
        fstp dword ptr ss : [ebp+8]
        fld dword ptr ds : [ecx]
        pop edi
        fcomp dword ptr ds : [public_5c75dc]
        pop esi
        pop ebp
        pop ebx
        fnstsw ax
        test ah, 5
        jp public_54e847
        fld dword ptr ds : [ecx]
        jmp public_54e84d
        public_54e847 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e84d : nop
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e864
        fld dword ptr ds : [ecx+4]
        jmp public_54e86a
        public_54e864 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e86a : nop
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e882
        fld dword ptr ds : [ecx+8]
        jmp public_54e888
        public_54e882 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e888 : nop
        fstp dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x180]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e8a5
        fld dword ptr ds : [ecx]
        jmp public_54e8ab
        public_54e8a5 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e8ab : nop
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e8c2
        fld dword ptr ds : [ecx+4]
        jmp public_54e8c8
        public_54e8c2 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e8c8 : nop
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54e8e0
        fld dword ptr ds : [ecx+8]
        jmp public_54e8e6
        public_54e8e0 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54e8e6 : nop
        mov edx, dword ptr ss : [esp+0x170]
        fstp dword ptr ds : [ecx+8]
        push edx
        call public_521fa0
        add esp, 0x160
        ret 0x24
        UNREACHABLE_TRAP(0x54e130)
    }
}

#undef public_54e290
#undef public_54e39b
#undef public_54e3b3
#undef public_54e474
#undef public_54e48c
#undef public_54e530
#undef public_54e548
#undef public_54e613
#undef public_54e62b
#undef public_54e6f7
#undef public_54e70f
#undef public_54e767
#undef public_54e778
#undef public_54e78b
#undef public_54e791
#undef public_54e7a8
#undef public_54e7ae
#undef public_54e7c6
#undef public_54e7cc
#undef public_54e7e4
#undef public_54e7ea
#undef public_54e802
#undef public_54e808
#undef public_54e820
#undef public_54e826
#undef public_54e847
#undef public_54e84d
#undef public_54e864
#undef public_54e86a
#undef public_54e882
#undef public_54e888
#undef public_54e8a5
#undef public_54e8ab
#undef public_54e8c2
#undef public_54e8c8
#undef public_54e8e0
#undef public_54e8e6
