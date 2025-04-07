#include "FLServer-PCH.h"

PROC_DECLARE(0x419904, internal_419904, public_419904);
extern "C" NAKED register_t __cdecl internal_419904()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8a4]
        UNREACHABLE_TRAP(0x419904)
    }
}
