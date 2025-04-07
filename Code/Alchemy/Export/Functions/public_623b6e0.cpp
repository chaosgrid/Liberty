#include "Alchemy-PCH.h"


#define public_623b6ff _public_623b6ff

PROC_DECLARE(0x623b6e0, internal_623b6e0, public_623b6e0);
extern "C" NAKED register_t __cdecl internal_623b6e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257b94]
        test eax, eax
        je public_623b6ff
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6257b94]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 8
        public_623b6ff : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x623b6e0)
    }
}

#undef public_623b6ff
