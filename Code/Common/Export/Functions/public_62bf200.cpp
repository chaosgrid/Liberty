#include "Common-PCH.h"

PROC_DECLARE(0x62bf200, internal_62bf200, public_62bf200);
extern "C" NAKED register_t __cdecl internal_62bf200()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [eax+4]
        ret 
        UNREACHABLE_TRAP(0x62bf200)
    }
}
