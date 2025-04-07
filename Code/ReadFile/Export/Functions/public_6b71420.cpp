#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71420);

PROC_DECLARE(0x6b71420, internal_6b71420, public_6b71420);
extern "C" NAKED register_t __cdecl internal_6b71420()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6b71420)
    }
}
