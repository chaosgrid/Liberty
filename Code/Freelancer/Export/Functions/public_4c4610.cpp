#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4610);

#define public_4c4631 _public_4c4631

PROC_DECLARE(0x4c4610, internal_4c4610, public_4c4610);
extern "C" NAKED register_t __cdecl internal_4c4610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67337c]
        fld dword ptr ds : [public_5c7474]
        test eax, eax
        je public_4c4631
        push eax
        fstp st(0)
        call dword ptr ds : [public_5c61fc]
        fld dword ptr ds : [eax+0x100]
        add esp, 4
        public_4c4631 : nop
        ret 
        UNREACHABLE_TRAP(0x4c4610)
    }
}

#undef public_4c4631
