#include "Common-PCH.h"

PROC_DECLARE(0x631d940, internal_631d940, public_631d940);
extern "C" NAKED register_t __cdecl internal_631d940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x631d940)
    }
}
