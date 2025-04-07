#include "Common-PCH.h"

PROC_DECLARE(0x6329a30, internal_6329a30, public_6329a30);
extern "C" NAKED register_t __cdecl internal_6329a30()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x6329a30)
    }
}
