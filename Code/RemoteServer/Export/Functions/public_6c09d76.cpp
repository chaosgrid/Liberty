#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09d76, internal_6c09d76, public_6c09d76);
extern "C" NAKED register_t __cdecl internal_6c09d76()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b208]
        UNREACHABLE_TRAP(0x6c09d76)
    }
}
