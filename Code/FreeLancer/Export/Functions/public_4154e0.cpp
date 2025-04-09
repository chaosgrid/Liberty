#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4154e0, internal_4154e0, public_4154e0);
extern "C" NAKED register_t __cdecl internal_4154e0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x20], al
        ret 4
        UNREACHABLE_TRAP(0x4154e0)
    }
}
