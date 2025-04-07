#include "FLServer-PCH.h"

PROC_DECLARE(0x419490, internal_419490, public_419490);
extern "C" NAKED register_t __cdecl internal_419490()
{
    __asm
    {
        jmp dword ptr ds : [public_41b994]
        UNREACHABLE_TRAP(0x419490)
    }
}
