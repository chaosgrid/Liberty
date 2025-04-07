#include "FLServer-PCH.h"

PROC_DECLARE(0x419922, internal_419922, public_419922);
extern "C" NAKED register_t __cdecl internal_419922()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8c4]
        UNREACHABLE_TRAP(0x419922)
    }
}
