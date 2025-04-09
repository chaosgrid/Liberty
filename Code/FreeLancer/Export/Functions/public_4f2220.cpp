#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_4f2220);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_4f226c _public_4f226c
#define public_4f22f2 _public_4f22f2
#define public_4f2371 _public_4f2371
#define public_4f2381 _public_4f2381
#define public_4f2390 _public_4f2390
#define public_4f2392 _public_4f2392
#define public_4f23a5 _public_4f23a5
#define public_4f23ab _public_4f23ab
#define public_4f245d _public_4f245d
#define public_4f245f _public_4f245f
#define public_4f2473 _public_4f2473
#define public_4f2475 _public_4f2475
#define public_4f2489 _public_4f2489
#define public_4f24c7 _public_4f24c7
#define public_4f24f9 _public_4f24f9
#define public_4f25f5 _public_4f25f5
#define public_4f2685 _public_4f2685
#define public_4f2687 _public_4f2687
#define public_4f26a0 _public_4f26a0
#define public_4f272b _public_4f272b
#define public_4f2790 _public_4f2790

PROC_DECLARE(0x4f2220, internal_4f2220, public_4f2220);
extern "C" NAKED register_t __cdecl internal_4f2220()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push ebp
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x20], ebp
        call public_54baf0
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], edi
        je public_4f2790
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [ebp+0x92C], ebx
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], ebx
        call dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        je public_4f226c
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x14], eax
        public_4f226c : nop
        push esi
        mov esi, dword ptr ss : [ebp+0x3F0]
        cmp esi, ebx
        mov byte ptr ss : [esp+0x13], 0
        je public_4f22f2
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_4f22f2
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x58]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_5d9670]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_4f22f2
        test dword ptr ds : [esi+0xE0], 0x107FFDFF
        je public_4f22f2
        mov ecx, dword ptr ds : [esi+0xB0]
        push ebx
        push ecx
        mov byte ptr ss : [esp+0x1B], 1
        call public_5416c0
        add esp, 8
        cmp eax, ebx
        je public_4f22f2
        push eax
        push edi
        call public_45a490
        add esp, 8
        mov dword ptr ss : [ebp+0x92C], eax
        public_4f22f2 : nop
        call public_40f130
        fild dword ptr ds : [public_610850]
        fld dword ptr ds : [public_5c75e0]
        mov edi, eax
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        fmul st, st(1)
        mov dword ptr ss : [esp+0x2C], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x14], 0x7F7FFFFF
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], 0
        fild dword ptr ds : [public_616840]
        fsub dword ptr ss : [esp+0x1C]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        fild dword ptr ds : [public_610854]
        fld dword ptr ds : [public_5c75e0]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fild dword ptr ds : [public_616844]
        fsub dword ptr ss : [esp+0x20]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        je public_4f2371
        fld dword ptr ss : [ebp+0x404]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        public_4f2371 : nop
        mov eax, dword ptr ss : [ebp+0x914]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_4f2489
        public_4f2381 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        lea ebp, ds:[esi+8]
        je public_4f2390
        lea ecx, ds:[eax-8]
        jmp public_4f2392
        public_4f2390 : nop
        xor ecx, ecx
        public_4f2392 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ss : [esp+0x18]
        jne public_4f23a5
        fld dword ptr ds : [public_5d8f18]
        jmp public_4f23ab
        public_4f23a5 : nop
        fld dword ptr ds : [public_5d8f1c]
        public_4f23ab : nop
        fld dword ptr ds : [esi+0x1C]
        fsub dword ptr ss : [esp+0x1C]
        fidiv dword ptr ds : [public_610850]
        fsubr dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x20]
        fsub dword ptr ss : [esp+0x20]
        fidiv dword ptr ds : [public_610854]
        fsubr dword ptr ss : [esp+0x38]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fst dword ptr ss : [esp+0x3C]
        fstp st(2)
        fstp st(0)
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_4f2475
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0xC]
        fld dword ptr ds : [esi+0x18]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_4f2473
        mov ecx, dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x14]
        mov ebx, ebp
        mov ebp, dword ptr ss : [ebp]
        test ebp, ebp
        mov dword ptr ss : [esp+0x2C], ecx
        je public_4f245d
        lea eax, ss:[ebp-8]
        jmp public_4f245f
        public_4f245d : nop
        xor eax, eax
        public_4f245f : nop
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        push edx
        call public_45a490
        add esp, 8
        mov dword ptr ss : [esp+0x28], eax
        jmp public_4f2475
        public_4f2473 : nop
        fstp st(0)
        public_4f2475 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+0x914]
        jne public_4f2381
        mov ebp, eax
        public_4f2489 : nop
        test ebx, ebx
        mov byte ptr ss : [ebp+0x928], 0
        pop esi
        je public_4f25f5
        mov ecx, dword ptr ss : [esp+0x24]
        push 0x35
        mov byte ptr ss : [ebp+0x928], 1
        mov dword ptr ss : [ebp+0x92C], ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        jle public_4f24c7
        push 0x36
        call public_5792b0
        add esp, 4
        cmp eax, 5
        je public_4f24f9
        public_4f24c7 : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_5d8f14]
        fnstsw ax
        test ah, 5
        jp public_4f24f9
        add ebx, 8
        mov edx, dword ptr ds : [ebx]
        add ebp, 0x91C
        mov dword ptr ss : [ebp], edx
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        pop edi
        mov dword ptr ss : [ebp+8], ecx
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_4f24f9 : nop
        fild dword ptr ds : [public_616844]
        mov edx, dword ptr ds : [edi]
        sub esp, 8
        lea eax, ss:[esp+0x44]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [public_616840]
        fstp dword ptr ss : [esp]
        push eax
        push edi
        call dword ptr ds : [edx+0x38]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x44]
        push edi
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        call dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [edi]
        fsub dword ptr ds : [eax]
        push edi
        fld dword ptr ds : [ebx+0xC]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ebx+0x10]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fstp st(0)
        call dword ptr ds : [edx+0xC]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x5C]
        add ebp, 0x91C
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        pop edi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_4f25f5 : nop
        fild dword ptr ds : [public_616844]
        mov eax, dword ptr ds : [edi]
        sub esp, 8
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [public_616840]
        fstp dword ptr ss : [esp]
        push ecx
        push edi
        call dword ptr ds : [eax+0x38]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x44]
        lea eax, ds:[edx+0xC]
        test eax, eax
        fmul dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x10], 0
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fstp st(0)
        je public_4f2685
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4f2685
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_4f2687
        public_4f2685 : nop
        xor eax, eax
        public_4f2687 : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c65bc]
        test al, al
        jne public_4f26a0
        mov dword ptr ss : [esp+0x10], 0x501502F9
        public_4f26a0 : nop
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        je public_4f272b
        fld dword ptr ss : [ebp+0x404]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_4f272b
        fld dword ptr ss : [ebp+0x404]
        mov eax, dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x3C]
        push edi
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x60]
        fstp st(0)
        call dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x54]
        add ebp, 0x91C
        fadd dword ptr ds : [eax]
        pop edi
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp], ecx
        mov dword ptr ss : [ebp+4], edx
        fstp dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_4f272b : nop
        fld dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [edi]
        fmul dword ptr ss : [esp+0x10]
        push edi
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x60]
        call dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [eax]
        add ebp, 0x91C
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [ebp], edx
        mov dword ptr ss : [ebp+4], eax
        fstp dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [ebp+8], ecx
        public_4f2790 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x4f2220)
    }
}

#undef public_4f226c
#undef public_4f22f2
#undef public_4f2371
#undef public_4f2381
#undef public_4f2390
#undef public_4f2392
#undef public_4f23a5
#undef public_4f23ab
#undef public_4f245d
#undef public_4f245f
#undef public_4f2473
#undef public_4f2475
#undef public_4f2489
#undef public_4f24c7
#undef public_4f24f9
#undef public_4f25f5
#undef public_4f2685
#undef public_4f2687
#undef public_4f26a0
#undef public_4f272b
#undef public_4f2790
