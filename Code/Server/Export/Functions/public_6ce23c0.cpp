#include "Server-PCH.h"

PROC_DECLARE(0x6ce23c0, internal_6ce23c0, public_6ce23c0);
extern "C" NAKED register_t __cdecl internal_6ce23c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2B8]
        ret 
        UNREACHABLE_TRAP(0x6ce23c0)
    }
}
