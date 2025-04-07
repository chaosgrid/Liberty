#include "FLServer-PCH.h"

PROC_DECLARE(0x419724, internal_419724, public_419724);
extern "C" NAKED register_t __cdecl internal_419724()
{
    __asm
    {
        jmp dword ptr ds : [public_41b160]
        UNREACHABLE_TRAP(0x419724)
    }
}
