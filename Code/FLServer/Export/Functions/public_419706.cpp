#include "FLServer-PCH.h"

PROC_DECLARE(0x419706, internal_419706, public_419706);
extern "C" NAKED register_t __cdecl internal_419706()
{
    __asm
    {
        jmp dword ptr ds : [public_41b174]
        UNREACHABLE_TRAP(0x419706)
    }
}
