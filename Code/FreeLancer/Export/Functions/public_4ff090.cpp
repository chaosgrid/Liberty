#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ff090);

PROC_DECLARE(0x4ff090, internal_4ff090, public_4ff090);
extern "C" NAKED register_t __cdecl internal_4ff090()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax], 0
        ret 
        UNREACHABLE_TRAP(0x4ff090)
    }
}
