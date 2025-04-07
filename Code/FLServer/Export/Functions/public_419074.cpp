#include "FLServer-PCH.h"

PROC_DECLARE(0x419074, internal_419074, public_419074);
extern "C" NAKED register_t __cdecl internal_419074()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7b4]
        UNREACHABLE_TRAP(0x419074)
    }
}
