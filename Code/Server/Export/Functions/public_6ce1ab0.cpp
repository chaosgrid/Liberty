#include "Server-PCH.h"

PROC_DECLARE(0x6ce1ab0, internal_6ce1ab0, public_6ce1ab0);
extern "C" NAKED register_t __cdecl internal_6ce1ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x6ce1ab0)
    }
}
