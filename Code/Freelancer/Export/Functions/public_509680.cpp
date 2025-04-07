#include "Freelancer-PCH.h"


#define public_5096b9 _public_5096b9
#define public_5096eb _public_5096eb
#define public_5096f5 _public_5096f5

PROC_DECLARE(0x509680, internal_509680, public_509680);
extern "C" NAKED register_t __cdecl internal_509680()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_5096b9
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x29C]
        fadd dword ptr ds : [esi+0x298]
        fld dword ptr ds : [public_5c75dc]
        fsub st, st(2)
        fmulp 
        fxch 
        fmul dword ptr ds : [esi+0x2B0]
        pop esi
        faddp 
        ret 4
        public_5096b9 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_5096f5
        fld st(0)
        fmulp 
        fcom dword ptr ds : [public_5db098]
        fnstsw ax
        test ah, 5
        jp public_5096eb
        fstp st(0)
        fld dword ptr ds : [public_5db098]
        public_5096eb : nop
        fdivr dword ptr ds : [esi+0x2B0]
        pop esi
        ret 4
        public_5096f5 : nop
        fstp st(0)
        fld dword ptr ds : [esi+0x2B0]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x509680)
    }
}

#undef public_5096b9
#undef public_5096eb
#undef public_5096f5
