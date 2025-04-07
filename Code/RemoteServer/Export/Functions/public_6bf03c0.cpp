#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf03c0, internal_6bf03c0, public_6bf03c0);
extern "C" NAKED register_t __cdecl internal_6bf03c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df64]
        mov dword ptr ds : [public_6c13c6c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf03c0)
    }
}
