#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63044d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fce);

#define public_63044f4 _public_63044f4
#define public_6304613 _public_6304613
#define public_63046c5 _public_63046c5
#define public_63046c7 _public_63046c7

PROC_DECLARE(0x63044d0, internal_63044d0, public_63044d0);
extern "C" NAKED register_t __cdecl internal_63044d0()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [public_63fce08]
        test eax, eax
        jne public_63044f4
        call public_6391cf0
        mov dword ptr ds : [public_63fce08], eax
        public_63044f4 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push edx
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x20]
        fchs 
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        jne public_63046c7
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x38]
        push ebx
        fchs 
        fstp dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x14]
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        mov dword ptr ss : [esp+0x24], ecx
        fild dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edi+4]
        sub edx, eax
        fmul dword ptr ds : [public_639c13c]
        mov dword ptr ss : [esp+0x24], edx
        fiadd dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi]
        push esi
        fstp dword ptr ss : [esp+0x40]
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_639c13c]
        fiadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fdivr qword ptr ds : [public_63a03f0]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [eax+0x2C]
        mov ecx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x10]
        push esi
        call dword ptr ds : [ecx+0x20]
        fmul dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x30]
        push esi
        fmul dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ds : [ebx]
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x30]
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x20]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x28]
        fmulp 
        fadd dword ptr ss : [esp+0xC]
        fld st(0)
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_6304613
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], edx
        public_6304613 : nop
        fld dword ptr ds : [ebx]
        fsub dword ptr ss : [esp+0x3C]
        fabs 
        fstp dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0xC]
        fabs 
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x24]
        fabs 
        fst dword ptr ss : [esp+0x24]
        fld1 
        fpatan 
        fst dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x2C]
        fdiv dword ptr ss : [esp+0x28]
        call public_6391fce
        fst dword ptr ss : [esp+0x2C]
        fsubp 
        mov eax, dword ptr ds : [esi]
        push esi
        fptan 
        fstp st(0)
        fsubr dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [eax+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi]
        push esi
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [ecx+0x20]
        fmul dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x38]
        pop ebx
        fld st(0)
        fstp dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi+8]
        sub eax, dword ptr ds : [edi]
        inc eax
        sar eax, 1
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fadd st, st(1)
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_63046c5
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, dword ptr ds : [edi+4]
        inc ecx
        sar ecx, 1
        mov dword ptr ss : [esp+0x28], ecx
        fild dword ptr ss : [esp+0x28]
        fadd st, st(1)
        fld dword ptr ss : [esp+0x30]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_63046c7
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x14
        ret 
        public_63046c5 : nop
        fstp st(0)
        public_63046c7 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x63044d0)
    }
}

#undef public_63044f4
#undef public_6304613
#undef public_63046c5
#undef public_63046c7
