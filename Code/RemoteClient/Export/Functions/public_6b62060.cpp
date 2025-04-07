#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62060, internal_6b62060, public_6b62060);
extern "C" NAKED register_t __cdecl internal_6b62060()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8d8]
        mov dword ptr ds : [public_6b74444], eax
        ret 
        UNREACHABLE_TRAP(0x6b62060)
    }
}
