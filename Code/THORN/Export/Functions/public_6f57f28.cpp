#include "THORN-PCH.h"

PROC_DECLARE(0x6f57f28, internal_6f57f28, public_6f57f28);
extern "C" NAKED register_t __cdecl internal_6f57f28()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a074]
        UNREACHABLE_TRAP(0x6f57f28)
    }
}
