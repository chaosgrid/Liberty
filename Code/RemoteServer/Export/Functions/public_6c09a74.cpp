#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a74, internal_6c09a74, public_6c09a74);
extern "C" NAKED register_t __cdecl internal_6c09a74()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b020]
        UNREACHABLE_TRAP(0x6c09a74)
    }
}
