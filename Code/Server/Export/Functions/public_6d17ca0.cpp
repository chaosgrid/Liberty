#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d141f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

PROC_DECLARE(0x6d17ca0, internal_6d17ca0, public_6d17ca0);
extern "C" NAKED register_t __cdecl internal_6d17ca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d141f0
        ret 
        UNREACHABLE_TRAP(0x6d17ca0)
    }
}
