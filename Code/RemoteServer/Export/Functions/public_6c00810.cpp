#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c00810, internal_6c00810, public_6c00810);
extern "C" NAKED register_t __cdecl internal_6c00810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e40c]
        mov dword ptr ds : [public_6c14094], eax
        ret 
        UNREACHABLE_TRAP(0x6c00810)
    }
}
