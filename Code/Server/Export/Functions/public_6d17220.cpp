#include "Server-PCH.h"

PROC_DECLARE(0x6d17220, internal_6d17220, public_6d17220);
extern "C" NAKED register_t __cdecl internal_6d17220()
{
    __asm
    {
        mov word ptr ds : [public_6d8e560], 0
        mov byte ptr ds : [public_6d8e562], 1
        ret 
        UNREACHABLE_TRAP(0x6d17220)
    }
}
