#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac380, internal_6dac380, public_6dac380);
extern "C" NAKED register_t __cdecl internal_6dac380()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64dc]
        mov dword ptr ds : [public_6dbc2ec], eax
        ret 
        UNREACHABLE_TRAP(0x6dac380)
    }
}
