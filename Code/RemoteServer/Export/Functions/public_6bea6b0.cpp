#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bea6b0, internal_6bea6b0, public_6bea6b0);
extern "C" NAKED register_t __cdecl internal_6bea6b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0d140]
        mov dword ptr ds : [public_6c13b94], eax
        ret 
        UNREACHABLE_TRAP(0x6bea6b0)
    }
}
