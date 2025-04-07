#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09966, internal_6c09966, public_6c09966);
extern "C" NAKED register_t __cdecl internal_6c09966()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b04c]
        UNREACHABLE_TRAP(0x6c09966)
    }
}
