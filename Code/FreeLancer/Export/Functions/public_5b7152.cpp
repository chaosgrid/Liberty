#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7152, internal_5b7152, public_5b7152);
extern "C" NAKED register_t __cdecl internal_5b7152()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66e4]
        UNREACHABLE_TRAP(0x5b7152)
    }
}
