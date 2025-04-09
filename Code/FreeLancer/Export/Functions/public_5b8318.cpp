#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b8318, internal_5b8318, public_5b8318);
extern "C" NAKED register_t __cdecl internal_5b8318()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e8c]
        UNREACHABLE_TRAP(0x5b8318)
    }
}
