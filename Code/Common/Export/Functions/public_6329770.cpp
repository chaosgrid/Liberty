#include "Common-PCH.h"

PROC_DECLARE(0x6329770, internal_6329770, public_6329770);
extern "C" NAKED register_t __cdecl internal_6329770()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+5], al
        ret 4
        UNREACHABLE_TRAP(0x6329770)
    }
}
