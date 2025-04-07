#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7e70, internal_6bf7e70, public_6bf7e70);
extern "C" NAKED register_t __cdecl internal_6bf7e70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e1e8]
        mov dword ptr ds : [public_6c13e74], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7e70)
    }
}
