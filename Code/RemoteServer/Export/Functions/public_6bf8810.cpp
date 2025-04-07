#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8810, internal_6bf8810, public_6bf8810);
extern "C" NAKED register_t __cdecl internal_6bf8810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e218]
        mov dword ptr ds : [public_6c13ea4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8810)
    }
}
