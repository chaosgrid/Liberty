#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f7e, internal_6fa8f7e, public_6fa8f7e);
extern "C" NAKED register_t __cdecl internal_6fa8f7e()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb3104]
        UNREACHABLE_TRAP(0x6fa8f7e)
    }
}
