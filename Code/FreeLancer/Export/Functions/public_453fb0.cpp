#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_557360);

#define public_453fc4 _public_453fc4

PROC_DECLARE(0x453fb0, internal_453fb0, public_453fb0);
extern "C" NAKED register_t __cdecl internal_453fb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        je public_453fc4
        push eax
        add ecx, 0x54
        call public_557360
        public_453fc4 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x453fb0)
    }
}

#undef public_453fc4
