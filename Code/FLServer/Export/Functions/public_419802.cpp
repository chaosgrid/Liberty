#include "FLServer-PCH.h"

PROC_DECLARE(0x419802, internal_419802, public_419802);
extern "C" NAKED register_t __cdecl internal_419802()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbc4]
        UNREACHABLE_TRAP(0x419802)
    }
}
