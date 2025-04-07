#include "FLServer-PCH.h"

PROC_DECLARE(0x419748, internal_419748, public_419748);
extern "C" NAKED register_t __cdecl internal_419748()
{
    __asm
    {
        jmp dword ptr ds : [public_41b148]
        UNREACHABLE_TRAP(0x419748)
    }
}
