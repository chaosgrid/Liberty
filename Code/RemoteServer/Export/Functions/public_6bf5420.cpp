#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5420, internal_6bf5420, public_6bf5420);
extern "C" NAKED register_t __cdecl internal_6bf5420()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0c8]
        mov dword ptr ds : [public_6c13d98], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5420)
    }
}
