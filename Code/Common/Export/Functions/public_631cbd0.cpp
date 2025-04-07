#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631c210);
CLANG_FORWARD_PROC_SYMBOL(public_631cbd0);

PROC_DECLARE(0x631cbd0, internal_631cbd0, public_631cbd0);
extern "C" NAKED register_t __cdecl internal_631cbd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, offset public_6401768
        call public_631c210
        ret 
        UNREACHABLE_TRAP(0x631cbd0)
    }
}
