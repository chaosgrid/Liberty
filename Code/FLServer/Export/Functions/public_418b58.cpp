#include "FLServer-PCH.h"

PROC_DECLARE(0x418b58, internal_418b58, public_418b58);
extern "C" NAKED register_t __cdecl internal_418b58()
{
    __asm
    {
        jmp dword ptr ds : [public_41b430]
        UNREACHABLE_TRAP(0x418b58)
    }
}
