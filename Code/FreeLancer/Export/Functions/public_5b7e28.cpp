#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7e28, internal_5b7e28, public_5b7e28);
extern "C" NAKED register_t __cdecl internal_5b7e28()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6fc8]
        UNREACHABLE_TRAP(0x5b7e28)
    }
}
