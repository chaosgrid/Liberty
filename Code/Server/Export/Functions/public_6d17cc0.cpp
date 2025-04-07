#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14210);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

PROC_DECLARE(0x6d17cc0, internal_6d17cc0, public_6d17cc0);
extern "C" NAKED register_t __cdecl internal_6d17cc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call public_6d15650
        mov ecx, eax
        call public_6d14210
        ret 
        UNREACHABLE_TRAP(0x6d17cc0)
    }
}
