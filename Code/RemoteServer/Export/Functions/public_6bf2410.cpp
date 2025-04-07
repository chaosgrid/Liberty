#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf2410, internal_6bf2410, public_6bf2410);
extern "C" NAKED register_t __cdecl internal_6bf2410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfe4]
        mov dword ptr ds : [public_6c13ce8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf2410)
    }
}
