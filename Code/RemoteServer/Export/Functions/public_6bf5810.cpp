#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5810, internal_6bf5810, public_6bf5810);
extern "C" NAKED register_t __cdecl internal_6bf5810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0e8]
        mov dword ptr ds : [public_6c13dbc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5810)
    }
}
