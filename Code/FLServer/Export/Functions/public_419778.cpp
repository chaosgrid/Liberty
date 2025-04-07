#include "FLServer-PCH.h"

PROC_DECLARE(0x419778, internal_419778, public_419778);
extern "C" NAKED register_t __cdecl internal_419778()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbec]
        UNREACHABLE_TRAP(0x419778)
    }
}
