#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9c70, internal_6bd9c70, public_6bd9c70);
extern "C" NAKED register_t __cdecl internal_6bd9c70()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [public_6c13a04]
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x44]
        ret 8
        UNREACHABLE_TRAP(0x6bd9c70)
    }
}
