#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228d0);

PROC_DECLARE(0x6d228d0, internal_6d228d0, public_6d228d0);
extern "C" NAKED register_t __cdecl internal_6d228d0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], offset public_6d68d00
        ret 
        UNREACHABLE_TRAP(0x6d228d0)
    }
}
