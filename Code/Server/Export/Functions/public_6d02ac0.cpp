#include "Server-PCH.h"

PROC_DECLARE(0x6d02ac0, internal_6d02ac0, public_6d02ac0);
extern "C" NAKED register_t __cdecl internal_6d02ac0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        jmp dword ptr ds : [public_6d6460c]
        UNREACHABLE_TRAP(0x6d02ac0)
    }
}
