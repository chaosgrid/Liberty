#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633dc90);
CLANG_FORWARD_PROC_SYMBOL(public_633dd10);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_633dd80 _public_633dd80
#define public_633dd99 _public_633dd99
#define public_633dda5 _public_633dda5
#define public_633dddc _public_633dddc

PROC_DECLARE(0x633dd10, internal_633dd10, public_633dd10);
extern "C" NAKED register_t __cdecl internal_633dd10()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax]
        push esi
        mov esi, ecx
        fsub dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x2C]
        fld st(1)
        fmul st, st(2)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x20]
        fcomp qword ptr ds : [public_639c2b8]
        fnstsw ax
        test ah, 5
        jp public_633dda5
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [esi+0x30]
        fcomp dword ptr ds : [esi+0x34]
        fnstsw ax
        test ah, 5
        jp public_633dd80
        fld dword ptr ds : [esi+0x30]
        fcomp dword ptr ds : [esi+0x38]
        fnstsw ax
        test ah, 5
        jp public_633dd99
        fld dword ptr ds : [esi+0x30]
        pop esi
        fchs 
        add esp, 0x18
        ret 4
        public_633dd80 : nop
        fld dword ptr ds : [esi+0x34]
        fcomp dword ptr ds : [esi+0x38]
        fnstsw ax
        test ah, 5
        jp public_633dd99
        fld dword ptr ds : [esi+0x34]
        pop esi
        fchs 
        add esp, 0x18
        ret 4
        public_633dd99 : nop
        fld dword ptr ds : [esi+0x38]
        pop esi
        fchs 
        add esp, 0x18
        ret 4
        public_633dda5 : nop
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        fdivr qword ptr ds : [public_6399410]
        fxch st(2)
        fmul st, st(2)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(2)
        fstp dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        jne public_633dddc
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633dddc : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], eax
        lea eax, ss:[esp+4]
        mov dword ptr ss : [esp+8], ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], edx
        call public_633dc90
        fsubr dword ptr ss : [esp+0x20]
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x633dd10)
    }
}

#undef public_633dd80
#undef public_633dd99
#undef public_633dda5
#undef public_633dddc
