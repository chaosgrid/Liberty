#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02fa0, internal_6c02fa0, public_6c02fa0);
extern "C" NAKED register_t __cdecl internal_6c02fa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4bc]
        mov dword ptr ds : [public_6c14188], eax
        ret 
        UNREACHABLE_TRAP(0x6c02fa0)
    }
}
