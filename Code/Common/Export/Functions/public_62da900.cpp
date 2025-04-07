#include "Common-PCH.h"

PROC_DECLARE(0x62da900, internal_62da900, public_62da900);
extern "C" NAKED register_t __cdecl internal_62da900()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0x3F800000
        mov dword ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x62da900)
    }
}
