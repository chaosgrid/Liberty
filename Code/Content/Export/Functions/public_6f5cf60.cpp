#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeba10);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cf60);

PROC_DECLARE(0x6f5cf60, internal_6f5cf60, public_6f5cf60);
extern "C" NAKED register_t __cdecl internal_6f5cf60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], eax
        jmp public_6eeba10
        UNREACHABLE_TRAP(0x6f5cf60)
    }
}
