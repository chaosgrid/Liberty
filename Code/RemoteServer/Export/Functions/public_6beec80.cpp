#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6beec80, internal_6beec80, public_6beec80);
extern "C" NAKED register_t __cdecl internal_6beec80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dec0]
        mov dword ptr ds : [public_6c13bfc], eax
        ret 
        UNREACHABLE_TRAP(0x6beec80)
    }
}
