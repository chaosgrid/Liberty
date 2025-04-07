#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44bd50);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_44bd6e _public_44bd6e
#define public_44bd7d _public_44bd7d
#define public_44bd83 _public_44bd83
#define public_44bdaa _public_44bdaa
#define public_44bdb6 _public_44bdb6
#define public_44bdc9 _public_44bdc9
#define public_44be25 _public_44be25

PROC_DECLARE(0x44bd50, internal_44bd50, public_44bd50);
extern "C" NAKED register_t __cdecl internal_44bd50()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ss : [ebp+0x138]
        xor ebx, ebx
        cmp ecx, ebx
        jne public_44bd6e
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_44bd7d
        public_44bd6e : nop
        mov eax, dword ptr ss : [ebp+0x13C]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x10], eax
        public_44bd7d : nop
        cmp dword ptr ss : [esp+0x10], ebx
        jle public_44bdaa
        public_44bd83 : nop
        mov eax, dword ptr ss : [ebp+0x138]
        mov esi, dword ptr ds : [eax+ebx*4]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x70]
        push ecx
        push edx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_44bdb6
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        cmp ebx, eax
        jl public_44bd83
        public_44bdaa : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x5C
        ret 4
        public_44bdb6 : nop
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        jne public_44bdc9
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_44bdc9 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x10]
        push edx
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        lea eax, ds:[esi+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edi+0x500]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [esi+0x38]
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [ecx+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        jne public_44be25
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_44be25 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ss:[esp+0x50]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ds : [edi+0x500]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [edi+0x500]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x38], edx
        call dword ptr ds : [ecx+0x18]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x500]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x20]
        fstp dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edi+0x500]
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x24]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x44]
        fabs 
        fcomp qword ptr ds : [public_5cbfc0]
        fnstsw ax
        test ah, 5
        jp public_44bdaa
        fld dword ptr ss : [esp+0x40]
        fabs 
        fcomp qword ptr ds : [public_5cbfc0]
        fnstsw ax
        test ah, 5
        jp public_44bdaa
        fld dword ptr ss : [esp+0x44]
        fabs 
        fcomp qword ptr ds : [public_5cbfc0]
        fnstsw ax
        test ah, 5
        jp public_44bdaa
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ss : [esp+0x10]
        fabs 
        fcomp qword ptr ds : [public_5cbfb8]
        fnstsw ax
        test ah, 5
        jp public_44bdaa
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x18]
        fabs 
        fcomp qword ptr ds : [public_5cbfc0]
        fnstsw ax
        test ah, 5
        jp public_44bdaa
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x20]
        fabs 
        fcomp qword ptr ds : [public_5cbfc0]
        fnstsw ax
        test ah, 5
        jp public_44bdaa
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x48]
        fabs 
        fcomp qword ptr ds : [public_5cbfb0]
        fnstsw ax
        test ah, 5
        jp public_44bdaa
        fld dword ptr ss : [esp+0x44]
        fabs 
        fcomp qword ptr ds : [public_5cbfb0]
        fnstsw ax
        test ah, 5
        jp public_44bdaa
        fld dword ptr ss : [esp+0x48]
        fabs 
        fcomp qword ptr ds : [public_5cbfb0]
        fnstsw ax
        test ah, 5
        jp public_44bdaa
        fld dword ptr ss : [esp+0x3C]
        fabs 
        fcomp qword ptr ds : [public_5cbfb0]
        fnstsw ax
        test ah, 5
        jp public_44bdaa
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x5C
        ret 4
        UNREACHABLE_TRAP(0x44bd50)
    }
}

#undef public_44bd6e
#undef public_44bd7d
#undef public_44bd83
#undef public_44bdaa
#undef public_44bdb6
#undef public_44bdc9
#undef public_44be25
