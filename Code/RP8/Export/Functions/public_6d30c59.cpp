#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30c59);

PROC_DECLARE(0x6d30c59, internal_6d30c59, public_6d30c59);
extern "C" NAKED register_t __cdecl internal_6d30c59()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        ret 
        UNREACHABLE_TRAP(0x6d30c59)
    }
}
