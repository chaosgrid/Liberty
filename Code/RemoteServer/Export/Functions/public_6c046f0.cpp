#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c046f0, internal_6c046f0, public_6c046f0);
extern "C" NAKED register_t __cdecl internal_6c046f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e56c]
        mov dword ptr ds : [public_6c141fc], eax
        ret 
        UNREACHABLE_TRAP(0x6c046f0)
    }
}
