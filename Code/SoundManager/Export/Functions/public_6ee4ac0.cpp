#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee4ac0, internal_6ee4ac0, public_6ee4ac0);
extern "C" NAKED register_t __cdecl internal_6ee4ac0()
{
    __asm
    {
        jmp dword ptr ds : [public_6ee901c]
        UNREACHABLE_TRAP(0x6ee4ac0)
    }
}
