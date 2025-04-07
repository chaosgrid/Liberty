#include "FLServer-PCH.h"

PROC_DECLARE(0x418768, internal_418768, public_418768);
extern "C" NAKED register_t __cdecl internal_418768()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba5c]
        UNREACHABLE_TRAP(0x418768)
    }
}
