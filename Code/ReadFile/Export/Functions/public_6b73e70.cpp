#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b73e70, internal_6b73e70, public_6b73e70);
extern "C" NAKED register_t __cdecl internal_6b73e70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x6b73e70)
    }
}
