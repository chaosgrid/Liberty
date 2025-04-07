#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09aec, internal_6c09aec, public_6c09aec);
extern "C" NAKED register_t __cdecl internal_6c09aec()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b158]
        UNREACHABLE_TRAP(0x6c09aec)
    }
}
