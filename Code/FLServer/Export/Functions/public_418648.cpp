#include "FLServer-PCH.h"

PROC_DECLARE(0x418648, internal_418648, public_418648);
extern "C" NAKED register_t __cdecl internal_418648()
{
    __asm
    {
        jmp dword ptr ds : [public_41b014]
        UNREACHABLE_TRAP(0x418648)
    }
}
