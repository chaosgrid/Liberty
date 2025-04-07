#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dce16);

PROC_DECLARE(0x65dce16, internal_65dce16, public_65dce16);
extern "C" NAKED register_t __cdecl internal_65dce16()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_65e10dc]
        push dword ptr ds : [public_65e5634]
        call esi
        push dword ptr ds : [public_65e5624]
        call esi
        push dword ptr ds : [public_65e5614]
        call esi
        push dword ptr ds : [public_65e55f4]
        call esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dce16)
    }
}
