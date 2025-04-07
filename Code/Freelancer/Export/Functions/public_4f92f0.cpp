#include "Freelancer-PCH.h"


#define public_4f9330 _public_4f9330
#define public_4f9349 _public_4f9349
#define public_4f9354 _public_4f9354

PROC_DECLARE(0x4f92f0, internal_4f92f0, public_4f92f0);
extern "C" NAKED register_t __cdecl internal_4f92f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x84], eax
        mov ecx, dword ptr ds : [ecx+0x6C]
        test ecx, ecx
        mov edx, eax
        mov dword ptr ss : [esp], edx
        je public_4f9354
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4f9330
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp], 0
        mov edx, dword ptr ss : [esp]
        push edx
        push ecx
        call dword ptr ds : [eax+0x18]
        pop ecx
        ret 4
        public_4f9330 : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4f9349
        mov dword ptr ss : [esp], 0x3F800000
        public_4f9349 : nop
        mov edx, dword ptr ss : [esp]
        mov eax, dword ptr ds : [ecx]
        push edx
        push ecx
        call dword ptr ds : [eax+0x18]
        public_4f9354 : nop
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4f92f0)
    }
}

#undef public_4f9330
#undef public_4f9349
#undef public_4f9354
