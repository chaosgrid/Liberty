#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444060);

PROC_DECLARE(0x444060, internal_444060, public_444060);
extern "C" NAKED register_t __cdecl internal_444060()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+8], 0
        ret 
        UNREACHABLE_TRAP(0x444060)
    }
}
