#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bef5b0, internal_6bef5b0, public_6bef5b0);
extern "C" NAKED register_t __cdecl internal_6bef5b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df10]
        mov dword ptr ds : [public_6c13c38], eax
        ret 
        UNREACHABLE_TRAP(0x6bef5b0)
    }
}
