#include "FLServer-PCH.h"

PROC_DECLARE(0x419736, internal_419736, public_419736);
extern "C" NAKED register_t __cdecl internal_419736()
{
    __asm
    {
        jmp dword ptr ds : [public_41b154]
        UNREACHABLE_TRAP(0x419736)
    }
}
