#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf33f0, internal_6bf33f0, public_6bf33f0);
extern "C" NAKED register_t __cdecl internal_6bf33f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e02c]
        mov dword ptr ds : [public_6c13d1c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf33f0)
    }
}
