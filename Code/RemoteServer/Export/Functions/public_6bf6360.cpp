#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf6360, internal_6bf6360, public_6bf6360);
extern "C" NAKED register_t __cdecl internal_6bf6360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e12c]
        mov dword ptr ds : [public_6c13df4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf6360)
    }
}
