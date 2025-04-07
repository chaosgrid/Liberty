#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b714c0, internal_6b714c0, public_6b714c0);
extern "C" NAKED register_t __cdecl internal_6b714c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x6b714c0)
    }
}
