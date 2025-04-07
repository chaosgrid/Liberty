#include "Alchemy-PCH.h"


#define public_623b6cf _public_623b6cf

PROC_DECLARE(0x623b6b0, internal_623b6b0, public_623b6b0);
extern "C" NAKED register_t __cdecl internal_623b6b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257b98]
        test eax, eax
        je public_623b6cf
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6257b98]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 8
        public_623b6cf : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x623b6b0)
    }
}

#undef public_623b6cf
