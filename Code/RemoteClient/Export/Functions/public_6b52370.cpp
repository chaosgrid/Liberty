#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52370, internal_6b52370, public_6b52370);
extern "C" NAKED register_t __cdecl internal_6b52370()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3b0]
        mov dword ptr ds : [public_6b73f74], eax
        ret 
        UNREACHABLE_TRAP(0x6b52370)
    }
}
