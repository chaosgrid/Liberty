#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d9b10);

PROC_DECLARE(0x62d9b10, internal_62d9b10, public_62d9b10);
extern "C" NAKED register_t __cdecl internal_62d9b10()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [eax], offset public_63a054c
        ret 
        UNREACHABLE_TRAP(0x62d9b10)
    }
}
