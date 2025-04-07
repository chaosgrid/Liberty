#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c07a60, internal_6c07a60, public_6c07a60);
extern "C" NAKED register_t __cdecl internal_6c07a60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e618]
        mov dword ptr ds : [public_6c142c8], eax
        ret 
        UNREACHABLE_TRAP(0x6c07a60)
    }
}
