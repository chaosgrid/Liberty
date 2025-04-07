#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b73e80, internal_6b73e80, public_6b73e80);
extern "C" NAKED register_t __cdecl internal_6b73e80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+4]
        ret 
        UNREACHABLE_TRAP(0x6b73e80)
    }
}
