#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7e50, internal_6bf7e50, public_6bf7e50);
extern "C" NAKED register_t __cdecl internal_6bf7e50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e1e4]
        mov dword ptr ds : [public_6c13e78], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7e50)
    }
}
