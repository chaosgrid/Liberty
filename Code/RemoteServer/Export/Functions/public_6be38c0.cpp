#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be38c0, internal_6be38c0, public_6be38c0);
extern "C" NAKED register_t __cdecl internal_6be38c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd84]
        mov dword ptr ds : [public_6c13b54], eax
        ret 
        UNREACHABLE_TRAP(0x6be38c0)
    }
}
