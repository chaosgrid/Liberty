#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdb950, internal_6bdb950, public_6bdb950);
extern "C" NAKED register_t __cdecl internal_6bdb950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb10]
        mov dword ptr ds : [public_6c13a84], eax
        ret 
        UNREACHABLE_TRAP(0x6bdb950)
    }
}
