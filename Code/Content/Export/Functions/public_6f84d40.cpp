#include "Content-PCH.h"

PROC_DECLARE(0x6f84d40, internal_6f84d40, public_6f84d40);
extern "C" NAKED register_t __cdecl internal_6f84d40()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x18], 1
        ret 
        UNREACHABLE_TRAP(0x6f84d40)
    }
}
