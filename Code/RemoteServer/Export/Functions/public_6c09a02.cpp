#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a02, internal_6c09a02, public_6c09a02);
extern "C" NAKED register_t __cdecl internal_6c09a02()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0b4]
        UNREACHABLE_TRAP(0x6c09a02)
    }
}
