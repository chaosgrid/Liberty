#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b73e50, internal_6b73e50, public_6b73e50);
extern "C" NAKED register_t __cdecl internal_6b73e50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov al, byte ptr ds : [eax+8]
        shr al, 4
        and al, 1
        ret 
        UNREACHABLE_TRAP(0x6b73e50)
    }
}
