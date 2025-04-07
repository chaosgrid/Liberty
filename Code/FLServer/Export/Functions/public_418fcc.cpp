#include "FLServer-PCH.h"

PROC_DECLARE(0x418fcc, internal_418fcc, public_418fcc);
extern "C" NAKED register_t __cdecl internal_418fcc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b738]
        UNREACHABLE_TRAP(0x418fcc)
    }
}
