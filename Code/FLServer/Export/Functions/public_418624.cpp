#include "FLServer-PCH.h"

PROC_DECLARE(0x418624, internal_418624, public_418624);
extern "C" NAKED register_t __cdecl internal_418624()
{
    __asm
    {
        jmp dword ptr ds : [public_41b084]
        UNREACHABLE_TRAP(0x418624)
    }
}
