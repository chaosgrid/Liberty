#include "FLServer-PCH.h"

PROC_DECLARE(0x4020d0, internal_4020d0, public_4020d0);
extern "C" NAKED register_t __cdecl internal_4020d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x794], al
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x4020d0)
    }
}
