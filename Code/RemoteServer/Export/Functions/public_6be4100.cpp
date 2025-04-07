#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be4100, internal_6be4100, public_6be4100);
extern "C" NAKED register_t __cdecl internal_6be4100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bdb8]
        mov dword ptr ds : [public_6c13b78], eax
        ret 
        UNREACHABLE_TRAP(0x6be4100)
    }
}
