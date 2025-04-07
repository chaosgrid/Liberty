#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62eb0, internal_6b62eb0, public_6b62eb0);
extern "C" NAKED register_t __cdecl internal_6b62eb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e928]
        mov dword ptr ds : [public_6b74490], eax
        ret 
        UNREACHABLE_TRAP(0x6b62eb0)
    }
}
