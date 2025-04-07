#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09954, internal_6c09954, public_6c09954);
extern "C" NAKED register_t __cdecl internal_6c09954()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b040]
        UNREACHABLE_TRAP(0x6c09954)
    }
}
