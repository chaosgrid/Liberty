#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09d38, internal_6c09d38, public_6c09d38);
extern "C" NAKED register_t __cdecl internal_6c09d38()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b210]
        UNREACHABLE_TRAP(0x6c09d38)
    }
}
