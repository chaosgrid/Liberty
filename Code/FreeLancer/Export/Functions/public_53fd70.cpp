#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53fd70, internal_53fd70, public_53fd70);
extern "C" NAKED register_t __cdecl internal_53fd70()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2E0], al
        ret 4
        UNREACHABLE_TRAP(0x53fd70)
    }
}
