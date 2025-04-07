#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b73e30, internal_6b73e30, public_6b73e30);
extern "C" NAKED register_t __cdecl internal_6b73e30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0x1C]
        ret 
        UNREACHABLE_TRAP(0x6b73e30)
    }
}
