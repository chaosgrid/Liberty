#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c1660);

#define public_62c167a _public_62c167a
#define public_62c167c _public_62c167c
#define public_62c1840 _public_62c1840
#define public_62c185f _public_62c185f

PROC_DECLARE(0x62c1660, internal_62c1660, public_62c1660);
extern "C" NAKED register_t __cdecl internal_62c1660()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        sub esp, 0x30
        test eax, eax
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        je public_62c167a
        lea ecx, ds:[eax-8]
        jmp public_62c167c
        public_62c167a : nop
        xor ecx, ecx
        public_62c167c : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x30]
        fsub dword ptr ds : [ebx+0x30]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x24], ecx
        fld dword ptr ds : [esi+0x2C]
        lea ecx, ss:[esp+0x18]
        fsub dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [ebx+0x28]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x40]
        fcomp qword ptr ds : [public_639f418]
        fnstsw ax
        test ah, 0x41
        jne public_62c1840
        fld dword ptr ds : [esi+0x30]
        sub esp, 0xC
        fsub dword ptr ds : [ebx+0x30]
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x2C]
        fsub dword ptr ds : [ebx+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [ebx+0x28]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x30]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
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
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [ebx+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [ebx+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [ebx+0x28]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x2C]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fdivp 
        fld dword ptr ss : [esp+0x4C]
        fdivr st, st(1)
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [ebx+0x30]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [ebx+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [ebx+0x28]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        lea edx, ds:[edi+0x24]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], ecx
        jmp public_62c185f
        public_62c1840 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov edi, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ecx], 0
        mov eax, dword ptr ds : [ebx+0x28]
        lea edx, ds:[edi+0x24]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [ebx+0x30]
        public_62c185f : nop
        lea esi, ds:[ebx+4]
        mov ecx, 9
        mov dword ptr ds : [edx+8], eax
        rep movsd
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x30
        ret 0x10
        UNREACHABLE_TRAP(0x62c1660)
    }
}

#undef public_62c167a
#undef public_62c167c
#undef public_62c1840
#undef public_62c185f
