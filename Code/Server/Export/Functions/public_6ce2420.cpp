#include "Server-PCH.h"

PROC_DECLARE(0x6ce2420, internal_6ce2420, public_6ce2420);
extern "C" NAKED register_t __cdecl internal_6ce2420()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2E0], al
        ret 4
        UNREACHABLE_TRAP(0x6ce2420)
    }
}
