#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403160);

PROC_DECLARE(0x403160, internal_403160, public_403160);
extern "C" NAKED register_t __cdecl internal_403160()
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
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x18], ecx
        ret 
        UNREACHABLE_TRAP(0x403160)
    }
}
