#include "EngBase-PCH.h"


#define public_66218ae _public_66218ae
#define public_66218b5 _public_66218b5

PROC_DECLARE(0x66218a0, internal_66218a0, public_66218a0);
extern "C" NAKED register_t __cdecl internal_66218a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, 0xFFFFFFFF
        je public_66218ae
        test esi, esi
        jne public_66218b5
        public_66218ae : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_66218b5 : nop
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi+8]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ds : [esi+8]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x66218a0)
    }
}

#undef public_66218ae
#undef public_66218b5
