#include "FLServer-PCH.h"

PROC_DECLARE(0x419868, internal_419868, public_419868);
extern "C" NAKED register_t __cdecl internal_419868()
{
    __asm
    {
        jmp dword ptr ds : [public_41b008]
        UNREACHABLE_TRAP(0x419868)
    }
}
