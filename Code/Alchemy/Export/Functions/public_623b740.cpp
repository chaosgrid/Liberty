#include "Alchemy-PCH.h"


#define public_623b75f _public_623b75f

PROC_DECLARE(0x623b740, internal_623b740, public_623b740);
extern "C" NAKED register_t __cdecl internal_623b740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257b9c]
        test eax, eax
        je public_623b75f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6257b9c]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 8
        public_623b75f : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x623b740)
    }
}

#undef public_623b75f
