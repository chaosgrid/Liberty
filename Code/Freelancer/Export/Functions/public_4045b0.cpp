#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4045b0);

PROC_DECLARE(0x4045b0, internal_4045b0, public_4045b0);
extern "C" NAKED register_t __cdecl internal_4045b0()
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
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x30], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x4045b0)
    }
}
