#include "Common-PCH.h"

PROC_DECLARE(0x626c6b0, internal_626c6b0, public_626c6b0);
extern "C" NAKED register_t __cdecl internal_626c6b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x3C]
        ret 
        UNREACHABLE_TRAP(0x626c6b0)
    }
}
