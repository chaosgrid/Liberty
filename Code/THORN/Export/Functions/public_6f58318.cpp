#include "THORN-PCH.h"

PROC_DECLARE(0x6f58318, internal_6f58318, public_6f58318);
extern "C" NAKED register_t __cdecl internal_6f58318()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a14c]
        UNREACHABLE_TRAP(0x6f58318)
    }
}
