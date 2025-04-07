#include "Content-PCH.h"


#define public_6f9a429 _public_6f9a429

PROC_DECLARE(0x6f9a410, internal_6f9a410, public_6f9a410);
extern "C" NAKED register_t __cdecl internal_6f9a410()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f9a429
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], 0
        public_6f9a429 : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f9a410)
    }
}

#undef public_6f9a429
