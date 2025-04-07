#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5ea20);

PROC_DECLARE(0x6f5ea20, internal_6f5ea20, public_6f5ea20);
extern "C" NAKED register_t __cdecl internal_6f5ea20()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], 1
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        ret 
        UNREACHABLE_TRAP(0x6f5ea20)
    }
}
