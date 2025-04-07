#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09948, internal_6c09948, public_6c09948);
extern "C" NAKED register_t __cdecl internal_6c09948()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b038]
        UNREACHABLE_TRAP(0x6c09948)
    }
}
