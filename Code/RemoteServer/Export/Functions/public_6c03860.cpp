#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03860, internal_6c03860, public_6c03860);
extern "C" NAKED register_t __cdecl internal_6c03860()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4e0]
        mov dword ptr ds : [public_6c141bc], eax
        ret 
        UNREACHABLE_TRAP(0x6c03860)
    }
}
