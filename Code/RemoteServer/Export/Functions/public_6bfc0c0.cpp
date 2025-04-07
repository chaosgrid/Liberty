#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfc0c0, internal_6bfc0c0, public_6bfc0c0);
extern "C" NAKED register_t __cdecl internal_6bfc0c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2fc]
        mov dword ptr ds : [public_6c13f78], eax
        ret 
        UNREACHABLE_TRAP(0x6bfc0c0)
    }
}
