#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be4110, internal_6be4110, public_6be4110);
extern "C" NAKED register_t __cdecl internal_6be4110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bdb8]
        mov dword ptr ds : [public_6c13b7c], eax
        ret 
        UNREACHABLE_TRAP(0x6be4110)
    }
}
