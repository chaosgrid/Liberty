#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f300);
CLANG_FORWARD_PROC_SYMBOL(public_6625c00);

PROC_DECLARE(0x661f300, internal_661f300, public_661f300);
extern "C" NAKED register_t __cdecl internal_661f300()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, offset public_662b114
        push eax
        call public_6625c00
        ret 
        UNREACHABLE_TRAP(0x661f300)
    }
}
