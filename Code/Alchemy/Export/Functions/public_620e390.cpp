#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e390);
CLANG_FORWARD_PROC_SYMBOL(public_6244580);

PROC_DECLARE(0x620e390, internal_620e390, public_620e390);
extern "C" NAKED register_t __cdecl internal_620e390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244580
        UNREACHABLE_TRAP(0x620e390)
    }
}
