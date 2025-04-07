#include "FLServer-PCH.h"

PROC_DECLARE(0x418ccc, internal_418ccc, public_418ccc);
extern "C" NAKED register_t __cdecl internal_418ccc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b530]
        UNREACHABLE_TRAP(0x418ccc)
    }
}
