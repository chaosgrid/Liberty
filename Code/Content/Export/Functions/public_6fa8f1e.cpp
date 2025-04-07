#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f1e, internal_6fa8f1e, public_6fa8f1e);
extern "C" NAKED register_t __cdecl internal_6fa8f1e()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30c0]
        UNREACHABLE_TRAP(0x6fa8f1e)
    }
}
