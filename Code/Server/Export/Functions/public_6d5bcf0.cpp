#include "Server-PCH.h"

PROC_DECLARE(0x6d5bcf0, internal_6d5bcf0, public_6d5bcf0);
extern "C" NAKED register_t __cdecl internal_6d5bcf0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        ret 
        UNREACHABLE_TRAP(0x6d5bcf0)
    }
}
