#include "Server-PCH.h"


#define public_6cf3a8f _public_6cf3a8f

PROC_DECLARE(0x6cf3a50, internal_6cf3a50, public_6cf3a50);
extern "C" NAKED register_t __cdecl internal_6cf3a50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi-0x60]
        call dword ptr ds : [public_6d6419c]
        fld dword ptr ds : [eax+0x88]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cf3a8f
        mov eax, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [public_6d64018]
        add esp, 4
        test eax, eax
        je public_6cf3a8f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6cf3a8f
        dec dword ptr ds : [esi+8]
        public_6cf3a8f : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf3a50)
    }
}

#undef public_6cf3a8f
