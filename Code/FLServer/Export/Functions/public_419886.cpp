#include "FLServer-PCH.h"

PROC_DECLARE(0x419886, internal_419886, public_419886);
extern "C" NAKED register_t __cdecl internal_419886()
{
    __asm
    {
        jmp dword ptr ds : [public_41b87c]
        UNREACHABLE_TRAP(0x419886)
    }
}
