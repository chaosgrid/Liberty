#include "Common-PCH.h"

PROC_DECLARE(0x6283080, internal_6283080, public_6283080);
extern "C" NAKED register_t __cdecl internal_6283080()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b97c]
        mov dword ptr ds : [public_63fc07c], eax
        ret 
        UNREACHABLE_TRAP(0x6283080)
    }
}
