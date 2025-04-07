#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227290);
CLANG_FORWARD_PROC_SYMBOL(public_6244580);

PROC_DECLARE(0x6227290, internal_6227290, public_6227290);
extern "C" NAKED register_t __cdecl internal_6227290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244580
        UNREACHABLE_TRAP(0x6227290)
    }
}
