#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf2430, internal_6bf2430, public_6bf2430);
extern "C" NAKED register_t __cdecl internal_6bf2430()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfe8]
        mov dword ptr ds : [public_6c13ce4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf2430)
    }
}
