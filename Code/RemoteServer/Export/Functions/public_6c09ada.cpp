#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09ada, internal_6c09ada, public_6c09ada);
extern "C" NAKED register_t __cdecl internal_6c09ada()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b15c]
        UNREACHABLE_TRAP(0x6c09ada)
    }
}
