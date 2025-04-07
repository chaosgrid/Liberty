#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09af2, internal_6c09af2, public_6c09af2);
extern "C" NAKED register_t __cdecl internal_6c09af2()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b174]
        UNREACHABLE_TRAP(0x6c09af2)
    }
}
