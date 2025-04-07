#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b370);
CLANG_FORWARD_PROC_SYMBOL(public_6244580);

PROC_DECLARE(0x623b370, internal_623b370, public_623b370);
extern "C" NAKED register_t __cdecl internal_623b370()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244580
        UNREACHABLE_TRAP(0x623b370)
    }
}
