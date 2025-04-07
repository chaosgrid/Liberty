#include "Content-PCH.h"

PROC_DECLARE(0x6f07150, internal_6f07150, public_6f07150);
extern "C" NAKED register_t __cdecl internal_6f07150()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x30]
        ret 
        UNREACHABLE_TRAP(0x6f07150)
    }
}
