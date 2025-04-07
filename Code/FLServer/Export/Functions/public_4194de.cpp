#include "FLServer-PCH.h"

PROC_DECLARE(0x4194de, internal_4194de, public_4194de);
extern "C" NAKED register_t __cdecl internal_4194de()
{
    __asm
    {
        jmp dword ptr ds : [public_41b934]
        UNREACHABLE_TRAP(0x4194de)
    }
}
