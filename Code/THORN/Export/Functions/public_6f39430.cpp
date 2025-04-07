#include "THORN-PCH.h"

PROC_DECLARE(0x6f39430, internal_6f39430, public_6f39430);
extern "C" NAKED register_t __cdecl internal_6f39430()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x30], al
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6f39430)
    }
}
