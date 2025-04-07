#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f18, internal_6fa8f18, public_6fa8f18);
extern "C" NAKED register_t __cdecl internal_6fa8f18()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30bc]
        UNREACHABLE_TRAP(0x6fa8f18)
    }
}
