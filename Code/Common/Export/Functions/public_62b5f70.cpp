#include "Common-PCH.h"

PROC_DECLARE(0x62b5f70, internal_62b5f70, public_62b5f70);
extern "C" NAKED register_t __cdecl internal_62b5f70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x62b5f70)
    }
}
