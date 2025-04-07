#include "Common-PCH.h"

PROC_DECLARE(0x627bd90, internal_627bd90, public_627bd90);
extern "C" NAKED register_t __cdecl internal_627bd90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b590]
        mov dword ptr ds : [public_63fbfe8], eax
        ret 
        UNREACHABLE_TRAP(0x627bd90)
    }
}
