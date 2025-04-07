#include "FLServer-PCH.h"

PROC_DECLARE(0x418fae, internal_418fae, public_418fae);
extern "C" NAKED register_t __cdecl internal_418fae()
{
    __asm
    {
        jmp dword ptr ds : [public_41b724]
        UNREACHABLE_TRAP(0x418fae)
    }
}
