#include "Content-PCH.h"

PROC_DECLARE(0x6f0ac00, internal_6f0ac00, public_6f0ac00);
extern "C" NAKED register_t __cdecl internal_6f0ac00()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x60], al
        ret 4
        UNREACHABLE_TRAP(0x6f0ac00)
    }
}
