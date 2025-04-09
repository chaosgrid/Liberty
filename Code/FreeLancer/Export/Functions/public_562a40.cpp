#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_562a40);

PROC_DECLARE(0x562a40, internal_562a40, public_562a40);
extern "C" NAKED register_t __cdecl internal_562a40()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x562a40)
    }
}
