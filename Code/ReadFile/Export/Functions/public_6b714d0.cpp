#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b714d0, internal_6b714d0, public_6b714d0);
extern "C" NAKED register_t __cdecl internal_6b714d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x6b714d0)
    }
}
