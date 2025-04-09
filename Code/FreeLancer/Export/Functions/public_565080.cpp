#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_565080);

PROC_DECLARE(0x565080, internal_565080, public_565080);
/* CHUNK of public_565010 */
extern "C" NAKED register_t __cdecl internal_565080()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5e2708
        ret 
        UNREACHABLE_TRAP(0x565080)
    }
}
