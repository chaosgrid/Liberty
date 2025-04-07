#include "Common-PCH.h"

PROC_DECLARE(0x62a06e0, internal_62a06e0, public_62a06e0);
extern "C" NAKED register_t __cdecl internal_62a06e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov al, byte ptr ds : [eax+0x15]
        ret 
        UNREACHABLE_TRAP(0x62a06e0)
    }
}
