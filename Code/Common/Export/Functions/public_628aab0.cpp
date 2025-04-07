#include "Common-PCH.h"

PROC_DECLARE(0x628aab0, internal_628aab0, public_628aab0);
extern "C" NAKED register_t __cdecl internal_628aab0()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x10], 0
        ret 4
        UNREACHABLE_TRAP(0x628aab0)
    }
}
