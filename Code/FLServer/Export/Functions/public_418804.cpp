#include "FLServer-PCH.h"

PROC_DECLARE(0x418804, internal_418804, public_418804);
extern "C" NAKED register_t __cdecl internal_418804()
{
    __asm
    {
        jmp dword ptr ds : [public_41bba8]
        UNREACHABLE_TRAP(0x418804)
    }
}
