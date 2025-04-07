#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e1c90);
CLANG_FORWARD_PROC_SYMBOL(public_62e4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62e58f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5c00);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62e90a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62d4fc5 _public_62d4fc5
#define public_62d4ff7 _public_62d4ff7
#define public_62d5021 _public_62d5021
#define public_62d508a _public_62d508a
#define public_62d5096 _public_62d5096
#define public_62d5098 _public_62d5098
#define public_62d50b2 _public_62d50b2
#define public_62d50b4 _public_62d50b4
#define public_62d50df _public_62d50df
#define public_62d5129 _public_62d5129
#define public_62d5190 _public_62d5190
#define public_62d51a9 _public_62d51a9
#define public_62d51b5 _public_62d51b5
#define public_62d51b7 _public_62d51b7
#define public_62d51d9 _public_62d51d9
#define public_62d520c _public_62d520c
#define public_62d5285 _public_62d5285
#define public_62d52d0 _public_62d52d0
#define public_62d531a _public_62d531a
#define public_62d533e _public_62d533e
#define public_62d5340 _public_62d5340
#define public_62d535a _public_62d535a
#define public_62d535c _public_62d535c
#define public_62d53f9 _public_62d53f9
#define public_62d5414 _public_62d5414
#define public_62d544c _public_62d544c
#define public_62d5460 _public_62d5460
#define public_62d54de _public_62d54de
#define public_62d5554 _public_62d5554
#define public_62d55c7 _public_62d55c7
#define public_62d55d6 _public_62d55d6
#define public_62d55d8 _public_62d55d8
#define public_62d55e3 _public_62d55e3
#define public_62d55f0 _public_62d55f0
#define public_62d562e _public_62d562e
#define public_62d5658 _public_62d5658
#define public_62d565a _public_62d565a
#define public_62d5683 _public_62d5683

PROC_DECLARE(0x62d4fa0, internal_62d4fa0, public_62d4fa0);
extern "C" NAKED register_t __cdecl internal_62d4fa0()
{
    __asm
    {
        sub esp, 0x50
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x10], 0
        jne public_62d4fc5
        pop edi
        pop esi
        mov eax, 3
        pop ebp
        add esp, 0x50
        ret 4
        public_62d4fc5 : nop
        mov edi, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        mov dword ptr ss : [esp+0xC], 0x7EFFFFFF
        jne public_62d4ff7
        mov ecx, dword ptr ds : [edi+0x84]
        lea edx, ds:[edi+0xC]
        push edx
        lea edx, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62d4ff7 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ebp, eax
        mov eax, dword ptr ds : [public_63fc974]
        test eax, eax
        jne public_62d5021
        call public_6391cf0
        mov dword ptr ds : [public_63fc974], eax
        public_62d5021 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x4C]
        push edx
        push ebp
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [esi+0x48]
        dec eax
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [edi+0x10]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [edi+0x14]
        fstp dword ptr ss : [esp+0x28]
        je public_62d508a
        dec eax
        jne public_62d50b4
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [esi+0x1C]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [esi+0x20]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [esi+0x24]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fstp st(0)
        jmp public_62d50b2
        public_62d508a : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d5096
        add eax, 0xFFFFFFF8
        jmp public_62d5098
        public_62d5096 : nop
        xor eax, eax
        public_62d5098 : nop
        push eax
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        push eax
        call public_62e4bb0
        fld st(0)
        fmul st, st(1)
        add esp, 8
        fstp dword ptr ss : [esp+0xC]
        public_62d50b2 : nop
        fstp st(0)
        public_62d50b4 : nop
        fld dword ptr ds : [esi+0x3C]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0xC]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62d50df
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x50
        ret 4
        public_62d50df : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax+0xC]
        push ebx
        add edi, 0x214
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov ebx, dword ptr ds : [edi]
        shr ebx, 1
        and bl, 1
        je public_62d5129
        lea ecx, ds:[edi+0x18]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_62d51d9
        public_62d5129 : nop
        mov eax, dword ptr ds : [esi+0x48]
        dec eax
        je public_62d51a9
        dec eax
        je public_62d5190
        dec eax
        jne public_62d51d9
        fld dword ptr ds : [esi+0x28]
        fmul dword ptr ds : [public_639f7a4]
        fld dword ptr ds : [esi+0x2C]
        fmul dword ptr ds : [public_639f7a4]
        fld dword ptr ds : [esi+0x30]
        fmul dword ptr ds : [public_639f7a4]
        fstp dword ptr ss : [esp+0x5C]
        fxch 
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], eax
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_62d51d9
        public_62d5190 : nop
        lea edx, ds:[esi+0x1C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        jmp public_62d51d9
        public_62d51a9 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d51b5
        add eax, 0xFFFFFFF8
        jmp public_62d51b7
        public_62d51b5 : nop
        xor eax, eax
        public_62d51b7 : nop
        push eax
        lea eax, ss:[esp+0x58]
        push eax
        call public_62e60e0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 8
        mov dword ptr ss : [esp+0x20], eax
        public_62d51d9 : nop
        mov eax, dword ptr ds : [esi+0x34]
        mov ebp, 2
        cmp eax, ebp
        jne public_62d520c
        cmp dword ptr ds : [esi+0x44], ebp
        je public_62d520c
        fld dword ptr ds : [public_63a0408]
        fmul qword ptr ds : [public_63a0470]
        fld st(0)
        fmulp 
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_62d520c
        mov dword ptr ds : [esi+0x34], 0
        public_62d520c : nop
        mov eax, dword ptr ds : [esi+0x44]
        fld dword ptr ds : [public_6399408]
        sub eax, 0
        je public_62d52d0
        dec eax
        jne public_62d531a
        mov eax, dword ptr ds : [esi+0x34]
        fstp st(0)
        lea ecx, ss:[esp+0x30]
        cmp eax, 1
        mov eax, dword ptr ds : [esi+8]
        push ecx
        jne public_62d5285
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x38]
        push 3
        fmul dword ptr ss : [esp+0x3C]
        push 0
        push ecx
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp]
        push 0xBF800000
        push edx
        call public_62e58f0
        add esp, 0x14
        jmp public_62d531a
        public_62d5285 : nop
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x38]
        push 1
        fmul dword ptr ss : [esp+0x3C]
        push 0
        push ecx
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp]
        push 0xBF800000
        push edx
        call public_62e58f0
        add esp, 0x14
        jmp public_62d531a
        public_62d52d0 : nop
        mov eax, dword ptr ds : [esi+8]
        fstp st(0)
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x38]
        push ecx
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp]
        push edx
        call public_62e5ab0
        add esp, 8
        public_62d531a : nop
        fmul dword ptr ds : [public_63a0468]
        mov edx, dword ptr ds : [esi+0x34]
        test bl, bl
        pop ebx
        je public_62d5340
        cmp dword ptr ds : [edi+0x2C], 1
        je public_62d533e
        fld dword ptr ds : [edi+0x28]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62d5340
        public_62d533e : nop
        xor edx, edx
        public_62d5340 : nop
        fadd dword ptr ds : [esi+0x3C]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0xC]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62d535a
        mov cl, 1
        jmp public_62d535c
        public_62d535a : nop
        xor cl, cl
        public_62d535c : nop
        mov eax, edx
        sub eax, 0
        je public_62d5554
        dec eax
        je public_62d5460
        dec eax
        jne public_62d55e3
        test cl, cl
        je public_62d5414
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fsqrt 
        fcomp qword ptr ds : [public_63a0460]
        fnstsw ax
        test ah, 0x41
        jne public_62d5414
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        call public_62e90a0
        mov eax, dword ptr ds : [esi+0x44]
        sub eax, 0
        je public_62d53f9
        dec eax
        jne public_62d55e3
        mov eax, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [esi+0x64]
        lea ecx, ds:[esi+0x64]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 4
        public_62d53f9 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebp
        push 0
        add ecx, 0x18
        call public_62e89a0
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 4
        public_62d5414 : nop
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        call public_62e1c90
        fcomp dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ecx, 0x18
        fnstsw ax
        test ah, 5
        jp public_62d544c
        mov eax, dword ptr ds : [esi+0x40]
        push ebp
        push eax
        call public_62e89a0
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 4
        public_62d544c : nop
        push 0
        call public_62e90a0
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 4
        public_62d5460 : nop
        test cl, cl
        je public_62d54de
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fsqrt 
        fcomp qword ptr ds : [public_63a0460]
        fnstsw ax
        test ah, 0x41
        jne public_62d54de
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x38]
        push edx
        add ecx, 0x18
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        call public_62e8ce0
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 4
        public_62d54de : nop
        fld dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x44]
        fsub dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x54]
        call public_62e1680
        fld dword ptr ds : [esi+0x40]
        fld dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [esi+8]
        fmul st, st(1)
        add esp, 8
        lea edx, ss:[esp+0x50]
        push edx
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x34]
        add ecx, 0x18
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fstp st(0)
        call public_62e8ce0
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 4
        public_62d5554 : nop
        test cl, cl
        je public_62d55f0
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fsqrt 
        fcomp dword ptr ds : [public_639d20c]
        fnstsw ax
        test ah, 0x41
        jne public_62d55f0
        mov eax, dword ptr ds : [esi+0x44]
        sub eax, 0
        je public_62d55c7
        dec eax
        jne public_62d55e3
        mov eax, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [esi+0x64]
        lea ecx, ds:[esi+0x64]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 4
        public_62d55c7 : nop
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0
        add ecx, 0x18
        call public_62e89a0
        public_62d55d6 : nop
        push 1
        public_62d55d8 : nop
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        call public_62e91d0
        public_62d55e3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 4
        public_62d55f0 : nop
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        call public_62e1c90
        fcomp dword ptr ds : [esi+0x38]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_62d5683
        mov eax, dword ptr ds : [esi+0x40]
        mov dword ptr ss : [esp+0x60], eax
        cmp dword ptr ds : [edi], 0
        je public_62d562e
        fld dword ptr ds : [edi+0x28]
        fcomp dword ptr ss : [esp+0x60]
        fnstsw ax
        test ah, 5
        jp public_62d565a
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [esp+0x60], ecx
        jmp public_62d565a
        public_62d562e : nop
        mov edx, dword ptr ds : [esi+0x5C]
        mov eax, dword ptr ds : [esi+0x60]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        call public_62e5c00
        fcom dword ptr ss : [esp+0x70]
        add esp, 0x10
        fnstsw ax
        test ah, 5
        jp public_62d5658
        fstp dword ptr ss : [esp+0x60]
        jmp public_62d565a
        public_62d5658 : nop
        fstp st(0)
        public_62d565a : nop
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push eax
        add ecx, 0x18
        call public_62e89a0
        test al, al
        jne public_62d55e3
        pop edi
        pop esi
        mov dword ptr ss : [esp+8], ebp
        mov eax, ebp
        pop ebp
        add esp, 0x50
        ret 4
        public_62d5683 : nop
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0
        add ecx, 0x18
        call public_62e89a0
        mov al, byte ptr ds : [esi+0x59]
        test al, al
        je public_62d55d6
        push 0
        jmp public_62d55d8
        UNREACHABLE_TRAP(0x62d4fa0)
    }
}

#undef public_62d4fc5
#undef public_62d4ff7
#undef public_62d5021
#undef public_62d508a
#undef public_62d5096
#undef public_62d5098
#undef public_62d50b2
#undef public_62d50b4
#undef public_62d50df
#undef public_62d5129
#undef public_62d5190
#undef public_62d51a9
#undef public_62d51b5
#undef public_62d51b7
#undef public_62d51d9
#undef public_62d520c
#undef public_62d5285
#undef public_62d52d0
#undef public_62d531a
#undef public_62d533e
#undef public_62d5340
#undef public_62d535a
#undef public_62d535c
#undef public_62d53f9
#undef public_62d5414
#undef public_62d544c
#undef public_62d5460
#undef public_62d54de
#undef public_62d5554
#undef public_62d55c7
#undef public_62d55d6
#undef public_62d55d8
#undef public_62d55e3
#undef public_62d55f0
#undef public_62d562e
#undef public_62d5658
#undef public_62d565a
#undef public_62d5683
