#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405890);

PROC_DECLARE(0x405890, internal_405890, public_405890);
extern "C" NAKED register_t __cdecl internal_405890()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        ret 
        UNREACHABLE_TRAP(0x405890)
    }
}
