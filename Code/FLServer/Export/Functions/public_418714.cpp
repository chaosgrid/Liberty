#include "FLServer-PCH.h"

PROC_DECLARE(0x418714, internal_418714, public_418714);
extern "C" NAKED register_t __cdecl internal_418714()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba94]
        UNREACHABLE_TRAP(0x418714)
    }
}
