#include "Server-PCH.h"


#define public_6d295da _public_6d295da

PROC_DECLARE(0x6d295c0, internal_6d295c0, public_6d295c0);
extern "C" NAKED register_t __cdecl internal_6d295c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [ecx+0xC], eax
        je public_6d295da
        cmp word ptr ds : [eax], 0xA
        je public_6d295da
        xor eax, eax
        ret 8
        public_6d295da : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6d295c0)
    }
}

#undef public_6d295da
