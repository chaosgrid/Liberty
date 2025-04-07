#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4127a0);

PROC_DECLARE(0x4127a0, internal_4127a0, public_4127a0);
extern "C" NAKED register_t __cdecl internal_4127a0()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4127a0)
    }
}
