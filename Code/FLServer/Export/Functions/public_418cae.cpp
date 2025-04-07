#include "FLServer-PCH.h"

PROC_DECLARE(0x418cae, internal_418cae, public_418cae);
extern "C" NAKED register_t __cdecl internal_418cae()
{
    __asm
    {
        jmp dword ptr ds : [public_41b51c]
        UNREACHABLE_TRAP(0x418cae)
    }
}
