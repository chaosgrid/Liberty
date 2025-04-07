#include "FLServer-PCH.h"

PROC_DECLARE(0x418822, internal_418822, public_418822);
extern "C" NAKED register_t __cdecl internal_418822()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba7c]
        UNREACHABLE_TRAP(0x418822)
    }
}
