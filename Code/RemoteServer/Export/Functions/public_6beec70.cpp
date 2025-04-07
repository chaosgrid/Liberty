#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6beec70, internal_6beec70, public_6beec70);
extern "C" NAKED register_t __cdecl internal_6beec70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dec0]
        mov dword ptr ds : [public_6c13bf8], eax
        ret 
        UNREACHABLE_TRAP(0x6beec70)
    }
}
