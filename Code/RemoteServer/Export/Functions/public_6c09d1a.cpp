#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09d1a, internal_6c09d1a, public_6c09d1a);
extern "C" NAKED register_t __cdecl internal_6c09d1a()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b228]
        UNREACHABLE_TRAP(0x6c09d1a)
    }
}
