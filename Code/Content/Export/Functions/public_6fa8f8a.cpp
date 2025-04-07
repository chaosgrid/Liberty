#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f8a, internal_6fa8f8a, public_6fa8f8a);
extern "C" NAKED register_t __cdecl internal_6fa8f8a()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb3128]
        UNREACHABLE_TRAP(0x6fa8f8a)
    }
}
