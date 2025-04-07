#include "ReadFile-PCH.h"


#define public_6b719c6 _public_6b719c6

PROC_DECLARE(0x6b719b0, internal_6b719b0, public_6b719b0);
extern "C" NAKED register_t __cdecl internal_6b719b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b719c6
        mov dword ptr ds : [eax+4], 0
        mov eax, dword ptr ds : [ecx+0x1C]
        inc eax
        mov dword ptr ds : [ecx+0x1C], eax
        public_6b719c6 : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6b719b0)
    }
}

#undef public_6b719c6
