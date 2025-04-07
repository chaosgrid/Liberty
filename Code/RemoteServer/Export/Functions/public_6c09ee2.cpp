#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09ee2, internal_6c09ee2, public_6c09ee2);
extern "C" NAKED register_t __cdecl internal_6c09ee2()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1e4]
        UNREACHABLE_TRAP(0x6c09ee2)
    }
}
