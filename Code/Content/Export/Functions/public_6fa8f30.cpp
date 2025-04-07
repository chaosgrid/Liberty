#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f30, internal_6fa8f30, public_6fa8f30);
extern "C" NAKED register_t __cdecl internal_6fa8f30()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30cc]
        UNREACHABLE_TRAP(0x6fa8f30)
    }
}
