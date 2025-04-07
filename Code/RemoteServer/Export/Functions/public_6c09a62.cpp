#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a62, internal_6c09a62, public_6c09a62);
extern "C" NAKED register_t __cdecl internal_6c09a62()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0f4]
        UNREACHABLE_TRAP(0x6c09a62)
    }
}
