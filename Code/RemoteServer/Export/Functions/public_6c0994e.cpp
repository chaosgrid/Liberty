#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c0994e, internal_6c0994e, public_6c0994e);
extern "C" NAKED register_t __cdecl internal_6c0994e()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b03c]
        UNREACHABLE_TRAP(0x6c0994e)
    }
}
