#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bea6a0, internal_6bea6a0, public_6bea6a0);
extern "C" NAKED register_t __cdecl internal_6bea6a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0d13c]
        mov dword ptr ds : [public_6c13b9c], eax
        ret 
        UNREACHABLE_TRAP(0x6bea6a0)
    }
}
