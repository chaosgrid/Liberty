#include "Content-PCH.h"

PROC_DECLARE(0x6fa9030, internal_6fa9030, public_6fa9030);
extern "C" NAKED register_t __cdecl internal_6fa9030()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb3384]
        UNREACHABLE_TRAP(0x6fa9030)
    }
}
