#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57bdb0);

#define public_57bdbe _public_57bdbe

PROC_DECLARE(0x57bdb0, internal_57bdb0, public_57bdb0);
extern "C" NAKED register_t __cdecl internal_57bdb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jl public_57bdbe
        mov dword ptr ds : [ecx+0x510], eax
        public_57bdbe : nop
        ret 4
        UNREACHABLE_TRAP(0x57bdb0)
    }
}

#undef public_57bdbe
