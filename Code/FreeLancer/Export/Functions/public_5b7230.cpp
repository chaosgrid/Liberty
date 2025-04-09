#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7230, internal_5b7230, public_5b7230);
extern "C" NAKED register_t __cdecl internal_5b7230()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6778]
        UNREACHABLE_TRAP(0x5b7230)
    }
}
