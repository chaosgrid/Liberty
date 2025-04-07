#include "Content-PCH.h"

PROC_DECLARE(0x6ec1650, internal_6ec1650, public_6ec1650);
extern "C" NAKED register_t __cdecl internal_6ec1650()
{
    __asm
    {
        mov dword ptr ds : [ecx+0xC], 0
        ret 
        UNREACHABLE_TRAP(0x6ec1650)
    }
}
