#include "FLServer-PCH.h"

PROC_DECLARE(0x419856, internal_419856, public_419856);
extern "C" NAKED register_t __cdecl internal_419856()
{
    __asm
    {
        jmp dword ptr ds : [public_41b0f8]
        UNREACHABLE_TRAP(0x419856)
    }
}
