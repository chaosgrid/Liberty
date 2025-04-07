#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6206be0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_621a0e0);
CLANG_FORWARD_PROC_SYMBOL(public_621a460);
CLANG_FORWARD_PROC_SYMBOL(public_621a490);

#define public_621a276 _public_621a276
#define public_621a446 _public_621a446

PROC_DECLARE(0x621a0e0, internal_621a0e0, public_621a0e0);
extern "C" NAKED register_t __cdecl internal_621a0e0()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        mov ebx, dword ptr ss : [esp+0x60]
        push ebp
        mov ebp, dword ptr ss : [esp+0x60]
        push esi
        push edi
        lea eax, ss:[ebp+0xC0]
        push eax
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        call public_6206be0
        lea eax, ss:[ebp+0xB4]
        lea ecx, ss:[esp+0x1C]
        push eax
        lea edx, ss:[esp+0x5C]
        push ecx
        push edx
        call public_6206c10
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [ebp+0xB0]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [ebp+0xAC]
        lea edi, ss:[ebp+0xA8]
        add esp, 0x18
        faddp 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [edi]
        faddp 
        fst dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 5
        jnp public_621a446
        fld dword ptr ss : [ebp+0xA4]
        lea esi, ds:[ebx+0xC]
        sub esp, 0xC
        fld st(0)
        fmul dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edi+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edi+4]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edi]
        faddp 
        fcomp dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 5
        jnp public_621a446
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [ebp+0xC8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [ebp+0xC4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [ebp+0xC0]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x18]
        sub esp, 0xC
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ss : [ebp+0xBC]
        sub esp, 0xC
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [ebp+0xB8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [ebp+0xB4]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [edi+8]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [edi+4]
        faddp 
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [edi]
        faddp 
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        and eax, 0x4100
        jne public_621a276
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        fstp st(0)
        pop ebx
        add esp, 0x54
        ret 0xC
        public_621a276 : nop
        fld dword ptr ss : [esp+0x68]
        fsub st, st(1)
        sub esp, 0xC
        lea ecx, ss:[esp+0x4C]
        fdivr dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x74]
        fstp st(0)
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x18]
        sub esp, 0xC
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        mov eax, ebx
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x6C]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x6C]
        fcomp qword ptr ds : [public_624d168]
        fnstsw ax
        and eax, 0x4100
        jne public_621a446
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [esp+0x6C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x40]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [edi+8]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edi+4]
        mov edx, edi
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x40], eax
        mov ecx, dword ptr ds : [edx+4]
        faddp 
        mov edx, dword ptr ds : [edx+8]
        push ecx
        mov dword ptr ss : [esp+0x48], ecx
        lea ecx, ss:[esp+0x44]
        fadd st(0), st
        mov dword ptr ss : [esp+0x4C], edx
        fstp dword ptr ss : [esp]
        call public_621a490
        lea eax, ss:[esp+0x34]
        lea ecx, ss:[esp+0x40]
        push eax
        call public_621a460
        mov edx, dword ptr ds : [eax]
        mov ecx, esi
        fld dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        sub esp, 0xC
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[esp+0x4C]
        fmul dword ptr ss : [ebp+0xA0]
        fchs 
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        fld dword ptr ds : [public_624bac4]
        fsub dword ptr ss : [esp+0x74]
        fmul dword ptr ss : [ebp+0xA4]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ds : [ebx]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [ebx+4], edx
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx+8], eax
        public_621a446 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x54
        ret 0xC
        UNREACHABLE_TRAP(0x621a0e0)
    }
}

#undef public_621a276
#undef public_621a446
