#include "Common-PCH.h"

PROC_DECLARE(0x6287720, internal_6287720, public_6287720);
extern "C" NAKED register_t __cdecl internal_6287720()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], offset public_639bf6c
        ret 
        UNREACHABLE_TRAP(0x6287720)
    }
}
