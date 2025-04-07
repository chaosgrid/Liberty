#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c0d0);

PROC_DECLARE(0x43c0d0, internal_43c0d0, public_43c0d0);
extern "C" NAKED register_t __cdecl internal_43c0d0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_5cb024
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov byte ptr ds : [eax+0x14], cl
        ret 
        UNREACHABLE_TRAP(0x43c0d0)
    }
}
