#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6270e50);
CLANG_FORWARD_PROC_SYMBOL(public_6271470);

PROC_DECLARE(0x6271470, internal_6271470, public_6271470);
extern "C" NAKED register_t __cdecl internal_6271470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, offset public_63fbb74
        call public_6270e50
        ret 
        UNREACHABLE_TRAP(0x6271470)
    }
}
