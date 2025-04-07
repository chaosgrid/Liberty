#include "FLServer-PCH.h"

PROC_DECLARE(0x418d02, internal_418d02, public_418d02);
extern "C" NAKED register_t __cdecl internal_418d02()
{
    __asm
    {
        jmp dword ptr ds : [public_41b554]
        UNREACHABLE_TRAP(0x418d02)
    }
}
