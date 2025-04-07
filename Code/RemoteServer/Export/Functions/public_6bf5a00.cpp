#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5a00, internal_6bf5a00, public_6bf5a00);
extern "C" NAKED register_t __cdecl internal_6bf5a00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0f8]
        mov dword ptr ds : [public_6c13dcc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5a00)
    }
}
