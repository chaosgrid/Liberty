#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f60, internal_6fa8f60, public_6fa8f60);
extern "C" NAKED register_t __cdecl internal_6fa8f60()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30f0]
        UNREACHABLE_TRAP(0x6fa8f60)
    }
}
