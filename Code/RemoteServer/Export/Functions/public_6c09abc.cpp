#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09abc, internal_6c09abc, public_6c09abc);
extern "C" NAKED register_t __cdecl internal_6c09abc()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1bc]
        UNREACHABLE_TRAP(0x6c09abc)
    }
}
