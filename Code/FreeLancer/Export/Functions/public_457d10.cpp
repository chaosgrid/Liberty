#include "Freelancer-PCH.h"


#define public_457d28 _public_457d28

PROC_DECLARE(0x457d10, internal_457d10, public_457d10);
extern "C" NAKED register_t __cdecl internal_457d10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x68]
        test eax, eax
        je public_457d28
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x28]
        public_457d28 : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x457d10)
    }
}

#undef public_457d28
