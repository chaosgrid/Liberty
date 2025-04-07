#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555a40);

PROC_DECLARE(0x555a40, internal_555a40, public_555a40);
extern "C" NAKED register_t __cdecl internal_555a40()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax+0x14], ecx
        ret 
        UNREACHABLE_TRAP(0x555a40)
    }
}
