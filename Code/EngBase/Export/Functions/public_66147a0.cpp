#include "EngBase-PCH.h"


#define public_66147b3 _public_66147b3

PROC_DECLARE(0x66147a0, internal_66147a0, public_66147a0);
extern "C" NAKED register_t __cdecl internal_66147a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_66147b3
        test eax, eax
        je public_66147b3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66147b3 : nop
        ret 8
        UNREACHABLE_TRAP(0x66147a0)
    }
}

#undef public_66147b3
