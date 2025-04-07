#include "FLServer-PCH.h"

PROC_DECLARE(0x419428, internal_419428, public_419428);
extern "C" NAKED register_t __cdecl internal_419428()
{
    __asm
    {
        jmp dword ptr ds : [public_41b970]
        UNREACHABLE_TRAP(0x419428)
    }
}
