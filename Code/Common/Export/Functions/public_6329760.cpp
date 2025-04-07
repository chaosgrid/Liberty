#include "Common-PCH.h"

PROC_DECLARE(0x6329760, internal_6329760, public_6329760);
extern "C" NAKED register_t __cdecl internal_6329760()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+4], al
        ret 4
        UNREACHABLE_TRAP(0x6329760)
    }
}
