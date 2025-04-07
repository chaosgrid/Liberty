#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c47c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4370);
CLANG_FORWARD_PROC_SYMBOL(public_62de040);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e1f40);
CLANG_FORWARD_PROC_SYMBOL(public_62e2630);
CLANG_FORWARD_PROC_SYMBOL(public_62e28f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e37e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

#define public_62d950f _public_62d950f
#define public_62d951d _public_62d951d
#define public_62d952c _public_62d952c
#define public_62d9604 _public_62d9604
#define public_62d9621 _public_62d9621
#define public_62d964b _public_62d964b
#define public_62d968f _public_62d968f
#define public_62d969b _public_62d969b
#define public_62d969d _public_62d969d
#define public_62d97f1 _public_62d97f1
#define public_62d980d _public_62d980d
#define public_62d980f _public_62d980f
#define public_62d98b4 _public_62d98b4
#define public_62d98cf _public_62d98cf
#define public_62d99fd _public_62d99fd
#define public_62d9a1a _public_62d9a1a
#define public_62d9a44 _public_62d9a44

PROC_DECLARE(0x62d94f0, internal_62d94f0, public_62d94f0);
extern "C" NAKED register_t __cdecl internal_62d94f0()
{
    __asm
    {
        sub esp, 0xDC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62d950f
        mov eax, 3
        pop esi
        add esp, 0xDC
        ret 4
        public_62d950f : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d951d
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62d952c
        public_62d951d : nop
        mov eax, 1
        pop esi
        add esp, 0xDC
        ret 4
        public_62d952c : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        push edi
        lea edx, ss:[esp+0x54]
        push edx
        call public_62de040
        test eax, eax
        jne public_62d964b
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push 0
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0xCC]
        push eax
        call public_62e1f40
        push 0
        push 0x3E490FDB
        lea ecx, ss:[esp+0xD8]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        call public_62e2630
        mov eax, dword ptr ds : [esi+8]
        add esp, 0x20
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C], 0
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        call public_62e28f0
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_639f534]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_62d9604
        push 1
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        call public_62d4370
        mov ecx, dword ptr ds : [esi+8]
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e37e0
        add esp, 0x14
        lea edx, ss:[esp+0x30]
        push edx
        jmp public_62d9621
        public_62d9604 : nop
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        push eax
        public_62d9621 : nop
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        call public_62e8c20
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0x3F800000
        add ecx, 0x18
        call public_62e89a0
        pop edi
        xor eax, eax
        pop esi
        add esp, 0xDC
        ret 4
        public_62d964b : nop
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, 0
        je public_62d99fd
        dec eax
        je public_62d97f1
        dec eax
        jne public_62d9a44
        mov edi, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62d968f
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d968f : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d969b
        lea ecx, ds:[eax-8]
        jmp public_62d969d
        public_62d969b : nop
        xor ecx, ecx
        public_62d969d : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+0x14]
        sub esp, 0xC
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0xB8]
        push ecx
        call public_62e1680
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x18], edx
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0xC]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+8]
        fmul st, st(4)
        faddp 
        fabs 
        fcomp qword ptr ds : [public_63a0540]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62d9a44
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x1C]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        fmul st, st(3)
        mov dword ptr ss : [esp+0x20], eax
        fxch 
        lea eax, ss:[esp+0x20]
        fmul dword ptr ss : [esp+8]
        push eax
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x28], ecx
        fld dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0xAC]
        fmul st, st(2)
        push ecx
        fsubp 
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fstp st(0)
        mov dword ptr ss : [esp+0x30], edx
        call public_62e1680
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], ecx
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        lea eax, ss:[esp+0x20]
        push eax
        add ecx, 0x18
        mov dword ptr ss : [esp+0x2C], edx
        call public_62e8ce0
        pop edi
        xor eax, eax
        pop esi
        add esp, 0xDC
        ret 4
        public_62d97f1 : nop
        mov edi, dword ptr ds : [esi+8]
        add edi, 0x14FC
        mov ecx, edi
        call public_62c47c0
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d980d
        lea ecx, ds:[eax-8]
        jmp public_62d980f
        public_62d980d : nop
        xor ecx, ecx
        public_62d980f : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        add edi, 0xC
        push edi
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        call public_6288800
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xAC]
        push edx
        call public_62e1680
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        add esp, 0x14
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0xC]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+8]
        fmul st, st(4)
        faddp 
        fabs 
        fcomp qword ptr ds : [public_63a0540]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        mov eax, dword ptr ds : [esi+8]
        jp public_62d98b4
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        jmp public_62d98cf
        public_62d98b4 : nop
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x1C]
        public_62d98cf : nop
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        fmul st, st(3)
        mov dword ptr ss : [esp+0x20], eax
        fxch 
        lea eax, ss:[esp+0x20]
        fmul dword ptr ss : [esp+8]
        push eax
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x28], ecx
        fld dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x88]
        fmul st, st(2)
        push ecx
        fsubp 
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fstp st(0)
        mov dword ptr ss : [esp+0x30], edx
        call public_62e1680
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x30], edx
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+0x1C]
        fld dword ptr ds : [eax+0x10]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x3C]
        add eax, 0x14FC
        fstp dword ptr ss : [esp+0x40]
        push ecx
        lea edx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [eax+0x84]
        push edx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x6C]
        push eax
        call public_62e1f40
        mov eax, dword ptr ds : [esi+8]
        add esp, 0x10
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push 0
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        call public_62e28f0
        add esp, 0x10
        push 1
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x9C]
        push eax
        call public_62d4370
        mov ecx, dword ptr ds : [esi+8]
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e37e0
        add esp, 0x14
        lea edx, ss:[esp+0x48]
        push edx
        jmp public_62d9a1a
        public_62d99fd : nop
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        push eax
        public_62d9a1a : nop
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        call public_62e8c20
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        push 0x3F800000
        call public_62e89a0
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        push 1
        call public_62e9120
        public_62d9a44 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0xDC
        ret 4
        UNREACHABLE_TRAP(0x62d94f0)
    }
}

#undef public_62d950f
#undef public_62d951d
#undef public_62d952c
#undef public_62d9604
#undef public_62d9621
#undef public_62d964b
#undef public_62d968f
#undef public_62d969b
#undef public_62d969d
#undef public_62d97f1
#undef public_62d980d
#undef public_62d980f
#undef public_62d98b4
#undef public_62d98cf
#undef public_62d99fd
#undef public_62d9a1a
#undef public_62d9a44
