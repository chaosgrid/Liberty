#include "FreeLancer-PCH.h"


#define public_42a411 _public_42a411

PROC_DECLARE(0x42a3e0, internal_42a3e0, public_42a3e0);
extern "C" NAKED register_t __cdecl internal_42a3e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667cb0]
        push esi
        mov esi, ecx
        cmp esi, eax
        je public_42a411
        mov eax, dword ptr ds : [public_5c6d48]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_42a411
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_42a411
        cmp eax, 0xFFFFFFFF
        je public_42a411
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [esi+8], 0
        public_42a411 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42a3e0)
    }
}

#undef public_42a411
