#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235c10);
CLANG_FORWARD_PROC_SYMBOL(public_6244580);

PROC_DECLARE(0x6235c10, internal_6235c10, public_6235c10);
extern "C" NAKED register_t __cdecl internal_6235c10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244580
        UNREACHABLE_TRAP(0x6235c10)
    }
}
