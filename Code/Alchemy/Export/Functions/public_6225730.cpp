#include "Alchemy-PCH.h"

PROC_DECLARE(0x6225730, internal_6225730, public_6225730);
extern "C" NAKED register_t __cdecl internal_6225730()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x6225730)
    }
}
