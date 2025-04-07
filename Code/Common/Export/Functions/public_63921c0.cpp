#include "Common-PCH.h"


#define public_63921e7 _public_63921e7

PROC_DECLARE(0x63921c0, internal_63921c0, public_63921c0);
extern "C" NAKED register_t __cdecl internal_63921c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], ecx
        mov eax, dword ptr ds : [eax+8]
        and dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+8], eax
        test eax, eax
        mov dword ptr ds : [esi], offset public_63a5ac0
        je public_63921e7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_63921e7 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63921c0)
    }
}

#undef public_63921e7
