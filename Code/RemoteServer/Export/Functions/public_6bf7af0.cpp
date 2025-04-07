#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7af0, internal_6bf7af0, public_6bf7af0);
extern "C" NAKED register_t __cdecl internal_6bf7af0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e188]
        mov dword ptr ds : [public_6c13e58], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7af0)
    }
}
