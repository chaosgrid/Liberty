#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b73e90, internal_6b73e90, public_6b73e90);
extern "C" NAKED register_t __cdecl internal_6b73e90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        shr eax, 0x1F
        ret 
        UNREACHABLE_TRAP(0x6b73e90)
    }
}
