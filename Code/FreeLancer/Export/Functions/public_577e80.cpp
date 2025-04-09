#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_577e10);
CLANG_FORWARD_PROC_SYMBOL(public_577e80);

PROC_DECLARE(0x577e80, internal_577e80, public_577e80);
extern "C" NAKED register_t __cdecl internal_577e80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push 0
        push eax
        push ecx
        call public_577e10
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x577e80)
    }
}
