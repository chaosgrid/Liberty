#include "FLServer-PCH.h"

PROC_DECLARE(0x418600, internal_418600, public_418600);
extern "C" NAKED register_t __cdecl internal_418600()
{
    __asm
    {
        jmp dword ptr ds : [public_41b06c]
        UNREACHABLE_TRAP(0x418600)
    }
}
