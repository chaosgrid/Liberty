#include "FLServer-PCH.h"

PROC_DECLARE(0x4198fe, internal_4198fe, public_4198fe);
extern "C" NAKED register_t __cdecl internal_4198fe()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8a0]
        UNREACHABLE_TRAP(0x4198fe)
    }
}
