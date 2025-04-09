#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59e810);

PROC_DECLARE(0x59dbf0, internal_59dbf0, public_59dbf0);
extern "C" NAKED register_t __cdecl internal_59dbf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, offset public_67dbe4
        call public_59e810
        ret 
        UNREACHABLE_TRAP(0x59dbf0)
    }
}
