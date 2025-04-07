#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5430, internal_6bf5430, public_6bf5430);
extern "C" NAKED register_t __cdecl internal_6bf5430()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0c8]
        mov dword ptr ds : [public_6c13d9c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5430)
    }
}
