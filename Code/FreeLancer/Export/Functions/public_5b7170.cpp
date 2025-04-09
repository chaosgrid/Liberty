#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7170, internal_5b7170, public_5b7170);
extern "C" NAKED register_t __cdecl internal_5b7170()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66f8]
        UNREACHABLE_TRAP(0x5b7170)
    }
}
