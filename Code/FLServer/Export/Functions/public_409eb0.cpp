#include "FLServer-PCH.h"

PROC_DECLARE(0x409eb0, internal_409eb0, public_409eb0);
extern "C" NAKED register_t __cdecl internal_409eb0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2E0], al
        ret 4
        UNREACHABLE_TRAP(0x409eb0)
    }
}
