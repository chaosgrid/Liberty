#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6275ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6303c99 _public_6303c99
#define public_6303e50 _public_6303e50
#define public_6303f9c _public_6303f9c
#define public_6303fb6 _public_6303fb6

PROC_DECLARE(0x6303c10, internal_6303c10, public_6303c10);
extern "C" NAKED register_t __cdecl internal_6303c10()
{
    __asm
    {
        sub esp, 0x88
        mov eax, dword ptr ss : [esp+0x90]
        push esi
        push edi
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x48]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x9C]
        push ecx
        add eax, 0x24
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        call public_6288800
        mov eax, dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399408]
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x20], eax
        add esp, 0xC
        mov dword ptr ss : [esp+0x18], ecx
        fnstsw ax
        mov dword ptr ss : [esp+0x1C], edx
        test ah, 0x44
        jp public_6303c99
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_6303c99
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_6303c99
        lea esi, ss:[esp+0x48]
        jmp public_6303fb6
        public_6303c99 : nop
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fsqrt 
        fdivr qword ptr ds : [public_6399410]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x1C]
        fxch 
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fxch 
        fmul dword ptr ss : [esp+0x14]
        faddp 
        call public_6391dae
        cdq 
        xor eax, edx
        sub eax, edx
        mov dword ptr ss : [esp+0x44], eax
        fild dword ptr ss : [esp+0x44]
        fcomp qword ptr ds : [public_63a0610]
        fnstsw ax
        test ah, 0x41
        jne public_6303e50
        fld dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x1C]
        push ecx
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x30], eax
        fmul dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ecx
        lea ecx, ss:[esp+0xC]
        faddp 
        mov dword ptr ss : [esp+0x38], edx
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        call public_6288830
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x2C], edx
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x30], eax
        push edx
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x38], ecx
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_6288800
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x40], ecx
        add esp, 0x18
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], eax
        call public_6347e60
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x2C], edx
        fsubp 
        mov dword ptr ss : [esp+0x30], eax
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x34], ecx
        jmp public_6303f9c
        public_6303e50 : nop
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x4C]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_628b030
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x24], edx
        faddp 
        lea edx, ss:[esp+0x18]
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x28], eax
        fmul dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], ecx
        faddp 
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6288830
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x38], ecx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x3C], edx
        push ecx
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x44], eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6288800
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x48], edx
        faddp 
        mov dword ptr ss : [esp+0x4C], eax
        fld dword ptr ss : [esp+0x28]
        add esp, 0xC
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fstp st(0)
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x28]
        fsubp 
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x14]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x24]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        public_6303f9c : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x54]
        call public_6275ee0
        mov esi, eax
        public_6303fb6 : nop
        mov eax, dword ptr ss : [esp+0x94]
        lea edi, ss:[esp+0x6C]
        mov ecx, 9
        rep movsd
        mov ecx, 9
        lea esi, ss:[esp+0x6C]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x6303c10)
    }
}

#undef public_6303c99
#undef public_6303e50
#undef public_6303f9c
#undef public_6303fb6
