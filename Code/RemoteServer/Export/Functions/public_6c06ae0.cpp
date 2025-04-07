#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c06ae0, internal_6c06ae0, public_6c06ae0);
extern "C" NAKED register_t __cdecl internal_6c06ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5c4]
        mov dword ptr ds : [public_6c1425c], eax
        ret 
        UNREACHABLE_TRAP(0x6c06ae0)
    }
}
