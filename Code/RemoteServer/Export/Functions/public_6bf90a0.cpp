#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf90a0, internal_6bf90a0, public_6bf90a0);
extern "C" NAKED register_t __cdecl internal_6bf90a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e254]
        mov dword ptr ds : [public_6c13eec], eax
        ret 
        UNREACHABLE_TRAP(0x6bf90a0)
    }
}
