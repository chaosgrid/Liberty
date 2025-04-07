#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);

PROC_DECLARE(0x6343ff0, internal_6343ff0, public_6343ff0);
extern "C" NAKED register_t __cdecl internal_6343ff0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax-4]
        push ecx
        call public_6343fb0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6343ff0)
    }
}
