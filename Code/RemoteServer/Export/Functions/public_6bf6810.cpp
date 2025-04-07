#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf6810, internal_6bf6810, public_6bf6810);
extern "C" NAKED register_t __cdecl internal_6bf6810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e148]
        mov dword ptr ds : [public_6c13e1c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf6810)
    }
}
