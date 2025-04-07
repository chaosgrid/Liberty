#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619c20);

PROC_DECLARE(0x6619c20, internal_6619c20, public_6619c20);
extern "C" NAKED register_t __cdecl internal_6619c20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        ret 
        UNREACHABLE_TRAP(0x6619c20)
    }
}
