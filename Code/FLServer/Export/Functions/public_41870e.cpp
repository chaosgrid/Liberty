#include "FLServer-PCH.h"

PROC_DECLARE(0x41870e, internal_41870e, public_41870e);
extern "C" NAKED register_t __cdecl internal_41870e()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba98]
        UNREACHABLE_TRAP(0x41870e)
    }
}
