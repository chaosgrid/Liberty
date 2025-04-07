#include "THORN-PCH.h"

PROC_DECLARE(0x6f34820, internal_6f34820, public_6f34820);
extern "C" NAKED register_t __cdecl internal_6f34820()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 0xC
        UNREACHABLE_TRAP(0x6f34820)
    }
}
