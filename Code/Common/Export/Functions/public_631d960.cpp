#include "Common-PCH.h"

PROC_DECLARE(0x631d960, internal_631d960, public_631d960);
extern "C" NAKED register_t __cdecl internal_631d960()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x20], al
        ret 4
        UNREACHABLE_TRAP(0x631d960)
    }
}
