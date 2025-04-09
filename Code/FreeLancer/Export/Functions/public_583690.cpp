#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5835f0);
CLANG_FORWARD_PROC_SYMBOL(public_583690);

PROC_DECLARE(0x583690, internal_583690, public_583690);
extern "C" NAKED register_t __cdecl internal_583690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+4], eax
        jmp public_5835f0
        UNREACHABLE_TRAP(0x583690)
    }
}
