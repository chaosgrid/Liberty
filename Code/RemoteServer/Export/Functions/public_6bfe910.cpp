#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe910, internal_6bfe910, public_6bfe910);
extern "C" NAKED register_t __cdecl internal_6bfe910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3b4]
        mov dword ptr ds : [public_6c14028], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe910)
    }
}
