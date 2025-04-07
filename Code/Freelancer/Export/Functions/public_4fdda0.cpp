#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402e30);
CLANG_FORWARD_PROC_SYMBOL(public_4038f0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4fdda0);

#define public_4fded5 _public_4fded5
#define public_4fdf02 _public_4fdf02

PROC_DECLARE(0x4fdda0, internal_4fdda0, public_4fdda0);
extern "C" NAKED register_t __cdecl internal_4fdda0()
{
    __asm
    {
        sub esp, 0x68
        push esi
        push edi
        lea eax, ss:[esp+0x40]
        push eax
        mov esi, ecx
        call public_4f7ef0
        push 1
        lea ecx, ds:[esi+0x84]
        push 1
        push ecx
        call public_402e30
        mov ecx, dword ptr ds : [esi+0x6C]
        fld dword ptr ds : [ecx+0x8C]
        mov edi, dword ptr ss : [esp+0x80]
        fcomp dword ptr ds : [ecx+0x90]
        add esp, 0xC
        mov dword ptr ss : [esp+8], 0x3F800000
        fnstsw ax
        test ah, 0x41
        jne public_4fdf02
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+0xC]
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x18]
        mov ecx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x74], ecx
        fld dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ds : [esi+0x6C]
        fmul dword ptr ss : [esp+0x74]
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x14]
        fmul st, st(3)
        faddp 
        fxch st(3)
        fmul dword ptr ss : [esp+0x10]
        faddp st(3), st
        fxch st(2)
        fstp dword ptr ss : [esp+0x74]
        fstp st(1)
        fstp st(0)
        fld dword ptr ss : [esp+0x74]
        fcomp dword ptr ds : [ecx+0x90]
        fnstsw ax
        test ah, 5
        jp public_4fded5
        mov dword ptr ss : [esp+8], 0
        jmp public_4fdf02
        public_4fded5 : nop
        fld dword ptr ss : [esp+0x74]
        fcomp dword ptr ds : [ecx+0x8C]
        fnstsw ax
        test ah, 5
        jp public_4fdf02
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ds : [ecx+0x90]
        fld dword ptr ds : [ecx+0x8C]
        fsub dword ptr ds : [ecx+0x90]
        fdivp 
        fstp dword ptr ss : [esp+8]
        public_4fdf02 : nop
        fld dword ptr ds : [esi+0x7C]
        sub esp, 0xC
        fld st(0)
        fmul dword ptr ds : [ecx+0x68]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [ecx+0x64]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+0x60]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [esi+0x6C]
        fld dword ptr ds : [eax+0x5C]
        sub esp, 0xC
        fsub dword ptr ds : [eax+0x74]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0x58]
        fsub dword ptr ds : [eax+0x70]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x54]
        fsub dword ptr ds : [eax+0x6C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ds : [esi+0x7C]
        mov esi, dword ptr ds : [esi+0x6C]
        fld dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0x74]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+0x70]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+0x6C]
        fstp dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi+0x7C]
        mov eax, dword ptr ds : [esi+0x78]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        push edi
        call public_4038f0
        add esp, 0x18
        pop edi
        mov al, 1
        pop esi
        add esp, 0x68
        ret 4
        UNREACHABLE_TRAP(0x4fdda0)
    }
}

#undef public_4fded5
#undef public_4fdf02
