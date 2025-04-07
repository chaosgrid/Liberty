#include "Server-PCH.h"

PROC_DECLARE(0x6ce1ac0, internal_6ce1ac0, public_6ce1ac0);
extern "C" NAKED register_t __cdecl internal_6ce1ac0()
{
    __asm
    {
        add ecx, 0x10
        jmp dword ptr ds : [public_6d64670]
        UNREACHABLE_TRAP(0x6ce1ac0)
    }
}
