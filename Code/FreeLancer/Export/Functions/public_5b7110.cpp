#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7110, internal_5b7110, public_5b7110);
extern "C" NAKED register_t __cdecl internal_5b7110()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66b8]
        UNREACHABLE_TRAP(0x5b7110)
    }
}
