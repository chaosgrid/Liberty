#include "Common-PCH.h"

PROC_DECLARE(0x6261030, internal_6261030, public_6261030);
extern "C" NAKED register_t __cdecl internal_6261030()
{
    __asm
    {
        mov eax, ecx
        mov byte ptr ds : [eax], 0
        ret 
        UNREACHABLE_TRAP(0x6261030)
    }
}
