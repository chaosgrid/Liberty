#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf03d0, internal_6bf03d0, public_6bf03d0);
extern "C" NAKED register_t __cdecl internal_6bf03d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df68]
        mov dword ptr ds : [public_6c13c64], eax
        ret 
        UNREACHABLE_TRAP(0x6bf03d0)
    }
}
