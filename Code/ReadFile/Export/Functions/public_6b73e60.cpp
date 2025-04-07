#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b73e60, internal_6b73e60, public_6b73e60);
extern "C" NAKED register_t __cdecl internal_6b73e60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        and eax, 0x7FFFFFFF
        add eax, 4
        ret 
        UNREACHABLE_TRAP(0x6b73e60)
    }
}
