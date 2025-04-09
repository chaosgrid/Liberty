#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538a70);

PROC_DECLARE(0x538a70, internal_538a70, public_538a70);
extern "C" NAKED register_t __cdecl internal_538a70()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax], offset public_5de738
        ret 
        UNREACHABLE_TRAP(0x538a70)
    }
}
