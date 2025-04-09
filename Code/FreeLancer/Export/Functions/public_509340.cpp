#include "Freelancer-PCH.h"


#define public_5093b6 _public_5093b6
#define public_5093d4 _public_5093d4
#define public_509433 _public_509433
#define public_509451 _public_509451

PROC_DECLARE(0x509340, internal_509340, public_509340);
extern "C" NAKED register_t __cdecl internal_509340()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x20]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fstp dword ptr ss : [esp+0x14]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x14]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_5093b6
        fld dword ptr ds : [public_5c7474]
        pop esi
        add esp, 0xC
        ret 4
        public_5093b6 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5c7720]
        fnstsw ax
        test ah, 5
        jp public_5093d4
        fld dword ptr ds : [public_5c75dc]
        pop esi
        add esp, 0xC
        ret 4
        public_5093d4 : nop
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x20]
        fsqrt 
        lea edx, ss:[esp+4]
        push edx
        fst dword ptr ss : [esp+0x18]
        fdivr qword ptr ds : [public_5c89b8]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [eax+0x40]
        fsub dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_509433
        fld dword ptr ds : [public_5c7474]
        pop esi
        add esp, 0xC
        ret 4
        public_509433 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x298]
        fnstsw ax
        test ah, 0x41
        jne public_509451
        fld dword ptr ds : [public_5c75dc]
        pop esi
        add esp, 0xC
        ret 4
        public_509451 : nop
        fld dword ptr ss : [esp+0x14]
        fdiv dword ptr ds : [esi+0x298]
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x509340)
    }
}

#undef public_5093b6
#undef public_5093d4
#undef public_509433
#undef public_509451
