#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405f80);

PROC_DECLARE(0x405f80, internal_405f80, public_405f80);
extern "C" NAKED register_t __cdecl internal_405f80()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], edx
        mov byte ptr ds : [eax+0x18], cl
        mov byte ptr ds : [eax+0x19], 1
        mov byte ptr ds : [eax+0x1A], cl
        mov dword ptr ds : [eax+0x14], edx
        ret 
        UNREACHABLE_TRAP(0x405f80)
    }
}
