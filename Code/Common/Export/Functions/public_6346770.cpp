#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346770);

PROC_DECLARE(0x6346770, internal_6346770, public_6346770);
extern "C" NAKED register_t __cdecl internal_6346770()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        and eax, 0xFFFFFC00
        mov word ptr ds : [ecx+0x52], 0
        mov dword ptr ds : [ecx+0x54], eax
        ret 
        UNREACHABLE_TRAP(0x6346770)
    }
}
