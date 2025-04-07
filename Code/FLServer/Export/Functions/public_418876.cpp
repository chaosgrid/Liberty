#include "FLServer-PCH.h"

PROC_DECLARE(0x418876, internal_418876, public_418876);
extern "C" NAKED register_t __cdecl internal_418876()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba04]
        UNREACHABLE_TRAP(0x418876)
    }
}
