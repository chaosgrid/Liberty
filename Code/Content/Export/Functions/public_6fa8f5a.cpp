#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f5a, internal_6fa8f5a, public_6fa8f5a);
extern "C" NAKED register_t __cdecl internal_6fa8f5a()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30ec]
        UNREACHABLE_TRAP(0x6fa8f5a)
    }
}
