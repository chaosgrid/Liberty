#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f25050);

PROC_DECLARE(0x6f25050, internal_6f25050, public_6f25050);
extern "C" NAKED register_t __cdecl internal_6f25050()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax], offset public_6fb8314
        ret 
        UNREACHABLE_TRAP(0x6f25050)
    }
}
