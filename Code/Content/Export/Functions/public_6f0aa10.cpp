#include "Content-PCH.h"

PROC_DECLARE(0x6f0aa10, internal_6f0aa10, public_6f0aa10);
extern "C" NAKED register_t __cdecl internal_6f0aa10()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x28], 0
        ret 
        UNREACHABLE_TRAP(0x6f0aa10)
    }
}
