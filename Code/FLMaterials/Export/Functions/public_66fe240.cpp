#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fe240, internal_66fe240, public_66fe240);
extern "C" NAKED register_t __cdecl internal_66fe240()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        mov byte ptr ds : [public_6704634], al
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x66fe240)
    }
}
