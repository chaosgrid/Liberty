#include "FLServer-PCH.h"

PROC_DECLARE(0x419820, internal_419820, public_419820);
extern "C" NAKED register_t __cdecl internal_419820()
{
    __asm
    {
        jmp dword ptr ds : [public_41b118]
        UNREACHABLE_TRAP(0x419820)
    }
}
