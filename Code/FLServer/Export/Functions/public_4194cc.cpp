#include "FLServer-PCH.h"

PROC_DECLARE(0x4194cc, internal_4194cc, public_4194cc);
extern "C" NAKED register_t __cdecl internal_4194cc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b940]
        UNREACHABLE_TRAP(0x4194cc)
    }
}
