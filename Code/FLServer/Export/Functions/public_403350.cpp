#include "FLServer-PCH.h"

PROC_DECLARE(0x403350, internal_403350, public_403350);
extern "C" NAKED register_t __cdecl internal_403350()
{
    __asm
    {
        add ecx, 0x10
        jmp dword ptr ds : [public_41b044]
        UNREACHABLE_TRAP(0x403350)
    }
}
