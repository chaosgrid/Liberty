#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd98c0, internal_6bd98c0, public_6bd98c0);
extern "C" NAKED register_t __cdecl internal_6bd98c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6c13a04]
        mov byte ptr ds : [public_6c13a30], 0
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x44]
        ret 
        UNREACHABLE_TRAP(0x6bd98c0)
    }
}
