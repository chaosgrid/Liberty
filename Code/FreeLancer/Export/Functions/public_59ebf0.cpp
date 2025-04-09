#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ebf0);

PROC_DECLARE(0x59ebf0, internal_59ebf0, public_59ebf0);
extern "C" NAKED register_t __cdecl internal_59ebf0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 4
        UNREACHABLE_TRAP(0x59ebf0)
    }
}
