#include "Common-PCH.h"

PROC_DECLARE(0x62a06f0, internal_62a06f0, public_62a06f0);
extern "C" NAKED register_t __cdecl internal_62a06f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov al, byte ptr ds : [eax+0x16]
        ret 
        UNREACHABLE_TRAP(0x62a06f0)
    }
}
