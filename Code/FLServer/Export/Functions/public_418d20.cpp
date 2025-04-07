#include "FLServer-PCH.h"

PROC_DECLARE(0x418d20, internal_418d20, public_418d20);
extern "C" NAKED register_t __cdecl internal_418d20()
{
    __asm
    {
        jmp dword ptr ds : [public_41b568]
        UNREACHABLE_TRAP(0x418d20)
    }
}
