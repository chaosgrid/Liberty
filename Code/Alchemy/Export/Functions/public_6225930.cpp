#include "Alchemy-PCH.h"

PROC_DECLARE(0x6225930, internal_6225930, public_6225930);
extern "C" NAKED register_t __cdecl internal_6225930()
{
    __asm
    {
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6225930)
    }
}
