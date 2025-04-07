#include "Content-PCH.h"

PROC_DECLARE(0x6f34240, internal_6f34240, public_6f34240);
extern "C" NAKED register_t __cdecl internal_6f34240()
{
    __asm
    {
        ret 0x10
        UNREACHABLE_TRAP(0x6f34240)
    }
}
