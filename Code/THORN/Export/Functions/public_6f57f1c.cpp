#include "THORN-PCH.h"

PROC_DECLARE(0x6f57f1c, internal_6f57f1c, public_6f57f1c);
extern "C" NAKED register_t __cdecl internal_6f57f1c()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a06c]
        UNREACHABLE_TRAP(0x6f57f1c)
    }
}
