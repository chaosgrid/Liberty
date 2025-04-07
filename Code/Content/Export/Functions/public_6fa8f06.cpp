#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f06, internal_6fa8f06, public_6fa8f06);
extern "C" NAKED register_t __cdecl internal_6fa8f06()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb305c]
        UNREACHABLE_TRAP(0x6fa8f06)
    }
}
