#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b190);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b390);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);

PROC_DECLARE(0x6f4b390, internal_6f4b390, public_6f4b390);
extern "C" NAKED register_t __cdecl internal_6f4b390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f4f270
        add eax, 0x10
        push eax
        call public_6f4b190
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4b390)
    }
}
