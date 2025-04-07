#include "FLServer-PCH.h"

PROC_DECLARE(0x418b34, internal_418b34, public_418b34);
extern "C" NAKED register_t __cdecl internal_418b34()
{
    __asm
    {
        jmp dword ptr ds : [public_41b418]
        UNREACHABLE_TRAP(0x418b34)
    }
}
