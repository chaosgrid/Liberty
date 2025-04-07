#include "Common-PCH.h"

PROC_DECLARE(0x6283540, internal_6283540, public_6283540);
extern "C" NAKED register_t __cdecl internal_6283540()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2B8]
        ret 
        UNREACHABLE_TRAP(0x6283540)
    }
}
