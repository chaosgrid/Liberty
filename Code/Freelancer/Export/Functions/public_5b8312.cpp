#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b8312, internal_5b8312, public_5b8312);
extern "C" NAKED register_t __cdecl internal_5b8312()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e88]
        UNREACHABLE_TRAP(0x5b8312)
    }
}
